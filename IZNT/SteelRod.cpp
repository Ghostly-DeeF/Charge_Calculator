#include "SteelRod.h"
#include <corecrt_math.h>

float diameter_steel_rod;

inline System::Void IZNT::SteelRod::calc_button_Click(System::Object^ sender, System::EventArgs^ e) {

    if (!float::TryParse(diameter_steel_tube_textBox->Text, diameter_steel_rod) && diameter_steel_rod <= 0) {
        answer_textBox->Text = " ������: �� ����������� ����� �������\r\n ����� ������ ���� ������ 0\r\n ������� ����� �������� ����� �������";
        return;
    }

    if (diameter_steel_rod <= 2) {
        answer_textBox->Text = "���������� 1 ����� �� 0,2 ��";
        return;
    }
    else
    {
        answerz = 10 * pow(diameter_steel_rod, 3);
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


