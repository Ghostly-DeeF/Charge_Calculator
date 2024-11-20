#include "SteelSheets.h"
#include <corecrt_math.h>

float thickness_steel_sheets = 0.0f;
float width_steel_sheets = 0.0f;
float answer = 0.0f;



inline System::Void IZNT::SteelSheets::calc_button_Click(System::Object^ sender, System::EventArgs^ e) {
    
    if (!float::TryParse(thickness_steel_sheets_textBox->Text, thickness_steel_sheets) && thickness_steel_sheets <= 0) {
        answer_textBox->Text = " ������: �� ����������� ����� �������\r\n ����� ������ ���� ������ 0\r\n ������� ����� �������� ����� �������";
        return;
    }

    if (!float::TryParse(width_steel_sheets_textBox->Text, width_steel_sheets) && width_steel_sheets <= 0) {
        answer_textBox->Text = " ������: �� ����������� ����� ������\r\n ����� ������ ���� ������ 0\r\n ������� ����� �������� ����� �������";
        return;
    }

    if (thickness_steel_sheets <= 2) {
        answer = 20 * thickness_steel_sheets * width_steel_sheets;
    }

    if (thickness_steel_sheets > 2) {
        answer = 10 * thickness_steel_sheets * (thickness_steel_sheets * width_steel_sheets);
    }

    if (checkCharge�umulative->Checked) {
        answer = (10 * thickness_steel_sheets * (thickness_steel_sheets * width_steel_sheets)) / 2;
    }

    if (checkConcentratedCharge->Checked) {
        answer = 2.5 * pow(thickness_steel_sheets, 3);
    }