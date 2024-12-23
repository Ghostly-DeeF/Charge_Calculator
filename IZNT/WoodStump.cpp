#include "WoodStump.h"
#include "ExRecalc.h"

const float coef[3][2] = {
		{0.8f, 1.0f},
		{1.0f, 1.25f},
		{1.6f, 2.0f}
};

inline System::Void IZNT::WoodStump::calc_button_Click(System::Object^ sender, System::EventArgs^ e) {

    float diameter_log;
    if (!float::TryParse(diameter_log_textBox->Text, diameter_log) && diameter_log <= 0) {
        answer_textBox->Text = " ������: �� ����������� ����� �������\r\n ����� ������ ���� ������ 0\r\n ������� ����� �������� ����� �������";
        return;
    }
    else {

        answer = 15 * diameter_log;

        if (explosive_material_comboBox->SelectedIndex == -1) {
            answer_textBox->Text = " ������: �������� ��� �� �� ������";
            return;
        }
        answer = recalculation(explosive_material_comboBox, answer_textBox, answer);

        answer = round(answer);
        answer_textBox->Text = " ������ ��� ���������� ������: " + (answer / 1000).ToString() + " ��\r\n\r\n";

        answer = ceill(answer / 200) * 200;

        answer_textBox->Text += " ��� ���������� �����: " + (answer / 1000).ToString() + " ��\r\n";

        if (((int)answer % 400 == 0)) {
            answer_textBox->Text += " ��������� �����:\r\n " + floor(answer / 400) + " �� 0,4 ��\r\n\r\n";
        }
        else if (answer / 400 >= 1) {
            answer_textBox->Text += " ��������� �����:\r\n " + floor(answer / 400) + " �� 0,4 ��\r\n 1 �� 0,2 ��\r\n\r\n ���\r\n " + ((floor(answer / 400) * 2) + 1) + " �� 0,2 ��\r\n\r\n";
        }
        else {
            answer_textBox->Text += " ��������� �����:\r\n 1 �� 0,2 ��\r\n\r\n";
        }
        answer_textBox->Text += " ����� ����������� �� ������� " + diameter_log + " - " + diameter_log * 1.5f + " ��\r\n ������� �����������";

    }

}
