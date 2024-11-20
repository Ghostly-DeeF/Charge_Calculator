#include "SteelSheets.h"
#include <corecrt_math.h>

float thickness_steel_sheets = 0.0f;
float width_steel_sheets = 0.0f;
float answer = 0.0f;



inline System::Void IZNT::SteelSheets::calc_button_Click(System::Object^ sender, System::EventArgs^ e) {
    
    if (!float::TryParse(thickness_steel_sheets_textBox->Text, thickness_steel_sheets) && thickness_steel_sheets <= 0) {
        answer_textBox->Text = " Ошибка: вы некорректно ввели толщину\r\n Число должно быть больше 0\r\n Дробное число задается через запятую";
        return;
    }

    if (!float::TryParse(width_steel_sheets_textBox->Text, width_steel_sheets) && width_steel_sheets <= 0) {
        answer_textBox->Text = " Ошибка: вы некорректно ввели ширину\r\n Число должно быть больше 0\r\n Дробное число задается через запятую";
        return;
    }

    if (thickness_steel_sheets <= 2) {
        answer = 20 * thickness_steel_sheets * width_steel_sheets;
    }

    if (thickness_steel_sheets > 2) {
        answer = 10 * thickness_steel_sheets * (thickness_steel_sheets * width_steel_sheets);
    }

    if (checkChargeСumulative->Checked) {
        answer = (10 * thickness_steel_sheets * (thickness_steel_sheets * width_steel_sheets)) / 2;
    }

    if (checkConcentratedCharge->Checked) {
        answer = 2.5 * pow(thickness_steel_sheets, 3);
    }