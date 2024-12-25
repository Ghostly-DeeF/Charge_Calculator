#include "Wood1.h"
#include "ExRecalc.h"


const float coef[3][2] = {
		{0.8f, 1.0f},
		{1.0f, 1.25f},
		{1.6f, 2.0f}
};



inline System::Void IZNT::Wood1::button1_Click(System::Object^ sender, System::EventArgs^ e) {

    if (type_wood_comboBox->SelectedIndex == -1) {
        answer_textBox->Text = " ������: �������� ��� ��������� �� ������";
        return;
    }
    if (condition_wood_comboBox->SelectedIndex == -1) {
        answer_textBox->Text = " ������: �������� ��������� ��������� �� ������";
        return;
    }

    float diameter_log;
    if (!float::TryParse(diameter_log_textBox->Text, diameter_log) && diameter_log <= 0) {
        answer_textBox->Text = " ������: �� ����������� ����� �������\r\n ����� ������ ���� ������ 0\r\n ������� ����� �������� ����� �������";
        return;
    }
    else {
        
        answer = coef[type_wood_comboBox->SelectedIndex][condition_wood_comboBox->SelectedIndex] * pow(diameter_log, 2);

        if (diameter_log > 30) {
            answer *= diameter_log / 30;
        }
        if (checkRing->Checked) {
            answer /= 3;
        }
        if (underwater_checkBox->Checked) {
            answer /= 2;
        }

        if (explosive_material_comboBox->SelectedIndex == -1) {
            answer_textBox->Text = " ������: �������� ��� �� �� ������";
            return;
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
}

inline System::Void IZNT::Wood1::diameter_log_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    float diameter_log;
    if (float::TryParse(diameter_log_textBox->Text, diameter_log) && diameter_log > 0) {
        underwater_checkBox->Text = "����� ��� �����\r\n(������ " + (diameter_log * 2) + " ��)";
    }
    else {
        underwater_checkBox->Text = "����� ��� �����";
    }
}

