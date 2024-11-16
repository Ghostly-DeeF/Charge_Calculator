#include "WoodNoncontact.h"

const float coef[3][2] = {
		{0.8f, 1.0f},
		{1.0f, 1.25f},
		{1.6f, 2.0f}
};

inline System::Void IZNT::WoodNoncontact::calc_button_Click(System::Object^ sender, System::EventArgs^ e) {
    if (type_wood_comboBox->SelectedIndex == -1) {
        answer_textBox->Text = " Ошибка: выберите тип древесины из списка";
        return;
    }
    if (condition_wood_comboBox->SelectedIndex == -1) {
        answer_textBox->Text = " Ошибка: выберите состояние древесины из списка";
        return;
    }

    float diameter_log;
    if (!float::TryParse(diameter_log_textBox->Text, diameter_log) && diameter_log <= 0) {
        answer_textBox->Text = " Ошибка: вы некорректно ввели диаметр\r\n Число должно быть больше 0\r\n Дробное число задается через запятую";
        return;
    }
    diameter_log /= 100;

    float distanse;
    if (!float::TryParse(distanse_textBox->Text, distanse) && distanse <= 0) {
        answer_textBox->Text = " Ошибка: вы некорректно ввели расстояние\r\n Число должно быть больше 0\r\n Дробное число задается через запятую";
        return;
    }

    if (distanse < 2 * diameter_log) {
        answer_textBox->Text = "Расстояние меньше, чем 2 диаметра.\r\nИспользуйте расчет для контактных зарядов (вкладки 'Бревно или куст свай', 'Балка или пакет бревен', 'Двутавновая балка')";
        return;
    }

    answer = (30 * coef[type_wood_comboBox->SelectedIndex][condition_wood_comboBox->SelectedIndex] * diameter_log * pow(distanse, 2)) * 1000;

    if (underwater_checkBox->Checked && condition_wood_comboBox->SelectedIndex == 1) {
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

inline System::Void IZNT::WoodNoncontact::distanse_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    float distanse;
    if (float::TryParse(distanse_textBox->Text, distanse) && distanse > 0) {
        underwater_checkBox->Text = "Взрыв под водой\r\n(глубже " + (distanse / 2) + " м)";
    }
    else {
        underwater_checkBox->Text = "Взрыв под водой";
    }
}
