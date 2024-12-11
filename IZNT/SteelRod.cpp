#include "SteelRod.h"
#include <cmath>

float diameter_steel_rod = 0.0f;
float answery = 0.0f;

inline System::Void IZNT::SteelRod::calc_button_Click(System::Object^ sender, System::EventArgs^ e) {


	if (float::TryParse(diameter_steel_rod_textBox->Text, diameter_steel_rod) && diameter_steel_rod <= 0) {
		answer_textBox->Text = " ������: �� ����������� ����� �������\r\n ����� ������ ���� ������ 0\r\n ������� ����� �������� ����� �������";
		return;
	}

	if (diameter_steel_rod > 2) {
		answery = 10 * pow(diameter_steel_rod, 3);
	}

	if (checkPlastit->Checked) {
		answery = (10 * pow(diameter_steel_rod, 3)) / 2;
	}

	if (checkUnderwaterExp->Checked) {
		answery *= 2;
	}

	answery = round(answery);
	answer_textBox->Text = " ������ ��� ���������� ������: " + (answery / 1000).ToString() + " ��\r\n\r\n";

	answery = ceill(answery / 200) * 200;

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


