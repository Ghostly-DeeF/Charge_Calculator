#include "SteelRod.h"
#include <corecrt_math.h>

float diameter_steel_rod;

inline System::Void IZNT::SteelRod::calc_button_Click(System::Object^ sender, System::EventArgs^ e) {

    if (!float::TryParse(diameter_steel_tube_textBox->Text, diameter_steel_rod) && diameter_steel_rod <= 0) {
        answer_textBox->Text = " Ошибка: вы некорректно ввели диаметр\r\n Число должно быть больше 0\r\n Дробное число задается через запятую";
        return;
    }

    if (diameter_steel_rod <= 2) {
        answer_textBox->Text = "Необходима 1 шашка по 0,2 кг";
        return;
    }
    else
    {
        answerz = 10 * pow(diameter_steel_rod, 3);
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


