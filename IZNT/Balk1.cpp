#include "Balk1.h"


const float coef[3][2] = {
		{0.8f, 1.0f},
		{1.0f, 1.25f},
		{1.6f, 2.0f}
};



inline System::Void IZNT::Balk1::calc_button_Click(System::Object^ sender, System::EventArgs^ e) {
    if (type_wood_comboBox->SelectedIndex == -1) {
        answer_textBox->Text = " ������: �������� ��� ��������� �� ������";
        return;
    }
    if (condition_wood_comboBox->SelectedIndex == -1) {
        answer_textBox->Text = " ������: �������� ��������� ��������� �� ������";
        return;
    }

    if (!float::TryParse(width_balk_textBox->Text, width_balk) && width_balk <= 0) {
        answer_textBox->Text = " ������: �� ����������� ����� ������\r\n ����� ������ ���� ������ 0\r\n ������� ����� �������� ����� �������";
        return;
    }

    if (!float::TryParse(thickness_balk_textBox->Text, thickness_balk) && thickness_balk <= 0) {
        answer_textBox->Text = " ������: �� ����������� ����� �������\r\n ����� ������ ���� ������ 0\r\n ������� ����� �������� ����� �������";
        return;
    }

    answer = coef[type_wood_comboBox->SelectedIndex][condition_wood_comboBox->SelectedIndex] * width_balk * thickness_balk;

    if (thickness_balk > 30) {
        answer *= thickness_balk / 30;
    }
    if (underwater_checkBox->Checked) {
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


inline System::Void IZNT::Balk1::thickness_balk_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {

    if (float::TryParse(thickness_balk_textBox->Text, thickness_balk) && thickness_balk > 0) {
        underwater_checkBox->Text = "����� ��� ����� (������ " + (thickness_balk * 2) + " ��)";
    } else {
        underwater_checkBox->Text = "����� ��� �����";
    }

    

}


