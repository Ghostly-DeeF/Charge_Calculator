#include "Wood1.h"
#include "ExRecalc.h"


const float coef[3][2] = {
		{0.8f, 1.0f},
		{1.0f, 1.25f},
		{1.6f, 2.0f}
};



inline System::Void IZNT::Wood1::button1_Click(System::Object^ sender, System::EventArgs^ e) {

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
    else {
        
        answer = coef[type_wood_comboBox->SelectedIndex][condition_wood_comboBox->SelectedIndex] * pow(diameter_log, 2);

        if (diameter_log > 30) {
            answer *= diameter_log / 30;
        }
        if (checkRing->Checked) {
            answer /= 3;
        }
        if (underwater_checkBox->Checked) {
            answer /= 2;
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
}

inline System::Void IZNT::Wood1::diameter_log_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    float diameter_log;
    if (float::TryParse(diameter_log_textBox->Text, diameter_log) && diameter_log > 0) {
        underwater_checkBox->Text = "Взрыв под водой\r\n(глубже " + (diameter_log * 2) + " см)";
    }
    else {
        underwater_checkBox->Text = "Взрыв под водой";
    }
}

