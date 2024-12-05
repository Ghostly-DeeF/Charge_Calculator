#include "SteelTube.h"
#include <cmath>

float diameter_steel_tube;
float thickness_steel_tube;

inline System::Void IZNT::SteelTube::calc_button_Click(System::Object^ sender, System::EventArgs^ e) {

    if (!float::TryParse(diameter_steel_tube_textBox->Text, diameter_steel_tube) && diameter_steel_tube <= 0) {
        answer_textBox->Text = " ������: �� ����������� ����� �������\r\n ����� ������ ���� ������ 0\r\n ������� ����� �������� ����� �������";
        return;
    }

    if (!float::TryParse(thickness_steel_tube_textBox->Text, thickness_steel_tube) && thickness_steel_tube <= 0) {
        answer_textBox->Text = " ������: �� ����������� ����� �������\r\n ����� ������ ���� ������ 0\r\n ������� ����� �������� ����� �������";
        return;
    }

    answerz = 20 * diameter_steel_tube * thickness_steel_tube * 3;

    if (checkUnderwaterExp->Checked) {
        answerz /= 1.5;
    }

    if (checkUnderwaterExp1->Checked) {
        answerz *= 2;
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


