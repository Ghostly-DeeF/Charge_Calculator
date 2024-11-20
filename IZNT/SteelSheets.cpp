#include "SteelSheets.h"
#include <corecrt_math.h>

double thickness_steel_sheets = 0.0;
double width_steel_sheets = 0.0;
double answer = 0.0;



inline System::Void IZNT::SteelSheets::calc_button_Click(System::Object^ sender, System::EventArgs^ e) {

    if (!double::TryParse(thickness_steel_sheets_textBox->Text, thickness_steel_sheets) && thickness_steel_sheets <= 0) {
        answer_textBox->Text = " Ошибка: вы некорректно ввели толщину\r\n Число должно быть больше 0\r\n Дробное число задается через запятую";
        return;
    }

    if (!double::TryParse(width_steel_sheets_textBox->Text, width_steel_sheets) && width_steel_sheets <= 0) {
        answer_textBox->Text = " Ошибка: вы некорректно ввели ширину\r\n Число должно быть больше 0\r\n Дробное число задается через запятую";
        return;
    }

    thickness_steel_sheets = round(thickness_steel_sheets);
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

    answer = round(answer);
    answer_textBox->Text = " Точный вес требуемого заряда: " + (answer / 1000).ToString() + " кг\r\n\r\n";

    answer = ceill(answer / 200) * 200;

    answer_textBox->Text += " Вес тротиловых шашек: " + (answer / 1000).ToString() + " кг\r\n";

    if ((int)answer % 400 == 0) {
        answer_textBox->Text += " Требуется шашек:\r\n " + floor(answer / 400) + " по 0,4 кг";
    }
    else if (answer / 400 >= 1) {
        answer_textBox->Text += " Требуется шашек:\r\n " + floor(answer / 400) + " по 0,4 кг\r\n 1 по 0,2 кг\r\n\r\n или\r\n " + ((floor(answer / 400) * 2) + 1) + " по 0,2 кг";
    }
    else {
        answer_textBox->Text += " Требуется шашек:\r\n 1 по 0,2 кг";
    }
}