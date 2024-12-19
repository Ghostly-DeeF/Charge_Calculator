#include "SteelTube.h"
#include <cmath>

float diameter_steel_tube;
float thickness_steel_tube;

inline System::Void IZNT::SteelTube::checkUnderwaterExp_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    if (checkUnderwaterExp->Checked && !checkFillingWater->Checked) {
        pictureBox1->Image = Image::FromFile(".\\Picture\\img2Tube.bmp");
    }
    else if (checkUnderwaterExp->Checked && checkFillingWater->Checked) {
        pictureBox1->Image = Image::FromFile(".\\Picture\\img3Tube.bmp");
    }
    else if (!checkUnderwaterExp->Checked && checkFillingWater->Checked) {
        pictureBox1->Image = Image::FromFile(".\\Picture\\img4Tube.bmp");
    }
    else if (!checkUnderwaterExp->Checked && !checkFillingWater->Checked) {
        pictureBox1->Image = Image::FromFile(".\\Picture\\img1Tube.bmp");
    }
}

inline System::Void IZNT::SteelTube::checkFillingWater_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    if (checkUnderwaterExp->Checked && !checkFillingWater->Checked) {
        pictureBox1->Image = Image::FromFile(".\\Picture\\img2Tube.bmp");
    }
    else if (checkUnderwaterExp->Checked && checkFillingWater->Checked) {
        pictureBox1->Image = Image::FromFile(".\\Picture\\img3Tube.bmp");
    }
    else if (!checkUnderwaterExp->Checked && checkFillingWater->Checked) {
        pictureBox1->Image = Image::FromFile(".\\Picture\\img4Tube.bmp");
    }
    else if (!checkUnderwaterExp->Checked && !checkFillingWater->Checked) {
        pictureBox1->Image = Image::FromFile(".\\Picture\\img1Tube.bmp");
    }
}


inline System::Void IZNT::SteelTube::calc_button_Click(System::Object^ sender, System::EventArgs^ e) {

    if (!float::TryParse(diameter_steel_tube_textBox->Text, diameter_steel_tube) && diameter_steel_tube <= 0) {
        answer_textBox->Text = " ������: �� ����������� ����� �������\r\n ����� ������ ���� ������ 0\r\n ������� ����� �������� ����� �������";
        return;
    }

    if (!float::TryParse(thickness_steel_tube_textBox->Text, thickness_steel_tube) && thickness_steel_tube <= 0) {
        answer_textBox->Text = " ������: �� ����������� ����� �������\r\n ����� ������ ���� ������ 0\r\n ������� ����� �������� ����� �������";
        return;
    }

    answerz = 20 * diameter_steel_tube * thickness_steel_tube * 3.14;

    if (checkUnderwaterExp->Checked && !checkFillingWater->Checked) {
        answerz /= 1.5f;
    }
    else if (checkUnderwaterExp->Checked && checkFillingWater->Checked) {
        answerz *= 2;
    }
    else if (!checkUnderwaterExp->Checked && checkFillingWater->Checked) {
        answerz *= 4;
    }


    answerz = round(answerz);
    answer_textBox->Text = " ������ ��� ���������� ������: " + (answerz / 1000).ToString() + " ��\r\n\r\n";

    answerz = ceill(answerz / 200) * 200;

    answer_textBox->Text += " ��� ���������� �����: " + (answerz / 1000).ToString() + " ��\r\n";

    if (((int)answerz % 400 == 0)) {
        answer_textBox->Text += " ��������� �����:\r\n " + floor(answerz / 400) + " �� 0,4 ��";
    }
    else if (answerz / 400 >= 1) {
        answer_textBox->Text += " ��������� �����:\r\n " + floor(answerz / 400) + " �� 0,4 ��\r\n 1 �� 0,2 ��\r\n\r\n ���\r\n " + ((floor(answerz / 400) * 2) + 1) + " �� 0,2 ��";
    }
    else {
        answer_textBox->Text += " ��������� �����:\r\n 1 �� 0,2 ��";
    }
}


