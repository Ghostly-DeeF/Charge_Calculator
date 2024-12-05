#include "SteelTube.h"
#include <cmath>

float diameter_steel_tube;
float thickness_steel_tube;

inline System::Void IZNT::SteelTube::calc_button_Click(System::Object^ sender, System::EventArgs^ e) {

    if (!float::TryParse(diameter_steel_tube_textBox->Text, diameter_steel_tube) && diameter_steel_tube <= 0) {
        answer_textBox->Text = " Ошибка: вы некорректно ввели диаметр\r\n Число должно быть больше 0\r\n Дробное число задается через запятую";
        return;
    }

    if (!float::TryParse(thickness_steel_tube_textBox->Text, thickness_steel_tube) && thickness_steel_tube <= 0) {
        answer_textBox->Text = " Ошибка: вы некорректно ввели толщину\r\n Число должно быть больше 0\r\n Дробное число задается через запятую";
        return;
    }

    answerz = 20 * diameter_steel_tube * thickness_steel_tube * 3;

    if (checkUnderwaterExp->Checked) {
        answerz /= 1.5;
    }

    if (checkUnderwaterExp1->Checked) {
        answerz *= 2;
    }

    answerz = round(answerz);
    answer_textBox->Text = " Точный вес требуемого заряда: " + (answerz / 1000).ToString() + " кг\r\n\r\n";

    answerz = ceill(answerz / 200) * 200;

    answer_textBox->Text += " Вес тротиловых шашек: " + (answerz / 1000).ToString() + " кг\r\n";

    if (((int)answerz % 400 == 0)) {
        answer_textBox->Text += " Требуется шашек:\r\n " + floor(answerz / 400) + " по 0,4 кг";
    }
    else if (answerz / 400 >= 1) {
        answer_textBox->Text += " Требуется шашек:\r\n " + floor(answerz / 400) + " по 0,4 кг\r\n 1 по 0,2 кг\r\n\r\n или\r\n " + ((floor(answerz / 400) * 2) + 1) + " по 0,2 кг";
    }
    else {
        answer_textBox->Text += " Требуется шашек:\r\n 1 по 0,2 кг";
    }
}


