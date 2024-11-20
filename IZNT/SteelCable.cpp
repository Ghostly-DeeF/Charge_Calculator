#include "SteelCable.h"
#include <corecrt_math.h>


float diameter_steel_cable;

inline System::Void IZNT::SteelCable::calc_button_Click(System::Object^ sender, System::EventArgs^ e) {

    if (!float::TryParse(diameter_steel_cable_textBox->Text, diameter_steel_cable) && diameter_steel_cable <= 0) {
        answer_textBox->Text = " Ошибка: вы некорректно ввели диаметр\r\n Число должно быть больше 0\r\n Дробное число задается через запятую";
        return;
    }

    
 
    answerz = 10 * pow(diameter_steel_cable, 3);

    if (checkBox_Steel_Cable->Checked) {
        answerz /= 4;
    }

    answerz = round(answerz);
    answer_textBox->Text = " Точный вес требуемого заряда: " + (answerz / 1000).ToString() + " кг\r\n\r\n";

    answerz = ceill(answerz / 200) * 200;

    answer_textBox->Text += " Вес тротиловых шашек: " + (answerz / 1000 * 2).ToString() + " кг\r\n";

    if (((int)answerz % 400 == 0)) {
        answer_textBox->Text += " Требуется шашек:\r\n " + floor(answerz / 400) * 2 + " по 0,4 кг";
    }
    else if (answerz / 400 >= 1) {
        answer_textBox->Text += " Требуется шашек:\r\n " + floor(answerz / 400) * 2 + " по 0,4 кг\r\n 1 по 0,2 кг\r\n\r\n или\r\n " + ((floor(answerz / 400) * 2) + 1) * 2  + " по 0,2 кг";
    }
    else {
        answer_textBox->Text += " Требуется шашек:\r\n 2 по 0,2 кг";
    }
}
