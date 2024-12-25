#include "SteelRod.h"
#include <cmath>
#include "ExRecalc.h"

float diameter_steel_rod = 0.0f;
float answery = 0.0f;

inline System::Void IZNT::SteelRod::checkPlastit_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (explosive_material_comboBox->SelectedIndex == 0) {
		pictureBox1->Image = Image::FromFile(".\\Picture\\img2Rod.bmp");
	}
	else {
		pictureBox1->Image = Image::FromFile(".\\Picture\\img1Rod.bmp");
	}
}

inline System::Void IZNT::SteelRod::calc_button_Click(System::Object^ sender, System::EventArgs^ e) {

	if (float::TryParse(diameter_steel_rod_textBox->Text, diameter_steel_rod) && diameter_steel_rod <= 0) {
		answer_textBox->Text = " ������: �� ����������� ����� �������\r\n ����� ������ ���� ������ 0\r\n ������� ����� �������� ����� �������";
		return;
	}


	answery = 10 * pow(diameter_steel_rod, 3);
	
	if (checkUnderwaterExp->Checked) {
		answery *= 2;
	}

	
	if (explosive_material_comboBox->SelectedIndex == -1) {
		answer_textBox->Text = " ������: �������� ��� �� �� ������";
		return;
	}
	answery = recalculation(explosive_material_comboBox, answer_textBox, answery);

	answery = round(answery);

	answer_textBox->Text = " ������ ��� ���������� ������: " + (answery / 1000).ToString() + " ��\r\n\r\n";

	if (explosive_material_comboBox->SelectedIndex == 0) {
		answery = ceil(answery / 200) * 200;
		answer_textBox->Text += " ��� ���������� �����: " + (answery / 1000).ToString() + " ��\r\n";
		if (((int)answery % 400 == 0)) {
			answer_textBox->Text += " ��������� �����:\r\n " + floor(answery / 400) + " �� 0,4 ��";
		}
		else if (answery / 400 >= 1) {
			answer_textBox->Text += " ��������� �����:\r\n " + floor(answery / 400) + " �� 0,4 ��\r\n 1 �� 0,2 ��\r\n\r\n ���\r\n " + ((floor(answery / 400) * 2) + 1) + " �� 0,2 ��";
		}
		else {
			answer_textBox->Text += " ��������� �����:\r\n 1 �� 0,2 ��";
		}
	}
}

