#include "SteelSheets.h"
#include <cmath>

double thickness_steel_sheets = 0.0;
double width_steel_sheets = 0.0;
double answer = 0.0;

const float coef[9][2] = {
        {0.0f, 1.0f},
        {1.0f, 1.0f},
        {1.5f, 2.0f},
        {2.5f, 3.0f},
        {3.5f, 4.0f},
        {4.0f, 5.0f},
        {4.5f, 6.0f},
        {5.0f, 0.0f},
        {9999.9f, 0.0f}
};

inline System::Void IZNT::SteelSheets::calc_button_Click(System::Object^ sender, System::EventArgs^ e) {

    if (!double::TryParse(thickness_steel_sheets_textBox->Text, thickness_steel_sheets) && thickness_steel_sheets <= 0) {
        answer_textBox->Text = " ������: �� ����������� ����� �������\r\n ����� ������ ���� ������ 0\r\n ������� ����� �������� ����� �������";
        return;
    }

    if (!double::TryParse(width_steel_sheets_textBox->Text, width_steel_sheets) && width_steel_sheets <= 0) {
        answer_textBox->Text = " ������: �� ����������� ����� ������\r\n ����� ������ ���� ������ 0\r\n ������� ����� �������� ����� �������";
        return;
    }

    if (type_charge_comboBox->SelectedIndex == -1) {
        answer_textBox->Text = " ������: �������� ��� ������ �� ������";
        return;
    }

    if (!checkWater->Checked && !checkUnderwaterExp->Checked && !checkWoodenStop->Checked &&
        !checkDemolitionSkin->Checked && !checkDemolitionSkinWater->Checked) {
        answer_textBox->Text = " ������: �������� ����������� ����� �������";
        return;
    }

    if (ceil(thickness_steel_sheets) <= 2) {
        answer = 20 * ceil(thickness_steel_sheets) * width_steel_sheets;
    }
    else if (ceil(thickness_steel_sheets) > 2) {
        answer = 10 * ceil(thickness_steel_sheets) * (ceil(thickness_steel_sheets) * width_steel_sheets);
    }

    if (checkArm->Checked) {
        answer *= 2;
    }

    if (checkUnderwaterExp->Checked && !checkWoodenStop->Checked) {
        answer *= 2;
    }

    if (checkUnderwaterExp->Checked && checkWoodenStop->Checked) {
        if (ceil(thickness_steel_sheets) <= 2) {
            answer = 20 * ceil(thickness_steel_sheets) * width_steel_sheets;
        }
        else if (ceil(thickness_steel_sheets) > 2) {
            answer = 10 * ceil(thickness_steel_sheets) * (ceil(thickness_steel_sheets) * width_steel_sheets);
        }
    }

    if (checkDemolitionSkin->Checked) {
        answer *= 4;
    }

    if (checkDemolitionSkinWater->Checked) {
        answer /= 1.5;
    }
    
    if (type_charge_comboBox->SelectedIndex == 0) {
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

    if (type_charge_comboBox->SelectedIndex == 1) {
        int i = 0;
        for (i = 0; i < 9; i++) {
            if (thickness_steel_sheets >= coef[i][0] && thickness_steel_sheets < coef[i + 1][0]) {
                break;
            }
        }
        if (i < 7) {
            answer = round(answer);
            answer_textBox->Text = " ������ ��� ���������� ������: " + (answer / 1000).ToString() + " ��\r\n\r\n";
            answer = coef[i][1];
            answer_textBox->Text += " ��������� " + answer + " �� ����� ������������ ������";
        }
        else {
            answer_textBox->Text = " ������� ������ 5 ��!\r\n ����������� ������ ��� ������";
        }
    }
}
