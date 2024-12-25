#include "MonolithNoncontact.h"
#include "ExRecalc.h"

const float masA[8]{ 0.75f, 1.0f, 1.2f, 1.4f, 1.5f, 1.8f, 5.0f, 20.0f };

inline IZNT::MonolithNoncontact::MonolithNoncontact(void)
{
	InitializeComponent();
	pictureBox1->Image = Image::FromFile(".\\Picture\\img1NonContact.bmp");
	hole_checkBox->Location = System::Drawing::Point(16, 370);
	underwater_checkBox->Location = System::Drawing::Point(16, 420);
}

inline System::Void IZNT::MonolithNoncontact::type_material_comboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	switch (type_material_comboBox->SelectedIndex)
	{
	case 0:
		second_label->Visible = true;
		second_comboBox->Visible = true;
		second_label->Text = "��� ��������";
		second_comboBox->Items->Clear();
		second_comboBox->Items->Add("�����������");
		second_comboBox->Items->Add("���������");
		hole_checkBox->Location = System::Drawing::Point(16, 440);
		underwater_checkBox->Location = System::Drawing::Point(16, 490);
		break;

	case 1:
		second_label->Visible = true;
		second_comboBox->Visible = true;
		second_label->Text = "��� ��������";
		second_comboBox->Items->Clear();
		second_comboBox->Items->Add("���������");
		type_brick_lable->Visible = false;
		type_brickwork_comboBox->Visible = false;
		hole_checkBox->Location = System::Drawing::Point(16, 440);
		underwater_checkBox->Location = System::Drawing::Point(16, 490);
		break;

	case 2:
		second_label->Visible = true;
		second_comboBox->Visible = true;
		second_label->Text = "��� ������";
		second_comboBox->Items->Clear();
		second_comboBox->Items->Add("������������");
		second_comboBox->Items->Add("����������������");
		type_brick_lable->Visible = false;
		type_brickwork_comboBox->Visible = false;
		hole_checkBox->Location = System::Drawing::Point(16, 440);
		underwater_checkBox->Location = System::Drawing::Point(16, 490);
		break;

	case 3:
		second_label->Visible = true;
		second_comboBox->Visible = true;
		second_label->Text = "��� �����������";
		second_comboBox->Items->Clear();
		second_comboBox->Items->Add("������");
		second_comboBox->Items->Add("������ � �������� ��������");
		type_brick_lable->Visible = false;
		type_brickwork_comboBox->Visible = false;
		hole_checkBox->Location = System::Drawing::Point(16, 440);
		underwater_checkBox->Location = System::Drawing::Point(16, 490);
		break;

	default:
		break;
	};
}

inline System::Void IZNT::MonolithNoncontact::second_comboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (type_material_comboBox->SelectedIndex == 0 && second_comboBox->SelectedIndex == 0) {
		type_brick_lable->Visible = true;
		type_brickwork_comboBox->Visible = true;
		hole_checkBox->Location = System::Drawing::Point(16, 510);
		underwater_checkBox->Location = System::Drawing::Point(16, 560);
	}
	else {
		type_brick_lable->Visible = false;
		type_brickwork_comboBox->Visible = false;
		hole_checkBox->Location = System::Drawing::Point(16, 440);
		underwater_checkBox->Location = System::Drawing::Point(16, 490);
	}
}

inline System::Void IZNT::MonolithNoncontact::calc_button_Click(System::Object^ sender, System::EventArgs^ e) {

	if (type_material_comboBox->SelectedIndex == -1) {
		answer_textBox->Text = " ������: �������� �������� �� ������";
		return;
	}
	if (second_comboBox->SelectedIndex == -1) {
		answer_textBox->Text = " ������: �������� ��� �� ������";
		return;
	}
	if (type_brickwork_comboBox->SelectedIndex == -1 && type_material_comboBox->SelectedIndex == 0 && second_comboBox->SelectedIndex == 0) {
		answer_textBox->Text = " ������: �������� ��� ������ �� ������";
		return;
	}

	float thikness = 0.0f;
	if (!float::TryParse(thikness_textBox->Text, thikness) && thikness <= 0) {
		answer_textBox->Text = " ������: �� ����������� ����� �������\r\n ����� ������ ���� ������ 0\r\n ������� ����� �������� ����� �������";
		return;
	}

	float radius = 0.0f;
	if (!float::TryParse(radius_textBox->Text, radius) && radius <= 0) {
		answer_textBox->Text = " ������: �� ����������� ����� ����������\r\n ����� ������ ���� ������ 0\r\n ������� ����� �������� ����� �������";
		return;
	}



	int indexA = 0;
	if (type_material_comboBox->SelectedIndex == 0) {
		if (second_comboBox->SelectedIndex == 0) {
			if (type_brickwork_comboBox->SelectedIndex == 0) indexA = 0;
			if (type_brickwork_comboBox->SelectedIndex == 1) indexA = 1;
		}
		if (second_comboBox->SelectedIndex == 1) indexA = 2;
	}
	if (type_material_comboBox->SelectedIndex == 1) indexA = 3;
	if (type_material_comboBox->SelectedIndex == 2) {
		if (second_comboBox->SelectedIndex == 0) indexA = 4;
		if (second_comboBox->SelectedIndex == 1) indexA = 5;
	}
	if (type_material_comboBox->SelectedIndex == 3) {
		if (second_comboBox->SelectedIndex == 0) indexA = 6;
		if (second_comboBox->SelectedIndex == 1) indexA = 7;
	}



	answer = 10 * masA[indexA] * thikness * pow(radius, 2) * 1000;

	if (hole_checkBox->Checked) {
		answer *= 3;
	}

	if (underwater_checkBox->Checked) {
		answer /= 1.5f;
	}

	answer = recalculation(explosive_material_comboBox, answer_textBox, answer);
	answer = round(answer);
	answer_textBox->Text = " ������ ��� ���������� ������: " + (answer / 1000).ToString() + " ��\r\n\r\n";

	if (explosive_material_comboBox->SelectedIndex == 0) {
		answer = ceill(answer / 200) * 200;

		answer_textBox->Text += " ��� ���������� �����: " + (answer / 1000).ToString() + " ��\r\n";

		if (((int)answer % 400 == 0)) {
			answer_textBox->Text += " ��������� �����:\r\n " + floor(answer / 400) + " �� 0,4 ��";
		}
		else if (answer / 400 >= 1) {
			answer_textBox->Text += " ��������� �����:\r\n " + floor(answer / 400) + " �� 0,4 ��\r\n 1 �� 0,2 ��\r\n\r\n ���\r\n " + ((floor(answer / 400) * 2) + 1) + " �� 0,2 ��";
		}
		else {
			answer_textBox->Text += " ��������� �����:\r\n 1 �� 0,2 ��";
		}
	}
}

inline System::Void IZNT::MonolithNoncontact::radius_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	float radius;
	if (float::TryParse(radius_textBox->Text, radius) && radius > 0) {
		underwater_checkBox->Text = "����� ��� �����\r\n(������ " + (radius / 2) + " �)";
	}
	else {
		underwater_checkBox->Text = "����� ��� �����";
	}
}


