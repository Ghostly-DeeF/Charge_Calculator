#include "WoodStump.h"
#include "ExRecalc.h"

const float coef[3][2] = {
		{0.8f, 1.0f},
		{1.0f, 1.25f},
		{1.6f, 2.0f}
};

inline System::Void IZNT::WoodStump::calc_button_Click(System::Object^ sender, System::EventArgs^ e) {

    float diameter_log;
    if (!float::TryParse(diameter_log_textBox->Text, diameter_log) && diameter_log <= 0) {
        answer_textBox->Text = " Ошибка: вы некорректно ввели диаметр\r\n Число должно быть больше 0\r\n Дробное число задается через запятую";
        return;
    }
    else {

        answer = 15 * diameter_log;

        if (explosive_material_comboBox->SelectedIndex == -1) {
            answer_textBox->Text = " Ошибка: выберите тип ВВ из списка";
            return;
        }
        answer = recalculation(explosive_material_comboBox, answer_textBox, answer);

        answer = round(answer);
        answer_textBox->Text = " Точный вес требуемого заряда: " + (answer / 1000).ToString() + " кг\r\n\r\n";

        answer = ceill(answer / 200) * 200;

        answer_textBox->Text += " Вес тротиловых шашек: " + (answer / 1000).ToString() + " кг\r\n";

        if (((int)answer % 400 == 0)) {
            answer_textBox->Text += " Требуется шашек:\r\n " + floor(answer / 400) + " по 0,4 кг\r\n\r\n";
        }
        else if (answer / 400 >= 1) {
            answer_textBox->Text += " Требуется шашек:\r\n " + floor(answer / 400) + " по 0,4 кг\r\n 1 по 0,2 кг\r\n\r\n или\r\n " + ((floor(answer / 400) * 2) + 1) + " по 0,2 кг\r\n\r\n";
        }
        else {
            answer_textBox->Text += " Требуется шашек:\r\n 1 по 0,2 кг\r\n\r\n";
        }
        answer_textBox->Text += " Заряд закладывать на глубину " + diameter_log + " - " + diameter_log * 1.5f + " см\r\n Забивка обязательна";

    }

}
