#include "SteelBeam.h"
#include <corecrt_math.h>

float thickness_steel_beam = 0.0f;
float width_steel_beam = 0.0f;
float answer = 0.0f;

inline System::Void IZNT::SteelBeam::calc_button_Click(System::Object^ sender, System::EventArgs^ e) {

    if (!float::TryParse(thickness_steel_beam_textBox->Text, thickness_steel_beam) && thickness_steel_beam <= 0) {
        answer_textBox->Text = " ������: �� ����������� ����� �������\r\n ����� ������ ���� ������ 0\r\n ������� ����� �������� ����� �������";
        return;
    }

    if (!float::TryParse(width_steel_beam_textBox->Text, width_steel_beam) && width_steel_beam <= 0) {
        answer_textBox->Text = " ������: �� ����������� ����� ������\r\n ����� ������ ���� ������ 0\r\n ������� ����� �������� ����� �������";
        return;
    }

    thickness_steel_beam = round(thickness_steel_beam);
    if (ShapedCharge->Checked) {
        if (thickness_steel_beam <= 2) {
            answer = 20 * thickness_steel_beam * width_steel_beam;
        }

        if (thickness_steel_beam > 2) {
            answer = 10 * thickness_steel_beam * (thickness_steel_beam * width_steel_beam);
        }

        answer = round(answer);
        answer_textBox->Text = " ������ ��� ���������� ������: " + (answer / 1000).ToString() + " ��\r\n\r\n";

        answer = ceill(answer / 200) * 200;

        answer_textBox->Text += " ��� ���������� �����: " + (answer / 1000).ToString() + " ��\r\n";

        if ((int)answer % 400 == 0) {
            answer_textBox->Text += " ��������� �����:\r\n " + floor(answer / 400) + " �� 0,4 ��";
        }
        else if (answer / 400 >= 1) {
            answer_textBox->Text += " ��������� �����:\r\n " + floor(answer / 400) + " �� 0,4 ��\r\n 1 �� 0,2 ��\r\n\r\n ���\r\n " + ((floor(answer / 400) * 2) + 1) + " �� 0,2 ��";
        }
        else {
            answer_textBox->Text += " ��������� �����:\r\n 1 �� 0,2 ��";
        }
    }

    if (ConcentratedCharge->Checked) {
        if (thickness_steel_beam <= 2) {
            answer = 20 * thickness_steel_beam * width_steel_beam;
        }

        if (thickness_steel_beam > 2) {
            answer = 10 * thickness_steel_beam * (thickness_steel_beam * width_steel_beam);
        }
        answer *= 2;
        answer = round(answer);
        answer_textBox->Text = " ������ ��� ���������� ������: " + (answer / 1000).ToString() + " ��\r\n\r\n";

        answer = ceill(answer / 200) * 200;

        answer_textBox->Text += " ��� ���������� �����: " + (answer / 1000).ToString() + " ��\r\n";

        if ((int)answer % 400 == 0) {
            answer_textBox->Text += " ��������� �����:\r\n " + floor(answer / 400) + " �� 0,4 ��";
        }
        else if (answer / 400 >= 1) {
            answer_textBox->Text += " ��������� �����:\r\n " + floor(answer / 400) + " �� 0,4 ��\r\n 1 �� 0,2 ��\r\n\r\n ���\r\n " + ((floor(answer / 400) * 2) + 1) + " �� 0,2 ��";
        }
        else {
            answer_textBox->Text += " ��������� �����:\r\n 1 �� 0,2 ��";
        }
    }

    if (checkUnderwaterExp->Checked) {
        answer *= 2;
        answer = round(answer);
        answer_textBox->Text = " ������ ��� ���������� ������: " + (answer / 1000).ToString() + " ��\r\n\r\n";

        answer = ceill(answer / 200) * 200;

        answer_textBox->Text += " ��� ���������� �����: " + (answer / 1000).ToString() + " ��\r\n";

        if ((int)answer % 400 == 0) {
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
