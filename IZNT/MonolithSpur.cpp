#include "MonolithSpur.h"
#include "ExRecalc.h"

const float coef[13][6] = {
    {0.50f, 0.35f, 1.50f, 1.65f, 1.80f, 1.95f},
    {0.60f, 0.40f, 1.25f, 1.38f, 1.50f, 1.63f},
    {0.75f, 0.50f, 1.00f, 1.10f, 1.20f, 1.30f},
    {0.90f, 0.60f, 0.75f, 0.83f, 1.10f, 1.17f},
    {1.00f, 0.65f, 0.67f, 0.74f, 0.81f, 0.87f},
    {1.20f, 0.80f, 0.67f, 0.74f, 0.81f, 0.87f},
    {1.30f, 0.85f, 0.58f, 0.64f, 0.70f, 0.76f},
    {1.50f, 1.00f, 0.58f, 0.64f, 0.70f, 0.76f},
    {1.60f, 1.05f, 0.54f, 0.59f, 0.64f, 0.69f},
    {1.70f, 1.15f, 0.54f, 0.59f, 0.64f, 0.69f},
    {1.80f, 1.20f, 0.42f, 0.46f, 0.50f, 0.54f},
    {2.00f, 1.40f, 0.42f, 0.46f, 0.50f, 0.54f},
    {9999.99f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f},
};



inline System::Void IZNT::MonolithSpur::calc_button_Click(System::Object^ sender, System::EventArgs^ e) {

    if (type_material_comboBox->SelectedIndex == -1) {
        answer_textBox->Text = " Ошибка: выберите материал из списка";
        return;
    }

    float thickness = 0.0f;
    if (!float::TryParse(thickness_textBox->Text, thickness) && thickness <= 0) {
        answer_textBox->Text = " Ошибка: вы некорректно ввели толщину\r\n Число должно быть больше 0\r\n Дробное число задается через запятую";
        return;
    }
    
    float lengthH = 0.0f;
    float coefK = 0.0f;
    for (int i = 0; i < 13; i++) {
        if (thickness == coef[i][0]) {
            lengthH = coef[i][1];
            coefK = coef[i][type_material_comboBox->SelectedIndex+ 2];
            break;
        }
        else if (thickness > coef[i][0] && thickness < coef[i + 1][0]) {
            if (i >= 11) {
                answer_textBox->Text = " Ошибка: Толщина больше 2 метров!";
                return;
            }
            lengthH = ((coef[i][1] - coef[i + 1][1]) / (coef[i][0] - coef[i + 1][0])) * (thickness - coef[i][0]) + coef[i][1];
            coefK = coef[i][type_material_comboBox->SelectedIndex + 2];
            break;
        }
    }

    answer = (coefK * pow(lengthH, 3)) * 1000;

    if (underwater_checkBox->Checked && type_material_comboBox->SelectedIndex == 3) {
        answer *= 1.5f;
    }


    answer = recalculation(explosive_material_comboBox, answer_textBox, answer);
    answer = round(answer);
    answer_textBox->Text = " Длина шпура: " + ceil(lengthH * 100).ToString() + " см\r\n\r\n";
    answer_textBox->Text += " Точный вес требуемого заряда: " + (answer / 1000) .ToString() + " кг\r\n\r\n";

    if (explosive_material_comboBox->SelectedIndex == 0) {
        answer = ceill(answer / 200) * 200;

        answer_textBox->Text += " Вес тротиловых шашек: " + (answer / 1000).ToString() + " кг\r\n";

        if (((int)answer % 400 == 0)) {
            answer_textBox->Text += " Требуется шашек:\r\n " + floor(answer / 400) + " по 0,4 кг";
        }
        else if (answer / 400 >= 1) {
            answer_textBox->Text += " Требуется шашек:\r\n " + floor(answer / 400) + " по 0,4 кг\r\n 1 по 0,2 кг\r\n или\r\n " + ((floor(answer / 400) * 2) + 1) + " по 0,2 кг";
        }
        else {
            answer_textBox->Text += " Требуется шашек:\r\n 1 по 0,2 кг";
        }
    }
}
