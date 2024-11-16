#include "Balk1.h"


const float coef[3][2] = {
		{0.8f, 1.0f},
		{1.0f, 1.25f},
		{1.6f, 2.0f}
};



inline System::Void IZNT::Balk1::calc_button_Click(System::Object^ sender, System::EventArgs^ e) {
    if (type_wood_comboBox->SelectedIndex == -1) {
        answer_textBox->Text = " Ошибка: выберите тип древесины из списка";
        return;
    }
    if (condition_wood_comboBox->SelectedIndex == -1) {
        answer_textBox->Text = " Ошибка: выберите состояние древесины из списка";
        return;
    }

    if (!float::TryParse(width_balk_textBox->Text, width_balk) && width_balk <= 0) {
        answer_textBox->Text = " Ошибка: вы некорректно ввели ширину\r\n Число должно быть больше 0\r\n Дробное число задается через запятую";
        return;
    }

    if (!float::TryParse(thickness_balk_textBox->Text, thickness_balk) && thickness_balk <= 0) {
        answer_textBox->Text = " Ошибка: вы некорректно ввели толщину\r\n Число должно быть больше 0\r\n Дробное число задается через запятую";
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
    answer_textBox->Text = " Точный вес требуемого заряда: " + (answer / 1000).ToString() + " кг\r\n\r\n";

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


inline System::Void IZNT::Balk1::thickness_balk_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {

    if (float::TryParse(thickness_balk_textBox->Text, thickness_balk) && thickness_balk > 0) {
        underwater_checkBox->Text = "Взрыв под водой (глубже " + (thickness_balk * 2) + " см)";
    } else {
        underwater_checkBox->Text = "Взрыв под водой";
    }

    

}


