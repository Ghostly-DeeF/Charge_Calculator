#include "WoodNoncontact.h"

const float coef[3][2] = {
		{0.8f, 1.0f},
		{1.0f, 1.25f},
		{1.6f, 2.0f}
};

inline System::Void IZNT::WoodNoncontact::calc_button_Click(System::Object^ sender, System::EventArgs^ e) {
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
    diameter_log /= 100;

    float distanse;
    if (!float::TryParse(distanse_textBox->Text, distanse) && distanse <= 0) {
        answer_textBox->Text = " ������: �� ����������� ����� ����������\r\n ����� ������ ���� ������ 0\r\n ������� ����� �������� ����� �������";
        return;
    }

    if (distanse < 2 * diameter_log) {
        answer_textBox->Text = "���������� ������, ��� 2 ��������.\r\n����������� ������ ��� ���������� ������� (������� '������ ��� ���� ����', '����� ��� ����� ������', '����������� �����')";
        return;
    }

    answer = (30 * coef[type_wood_comboBox->SelectedIndex][condition_wood_comboBox->SelectedIndex] * diameter_log * pow(distanse, 2)) * 1000;

    if (underwater_checkBox->Checked && condition_wood_comboBox->SelectedIndex == 1) {
        answer /= 2;
    }

    answer = round(answer);
    answer_textBox->Text = " ������ ��� ���������� ������: " + (answer / 1000).ToString() + " ��\r\n\r\n";

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

inline System::Void IZNT::WoodNoncontact::distanse_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    float distanse;
    if (float::TryParse(distanse_textBox->Text, distanse) && distanse > 0) {
        underwater_checkBox->Text = "����� ��� �����\r\n(������ " + (distanse / 2) + " �)";
    }
    else {
        underwater_checkBox->Text = "����� ��� �����";
    }
}
