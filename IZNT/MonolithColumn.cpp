#include "MonolithColumn.h"
#include "ExRecalc.h"


const float masA[8]{ 0.75f, 1.0f, 1.2f, 1.4f, 1.5f, 1.8f, 5.0f, 20.0f };

const float masB[6][3] = {
	{9.0f, 5.0f, 1},
	{5.0f, 3.5f, 1},
	{1.7f, 1.5f, 0.666f},
	{1.3f, 1.15f, 0.5f},
	{5.0f, 2.5f, 1},
	{3.5f, 2.0f, 1}
};

const float count_line[9][3] = {
	{0.0f, 0.0f, 0.0f},
	{0.15f, 1.0f, 1.0f},
	{0.20f, 1.0f, 2.0f},
	{0.25f, 1.0f, 3.0f},
	{0.30f, 2.0f, 4.0f},
	{0.40f, 2.0f, 8.0f},
	{0.50f, 3.0f, 12.0f},
	{0.60f, 4.0f, 16.0f},
	{9999.9f, 0.0f, 0.0f}
};

inline IZNT::MonolithColumn::MonolithColumn(void)
{
	InitializeComponent();
	
	radius_label->Location = System::Drawing::Point(13, 300);
	radius_textBox->Location = System::Drawing::Point(16, 318);
	location_label->Location = System::Drawing::Point(13, 370);
	location_comboBox->Location = System::Drawing::Point(16, 388);
	pictureBox1->Location = System::Drawing::Point(16, 420);
	anti_slip_checkBox->Location = System::Drawing::Point(249, this->Height - 591 + 360);
	scoring_checkBox->Location = System::Drawing::Point(249, this->Height - 591 + 390);
	hole_checkBox->Location = System::Drawing::Point(249, this->Height - 591 + 450);
	underwater_checkBox->Location = System::Drawing::Point(249, this->Height - 591 + 420);

}

inline System::Void IZNT::MonolithColumn::type_charge_comboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (type_charge_comboBox->SelectedIndex == 1) {
		elongated_label->Visible = true;
		elongated_textBox->Visible = true;
		hole_checkBox->Visible = false;
		anti_slip_checkBox->Location = System::Drawing::Point(249, this->Height - 591 + 420);
		scoring_checkBox->Location = System::Drawing::Point(249, this->Height - 591 + 450);
		hole_checkBox->Location = System::Drawing::Point(249, this->Height - 591 + 450);
		underwater_checkBox->Location = System::Drawing::Point(249, this->Height - 591 + 480);
	}
	else {
		elongated_label->Visible = false;
		elongated_textBox->Visible = false;
		hole_checkBox->Visible = true;
		hole_checkBox->Checked = false;
		anti_slip_checkBox->Location = System::Drawing::Point(249, this->Height - 591 + 360);
		scoring_checkBox->Location = System::Drawing::Point(249, this->Height - 591 + 390);
		hole_checkBox->Location = System::Drawing::Point(249, this->Height - 591 + 450);
		hole_checkBox->Location = System::Drawing::Point(249, this->Height - 591 + 420);
		underwater_checkBox->Location = System::Drawing::Point(249, this->Height - 591 + 450);
	}
}

inline System::Void IZNT::MonolithColumn::type_material_comboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	switch (type_material_comboBox->SelectedIndex)
	{
	case 0:
		second_label->Visible = true;
		second_comboBox->Visible = true;
		second_label->Text = "��� ��������";
		second_comboBox->Items->Clear();
		second_comboBox->Items->Add("�����������");
		second_comboBox->Items->Add("���������");
		//719; 591
		radius_label->Location = System::Drawing::Point(13, 370);
		radius_textBox->Location = System::Drawing::Point(16, 388);
		location_label->Location = System::Drawing::Point(13, 440);
		location_comboBox->Location = System::Drawing::Point(16, 458);
		pictureBox1->Location = System::Drawing::Point(16, 490);
		break;

	case 1:
		second_label->Visible = true;
		second_comboBox->Visible = true;
		second_label->Text = "��� ��������";
		second_comboBox->Items->Clear();
		second_comboBox->Items->Add("���������");
		type_brick_lable->Visible = false;
		type_brickwork_comboBox->Visible = false;
		radius_label->Location = System::Drawing::Point(13, 370);
		radius_textBox->Location = System::Drawing::Point(16, 388);
		location_label->Location = System::Drawing::Point(13, 440);
		location_comboBox->Location = System::Drawing::Point(16, 458);
		pictureBox1->Location = System::Drawing::Point(16, 490);
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
		radius_label->Location = System::Drawing::Point(13, 370);
		radius_textBox->Location = System::Drawing::Point(16, 388);
		location_label->Location = System::Drawing::Point(13, 440);
		location_comboBox->Location = System::Drawing::Point(16, 458);
		pictureBox1->Location = System::Drawing::Point(16, 490);
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
		radius_label->Location = System::Drawing::Point(13, 370);
		radius_textBox->Location = System::Drawing::Point(16, 388);
		location_label->Location = System::Drawing::Point(13, 440);
		location_comboBox->Location = System::Drawing::Point(16, 458);
		pictureBox1->Location = System::Drawing::Point(16, 490);
		break;

	default:
		radius_label->Location = System::Drawing::Point(13, 370);
		radius_textBox->Location = System::Drawing::Point(16, 388);
		location_label->Location = System::Drawing::Point(13, 440);
		location_comboBox->Location = System::Drawing::Point(16, 458);
		pictureBox1->Location = System::Drawing::Point(16, 490);
		break;
	};
}

inline System::Void IZNT::MonolithColumn::second_comboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (type_material_comboBox->SelectedIndex == 0 && second_comboBox->SelectedIndex == 0) {
		type_brick_lable->Visible = true;
		type_brickwork_comboBox->Visible = true;
		radius_label->Location = System::Drawing::Point(13, 440);
		radius_textBox->Location = System::Drawing::Point(16, 458);
		location_label->Location = System::Drawing::Point(13, 510);
		location_comboBox->Location = System::Drawing::Point(16, 528);
		pictureBox1->Location = System::Drawing::Point(16, 560);
	}
	else {
		type_brick_lable->Visible = false;
		type_brickwork_comboBox->Visible = false;
		radius_label->Location = System::Drawing::Point(13, 370);
		radius_textBox->Location = System::Drawing::Point(16, 388);
		location_label->Location = System::Drawing::Point(13, 440);
		location_comboBox->Location = System::Drawing::Point(16, 458);
		pictureBox1->Location = System::Drawing::Point(16, 490);
	}
}

inline System::Void IZNT::MonolithColumn::location_comboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	switch (location_comboBox->SelectedIndex)
	{
	case 0:
		pictureBox1->Image = Image::FromFile(".\\Picture\\img1.bmp");
		break;
	case 1:
		pictureBox1->Image = Image::FromFile(".\\Picture\\img2.bmp");
		break;
	case 2:
		pictureBox1->Image = Image::FromFile(".\\Picture\\img3.bmp");
		break;
	case 3:
		pictureBox1->Image = Image::FromFile(".\\Picture\\img4.bmp");
		break;
	case 4:
		pictureBox1->Image = Image::FromFile(".\\Picture\\img5.bmp");
		break;
	case 5:
		pictureBox1->Image = Image::FromFile(".\\Picture\\img6.bmp");
		break;
	default:
		break;
	}
}

inline System::Void IZNT::MonolithColumn::calc_button_Click(System::Object^ sender, System::EventArgs^ e) {
	if (type_charge_comboBox->SelectedIndex == -1) {
		answer_textBox->Text = " ������: �������� ��� ������ �� ������";
		return;
	}
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
	if (location_comboBox->SelectedIndex == -1 && !plastic_checkBox->Checked) {
		answer_textBox->Text = " ������: �������� ����� ������������ �� ������";
		return;
	}

	float width = 0.0f;
	if (!float::TryParse(radius_textBox->Text, width) && width <= 0) {
		answer_textBox->Text = " ������: �� ����������� ����� �������\r\n ����� ������ ���� ������ 0\r\n ������� ����� �������� ����� �������";
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
	
	float coefB = 0.0f;
	if (location_comboBox->SelectedIndex == 0 && scoring_checkBox->Checked) {
		coefB = 6.5f;
	}
	else {
		coefB = masB[location_comboBox->SelectedIndex][(scoring_checkBox->Checked) ? 1 : 0];
	}

	switch (type_charge_comboBox->SelectedIndex)
	{
	case 0:
		answer = (masA[indexA] * coefB * pow(width * masB[location_comboBox->SelectedIndex][2], 3)) * 1000;
		answer_textBox->Text = " ���� ������ ������ " + width * 2 + " � ����� ������������\r\n ���������� �����!\r\n";
		break;

	case 1:
	{
		float length = 0.0f;
		if (!float::TryParse(elongated_textBox->Text, length) && length <= 0) {
			answer_textBox->Text = " ������: �� ����������� ����� ������\r\n ����� ������ ���� ������ 0\r\n ������� ����� �������� ����� �������";
			return;
		}
		if (width * 2 > length) {
			answer_textBox->Text = " ������ ������ " + width * 2 + " �!\r\n ����� ������������ ��������������� �����!\r\n";
		}
		else {
			answer_textBox->Text = "";
		}
		answer = (0.5 * masA[indexA] * coefB * pow(width * masB[location_comboBox->SelectedIndex][2], 2) * length) * 1000;
	}
		break;

	default:
		answer = 0.0f;
		break;
	}

	if (anti_slip_checkBox->Checked) {
		answer *= 6;
	}

	if (hole_checkBox->Checked) {
		answer *= 3;
	}

	if (underwater_checkBox->Checked&& indexA >= 6) {
		answer *= 1.5;
	}


	answer = recalculation(explosive_material_comboBox, answer_textBox, answer);
	answer = round(answer);

	answer_textBox->Text += " ������ ��� ���������� ������: " + (answer / 1000).ToString() + " ��\r\n\r\n";

	if (explosive_material_comboBox->SelectedIndex == 0) {
		answer = ceill(answer / 200) * 200;

		answer_textBox->Text += " ��� ���������� �����: " + (answer / 1000).ToString() + " ��\r\n";

		if (((int)answer % 400 == 0)) {
			answer_textBox->Text += " ��������� �����:\r\n " + floor(answer / 400) + " �� 0,4 ��\r\n";
		}
		else if (answer / 400 >= 1) {
			answer_textBox->Text += " ��������� �����:\r\n " + floor(answer / 400) + " �� 0,4 ��\r\n 1 �� 0,2 ��\r\n\ ��� " + ((floor(answer / 400) * 2) + 1) + " �� 0,2 ��\r\n";
		}
		else {
			answer_textBox->Text += " ��������� �����:\r\n 1 �� 0,2 ��\r\n";
		}

		if (hole_checkBox->Checked) {
			answer_textBox->Text += "������� ��������� ����� �������� " + width * 2 + " �";
		}
	}
}




