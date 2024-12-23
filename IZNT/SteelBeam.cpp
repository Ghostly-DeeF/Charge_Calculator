#include "SteelBeam.h"
#include <corecrt_math.h>
#include "ExRecalc.h"

const float coef[9][2] = {
        {0.0f, 1.0f},
        {1.0f, 1.0f},
        {1.5f, 2.0f},
        {2.5f, 3.0f},
        {3.5f, 4.0f},
        {4.0f, 5.0f},
        {4.5f, 6.0f},
        {5.0f, 0.0f},
        {9999.9f, 0.0f}
};

float thickness_steel_beam = 0.0f;
float width_steel_beam = 0.0f;
float answer = 0.0f;

inline IZNT::SteelBeam::SteelBeam(void)
{
    InitializeComponent();
    pictureBox1->Image = Image::FromFile(".\\Picture\\img1SteelBalk.bmp");
}

void imageSwitch(ComboBox^ combo, CheckBox^ check, PictureBox^ picture1, PictureBox^ picture2) {
    switch (combo->SelectedIndex)
        {
        case -1:
            if (check->Checked) {
                picture1->Image = Image::FromFile(".\\Picture\\img2SteelBalk.bmp");
            }
            else {
                picture1->Image = Image::FromFile(".\\Picture\\img1SteelBalk.bmp");
            }
            break;

        case 0:
            if (check->Checked) {
                picture1->Image = Image::FromFile(".\\Picture\\img3SteelBalk.bmp");
                picture2->Image = Image::FromFile(".\\Picture\\img2SteelLegend.bmp");
            }
            else {
                picture1->Image = Image::FromFile(".\\Picture\\img4SteelBalk.bmp");
                picture2->Image = Image::FromFile(".\\Picture\\img1SteelLegend.bmp");
            }
            break;

        case 1:
            if (check->Checked) {
                picture1->Image = Image::FromFile(".\\Picture\\img6SteelBalk.bmp");
                picture2->Image = Image::FromFile(".\\Picture\\img3SteelLegend.bmp");
            }
            else {
                picture1->Image = Image::FromFile(".\\Picture\\img5SteelBalk.bmp");
                picture2->Image = Image::FromFile(".\\Picture\\img3SteelLegend.bmp");
            }
            break;

        case 2:
            if (check->Checked) {
                picture1->Image = Image::FromFile(".\\Picture\\img8SteelBalk.bmp");
                picture2->Image = Image::FromFile(".\\Picture\\img3SteelLegend.bmp");
            }
            else {
                picture1->Image = Image::FromFile(".\\Picture\\img7SteelBalk.bmp");
                picture2->Image = Image::FromFile(".\\Picture\\img3SteelLegend.bmp");
            }
            break;

        default:
            break;
        }
}

inline System::Void IZNT::SteelBeam::conner_checkBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    imageSwitch(type_charge_comboBox, conner_checkBox, pictureBox1, pictureBox2);
}

inline System::Void IZNT::SteelBeam::type_charge_comboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    imageSwitch(type_charge_comboBox, conner_checkBox, pictureBox1, pictureBox2);
}

inline System::Void IZNT::SteelBeam::calc_button_Click(System::Object^ sender, System::EventArgs^ e) {

    if (type_charge_comboBox->SelectedIndex == -1) {
        answer_textBox->Text = " Ошибка: выберите тип заряда из списка";
        return;
    }

    float width_up = 0.0f;
    if (!float::TryParse(width_up_textBox->Text, width_up) && width_up <= 0) {
        answer_textBox->Text = " Ошибка: вы некорректно ввели ширину верхней полки\r\n Число должно быть больше 0\r\n Дробное число задается через запятую";
        return;
    }
    float thickness_up = 0.0f;
    if (!float::TryParse(thickness_up_textBox->Text, thickness_up) && thickness_up <= 0) {
        answer_textBox->Text = " Ошибка: вы некорректно ввели толщину верхней полки\r\n Число должно быть больше 0\r\n Дробное число задается через запятую";
        return;
    }

    float width_wall = 0.0f;
    if (!float::TryParse(width_wall_textBox->Text, width_wall) && width_wall <= 0) {
        answer_textBox->Text = " Ошибка: вы некорректно ввели высоту стенки\r\n Число должно быть больше 0\r\n Дробное число задается через запятую";
        return;
    }
    float thickness_wall = 0.0f;
    if (!float::TryParse(thickness_wall_textBox->Text, thickness_wall) && thickness_wall <= 0) {
        answer_textBox->Text = " Ошибка: вы некорректно ввели толщину стенки\r\n Число должно быть больше 0\r\n Дробное число задается через запятую";
        return;
    }
    float thickness_down = 0.0f;
    if (!float::TryParse(thickness_down_textBox->Text, thickness_down) && thickness_down <= 0) {
        answer_textBox->Text = " Ошибка: вы некорректно ввели толщину нижней полки\r\n Число должно быть больше 0\r\n Дробное число задается через запятую";
        return;
    }
    float width_down = 0.0f;
    if (!float::TryParse(width_down_textBox->Text, width_down) && width_down <= 0) {
        answer_textBox->Text = " Ошибка: вы некорректно ввели ширину нижней полки\r\n Число должно быть больше 0\r\n Дробное число задается через запятую";
        return;
    }

    width_up /= 10;
    thickness_up /= 10;
    width_down /= 10;
    thickness_down /= 10;
    width_wall /= 10;
    thickness_wall /= 10;

    if (ceil(thickness_up) <= 2) {
        answer_up_belt = 20 * ceil(thickness_up) * width_up;
    }
    else if (ceil(thickness_up) > 2) {
        answer_up_belt = 10 * ceil(thickness_up) * (ceil(thickness_up) * width_up);
    }
    if (ceil(thickness_down) <= 2) {
        answer_down_belt = 20 * ceil(thickness_down) * width_down;
    }
    else if (ceil(thickness_down) > 2) {
        answer_down_belt = 10 * ceil(thickness_down) * (ceil(thickness_down) * width_down);
    }
    if (ceil(thickness_wall) <= 2) {
        answer_wall = 20 * ceil(thickness_wall) * width_wall;
    }
    else if (ceil(thickness_wall) > 2) {
        answer_wall = 10 * ceil(thickness_wall) * (ceil(thickness_wall) * width_wall);
    }

    if (checkUnderwaterExp->Checked) {
        answer_up_belt *= 2;
        answer_down_belt *= 2;
        answer_wall *= 2;
    }
    answer_up_belt = round(answer_up_belt);
    answer_down_belt = round(answer_down_belt);
    answer_wall = round(answer_wall);

    if (explosive_material_comboBox->SelectedIndex == -1) {
        answer_textBox->Text = " Ошибка: выберите тип ВВ из списка";
        return;
    }
    answer_up_belt = recalculation(explosive_material_comboBox, answer_textBox, answer_up_belt);
    answer_down_belt = recalculation(explosive_material_comboBox, answer_textBox, answer_down_belt);
    answer_wall = recalculation(explosive_material_comboBox, answer_textBox, answer_wall);

    switch (type_charge_comboBox->SelectedIndex)
    {
    case 0:

        answer_textBox->Text = " Точный общий вес всех зарядов: " + ((answer_up_belt + answer_down_belt + answer_wall + (conner_checkBox->Checked? 800: 0)) / 1000).ToString() + " кг\r\n\r\n";

        answer_up_belt = ceill(answer_up_belt / 200) * 200;

        answer_textBox->Text += " Вес тротиловых шашек для верхней полки: " + (answer_up_belt / 1000).ToString() + " кг\r\n";

        if (((int)answer_up_belt % 400 == 0)) {
            answer_textBox->Text += " Требуется шашек:\r\n " + floor(answer_up_belt / 400) + " по 0,4 кг\r\n";
        }
        else if (answer_up_belt / 400 >= 1) {
            answer_textBox->Text += " Требуется шашек:\r\n " + floor(answer_up_belt / 400) + " по 0,4 кг\r\n 1 по 0,2 кг\r\n";
        }
        else {
            answer_textBox->Text += " Требуется шашек:\r\n 1 по 0,2 кг\r\n";
        }

        answer_down_belt = ceill(answer_down_belt / 200) * 200;

        answer_textBox->Text += " Вес тротиловых шашек для нижней полки: " + (answer_down_belt / 1000).ToString() + " кг\r\n";

        if (((int)answer_down_belt % 400 == 0)) {
            answer_textBox->Text += " Требуется шашек:\r\n " + floor(answer_down_belt / 400) + " по 0,4 кг\r\n";
        }
        else if (answer_down_belt / 400 >= 1) {
            answer_textBox->Text += " Требуется шашек:\r\n " + floor(answer_down_belt / 400) + " по 0,4 кг\r\n 1 по 0,2 кг\r\n";
        }
        else {
            answer_textBox->Text += " Требуется шашек:\r\n 1 по 0,2 кг\r\n";
        }


        answer_wall = ceill(answer_wall / 200) * 200;

        answer_textBox->Text += " Вес тротиловых шашек для стенки: " + (answer_wall / 1000).ToString() + " кг\r\n";

        if (((int)answer_wall % 400 == 0)) {
            answer_textBox->Text += " Требуется шашек:\r\n " + floor(answer_wall / 400) + " по 0,4 кг\r\n";
        }
        else if (answer_wall / 400 >= 1) {
            answer_textBox->Text += " Требуется шашек:\r\n " + floor(answer_wall / 400) + " по 0,4 кг\r\n 1 по 0,2 кг\r\n";
        }
        else {
            answer_textBox->Text += " Требуется шашек:\r\n 1 по 0,2 кг\r\n";
        }

        if (conner_checkBox->Checked) {
            answer_textBox->Text += " Вес тротиловых шашек для 1 пары уголков: " + ((checkUnderwaterExp->Checked) ? 0.8f : 0.4f) + " кг\r\n";
            answer_textBox->Text += " Требуется шашек:\r\n " + ((checkUnderwaterExp->Checked) ? 2 : 1) + " по 0,4 кг\r\n";
        }

        answer_textBox->Text += " Части заряда, действующие в противоположных\r\n направлениях, должны располагаться со сдвигом одна\r\n относительно другой по длине балки\r\n";

        break;

    case 1:
    {

        int i1 = 0;
        for (i1 = 0; i1 < 9; i1++) {
            if (thickness_up >= coef[i1][0] && thickness_up < coef[i1 + 1][0]) {
                break;
            }
        }

        int i2 = 0;
        for (i2 = 0; i2 < 9; i2++) {
            if (thickness_down >= coef[i2][0] && thickness_down < coef[i2 + 1][0]) {
                break;
            }
        }

        int i3 = 0;
        for (i3 = 0; i3 < 9; i3++) {
            if (thickness_wall >= coef[i3][0] && thickness_wall < coef[i3 + 1][0]) {
                break;
            }
        }
        if (i1 < 7 && i2 < 7 && i3 < 7) {
            answer_textBox->Text = " Точный общий вес всех зарядов: " + ((answer_up_belt + answer_down_belt + answer_wall + (conner_checkBox->Checked ? 800 : 0)) / 1000).ToString() + " кг\r\n\r\n";
            
            answer_up_belt = ceill(answer_up_belt / 200) * 200;
            answer_textBox->Text += " Вес заряда для верхней полки: " + (answer_up_belt / 1000).ToString() + " кг\r\n";
            answer_up_belt = coef[i1][1];
            answer_textBox->Text += " Требуется " + answer_up_belt + " шт нитей пластитового заряда\r\n\r\n";
            
            answer_down_belt = ceill(answer_down_belt / 200) * 200;
            answer_textBox->Text += " Вес заряда для нижней полки: " + (answer_down_belt / 1000).ToString() + " кг\r\n";
            answer_down_belt = coef[i2][1];
            answer_textBox->Text += " Требуется " + answer_down_belt + " шт нитей пластитового заряда\r\n\r\n";

            answer_wall = ceill(answer_wall / 200) * 200;
            answer_textBox->Text += " Вес заряда для стенки: " + (answer_wall / 1000).ToString() + " кг\r\n";
            answer_wall = coef[i3][1];
            answer_textBox->Text += " Требуется " + answer_wall + " шт нитей пластитового заряда\r\n\r\n";

            if (conner_checkBox->Checked) {
                answer_textBox->Text += " Вес заряда для 1 пары уголков: " + ((checkUnderwaterExp->Checked) ? 0.8f : 0.4f) + " кг\r\n";
                answer_textBox->Text += " Требуется 1 шт нитей пластитового заряда\r\n\r\n";
            }

            answer_textBox->Text += " Части заряда, действующие в противоположных\r\n направлениях, должны располагаться со сдвигом одна\r\n относительно другой по длине балки\r\n";
        }
        else if (i1 >= 7) {
            answer_textBox->Text = " Толщина верхней полки больше 5 см!\r\n Используйте другой вид заряда";
        }
        else if (i2 >= 7) {
            answer_textBox->Text = " Толщина нижней полки больше 5 см!\r\n Используйте другой вид заряда";
        }
        else if (i3 >= 7) {
            answer_textBox->Text = " Толщина стенки больше 5 см!\r\n Используйте другой вид заряда";
        }
    }
        break;

    case 2:
    {
        float sum_answer = (answer_up_belt + answer_down_belt + answer_wall + (conner_checkBox->Checked ? 800 : 0)) * 2;
        answer_textBox->Text = " Точный вес требуемого заряда: " + (sum_answer / 1000).ToString() + " кг\r\n\r\n";

        sum_answer = ceill(sum_answer / 200) * 200;

        answer_textBox->Text += " Вес тротиловых шашек: " + (sum_answer / 1000).ToString() + " кг\r\n";

        if (((int)sum_answer % 400 == 0)) {
            answer_textBox->Text += " Требуется шашек:\r\n " + floor(sum_answer / 400) + " по 0,4 кг";
        }
        else if (sum_answer / 400 >= 1) {
            answer_textBox->Text += " Требуется шашек:\r\n " + floor(sum_answer / 400) + " по 0,4 кг\r\n 1 по 0,2 кг\r\n\r\n или\r\n " + ((floor(sum_answer / 400) * 2) + 1) + " по 0,2 кг";
        }
        else {
            answer_textBox->Text += " Требуется шашек:\r\n 1 по 0,2 кг";
        }
    }
        break;
    default:
        break;
    }
}

