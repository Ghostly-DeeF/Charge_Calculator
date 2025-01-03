#include "SteelCable.h"
#include <cmath>
#include "ExRecalc.h"


float diameter_steel_cable;

inline IZNT::SteelCable::SteelCable(void)
{
    InitializeComponent();
    pictureBox1->Image = Image::FromFile(".\\Picture\\img1Cable.bmp");
}

inline System::Void IZNT::SteelCable::checkBox_Steel_Cable_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    if (checkBox_Steel_Cable->Checked) {
        pictureBox1->Image = Image::FromFile(".\\Picture\\img2Cable.bmp");
    }
    else {
        pictureBox1->Image = Image::FromFile(".\\Picture\\img1Cable.bmp");
    }
}

inline System::Void IZNT::SteelCable::explosive_material_comboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    if (explosive_material_comboBox->SelectedIndex == 0) {
        checkBox_Steel_Cable->Visible = false;
        checkBox_Steel_Cable->Checked = false;
    }
    else {
        checkBox_Steel_Cable->Visible = true;
    }
}

inline System::Void IZNT::SteelCable::calc_button_Click(System::Object^ sender, System::EventArgs^ e) {

    if (!float::TryParse(diameter_steel_cable_textBox->Text, diameter_steel_cable) && diameter_steel_cable <= 0) {
        answer_textBox->Text = " ������: �� ����������� ����� �������\r\n ����� ������ ���� ������ 0\r\n ������� ����� �������� ����� �������";
        return;
    }



    answerz = 10 * pow(diameter_steel_cable, 3);

    

    if (checkUnderwaterExp->Checked) {
        answerz *= 2;
    }
    if (checkBox_Steel_Cable->Checked) {
        answerz /= 4;
    }

    if (explosive_material_comboBox->SelectedIndex == -1) {
        answer_textBox->Text = " ������: �������� ��� �� �� ������";
        return;
    }
    answerz = recalculation(explosive_material_comboBox, answer_textBox, answerz);

    answerz = round(answerz);
    answer_textBox->Text = " ������ ����� ��� ���������� ������: " + ((2 * answerz) / 1000).ToString() + " ��\r\n\r\n";

    if (explosive_material_comboBox->SelectedIndex == 0) {
        answerz = ceill(answerz / 200) * 200;

        answer_textBox->Text += " ��� ���������� �����: " + ((answerz / 1000) * 2).ToString() + " ��\r\n";

        if (((int)answerz % 400 == 0)) {
            answer_textBox->Text += " ��������� �����:\r\n " + floor(answerz / 400) * 2 + " �� 0,4 ��";
        }
        else if (answerz / 400 >= 1) {
            answer_textBox->Text += " ��������� �����:\r\n " + floor(answerz / 400) * 2 + " �� 0,4 ��\r\n 2 �� 0,2 ��\r\n\r\n ���\r\n " + (((floor(answerz / 400) * 2)) * 2) + " �� 0,2 ��";
        }
        else {
            answer_textBox->Text += " ��������� �����:\r\n 2 �� 0,2 ��";
        }
    }
}


