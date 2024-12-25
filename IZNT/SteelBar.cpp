#include "SteelBar.h"
#include <corecrt_math.h>
#include "ExRecalc.h"

inline System::Void IZNT::SteelBar::calc_button_Click(System::Object^ sender, System::EventArgs^ e) {

    float answer = 0.0f;
    float thickness_steel_bar = 0.0f;
    float width_steel_bar = 0.0f;

    if (!float::TryParse(thickness_steel_bar_textBox->Text, thickness_steel_bar) && thickness_steel_bar <= 0) {
        answer_textBox->Text = " Ошибка: вы некорректно ввели толщину\r\n Число должно быть больше 0\r\n Дробное число задается через запятую";
        return;
    }

    if (!float::TryParse(width_steel_bar_textBox->Text, width_steel_bar) && width_steel_bar <= 0) {
        answer_textBox->Text = " Ошибка: вы некорректно ввели ширину\r\n Число должно быть больше 0\r\n Дробное число задается через запятую";
        return;
    }

    thickness_steel_bar = round(thickness_steel_bar);
    if (thickness_steel_bar <= 2) {
        answer = 20 * thickness_steel_bar * width_steel_bar;
    }

    if (thickness_steel_bar > 2) {
        answer = 10 * thickness_steel_bar * (thickness_steel_bar * width_steel_bar);
    }

    if (checkUnderwaterExp->Checked) {
        answer *= 2;
    }

    if (explosive_material_comboBox->SelectedIndex == -1) {
        answer_textBox->Text = " Ошибка: выберите тип ВВ из списка";
        return;
    }
    answer = recalculation(explosive_material_comboBox, answer_textBox, answer);

    answer = round(answer);
    answer_textBox->Text = " Точный вес требуемого заряда: " + (answer / 1000).ToString() + " кг\r\n\r\n";

    if (explosive_material_comboBox->SelectedIndex == 0) {
        answer = ceill(answer / 200) * 200;

        answer_textBox->Text += " Вес тротиловых шашек: " + (answer / 1000).ToString() + " кг\r\n";

        if (((int)answer % 400 == 0)) {
            answer_textBox->Text += " Требуется шашек:\r\n " + floor(answer / 400) + " по 0,4 кг";
        }
        else if (answer / 400 >= 1) {
            answer_textBox->Text += " Требуется шашек:\r\n " + floor(answer / 400) + " по 0,4 кг\r\n 1 по 0,2 кг\r\n\r\n или\r\n " + ((floor(answer / 400) * 2) + 1) + " по 0,2 кг";
        }
        else {
            answer_textBox->Text += " Требуется шашек:\r\n 1 по 0,2 кг";
        }
    }
}


