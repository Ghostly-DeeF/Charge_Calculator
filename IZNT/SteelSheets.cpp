#include "SteelSheets.h"
#include <cmath>

double thickness_steel_sheets = 0.0;
double width_steel_sheets = 0.0;
double answer = 0.0;

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

void imageSwitch(ComboBox^ combo, RadioButton^ rad1, RadioButton^ rad2, RadioButton^ rad3, RadioButton^ rad4, RadioButton^ rad5, PictureBox^ picture1) {
    switch (combo->SelectedIndex)
    {
    case 0:
        if (rad1->Checked) {
            picture1->Image = Image::FromFile(".\\Picture\\img2Plate.bmp");
        }
        else if (rad2->Checked) {
            picture1->Image = Image::FromFile(".\\Picture\\img10Plate.bmp");
        }
        else if (rad3->Checked) {
            picture1->Image = Image::FromFile(".\\Picture\\img18Plate.bmp");
        }
        else if (rad4->Checked) {
            picture1->Image = Image::FromFile(".\\Picture\\img6Plate.bmp");
        }
        else if (rad5->Checked) {
            picture1->Image = Image::FromFile(".\\Picture\\img14Plate.bmp");
        }
        else {
            picture1->Image = Image::FromFile(".\\Picture\\img2Plate.bmp");
        }
        break;

    case 1:
        if (rad1->Checked) {
            picture1->Image = Image::FromFile(".\\Picture\\img3Plate.bmp");
        }
        else if (rad2->Checked) {
            picture1->Image = Image::FromFile(".\\Picture\\img11Plate.bmp");
        }
        else if (rad3->Checked) {
            picture1->Image = Image::FromFile(".\\Picture\\img19Plate.bmp");
        }
        else if (rad4->Checked) {
            picture1->Image = Image::FromFile(".\\Picture\\img7Plate.bmp");
        }
        else if (rad5->Checked) {
            picture1->Image = Image::FromFile(".\\Picture\\img15Plate.bmp");
        }
        else {
            picture1->Image = Image::FromFile(".\\Picture\\img3Plate.bmp");
        }
        break;

    case 2:
        if (rad1->Checked) {
            picture1->Image = Image::FromFile(".\\Picture\\img4Plate.bmp");
        }
        else if (rad2->Checked) {
            picture1->Image = Image::FromFile(".\\Picture\\img12Plate.bmp");
        }
        else if (rad3->Checked) {
            picture1->Image = Image::FromFile(".\\Picture\\img20Plate.bmp");
        }
        else if (rad4->Checked) {
            picture1->Image = Image::FromFile(".\\Picture\\img8Plate.bmp");
        }
        else if (rad5->Checked) {
            picture1->Image = Image::FromFile(".\\Picture\\img16Plate.bmp");
        }
        else {
            picture1->Image = Image::FromFile(".\\Picture\\img4Plate.bmp");
        }
        break;

    case 3:
        if (rad1->Checked) {
            picture1->Image = Image::FromFile(".\\Picture\\img5Plate.bmp");
        }
        else if (rad2->Checked) {
            picture1->Image = Image::FromFile(".\\Picture\\img13Plate.bmp");
        }
        else if (rad3->Checked) {
            picture1->Image = Image::FromFile(".\\Picture\\img21Plate.bmp");
        }
        else if (rad4->Checked) {
            picture1->Image = Image::FromFile(".\\Picture\\img9Plate.bmp");
        }
        else if (rad5->Checked) {
            picture1->Image = Image::FromFile(".\\Picture\\img17Plate.bmp");
        }
        else {
            picture1->Image = Image::FromFile(".\\Picture\\img5Plate.bmp");
        }
        break;
    default:
        break;
    }
}

inline IZNT::SteelSheets::SteelSheets(void)
{
    InitializeComponent();
    pictureBox1->Image = Image::FromFile(".\\Picture\\img1Plate.bmp");
}

inline System::Void IZNT::SteelSheets::type_charge_comboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    imageSwitch(type_charge_comboBox, checkWater, checkUnderwaterExp, checkWoodenStop, checkDemolitionSkin, checkDemolitionSkinWater, pictureBox1);
}

inline System::Void IZNT::SteelSheets::checkWater_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    imageSwitch(type_charge_comboBox, checkWater, checkUnderwaterExp, checkWoodenStop, checkDemolitionSkin, checkDemolitionSkinWater, pictureBox1);
}

inline System::Void IZNT::SteelSheets::checkUnderwaterExp_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    imageSwitch(type_charge_comboBox, checkWater, checkUnderwaterExp, checkWoodenStop, checkDemolitionSkin, checkDemolitionSkinWater, pictureBox1);
}

inline System::Void IZNT::SteelSheets::checkWoodenStop_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    imageSwitch(type_charge_comboBox, checkWater, checkUnderwaterExp, checkWoodenStop, checkDemolitionSkin, checkDemolitionSkinWater, pictureBox1);
}

inline System::Void IZNT::SteelSheets::checkDemolitionSkin_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    imageSwitch(type_charge_comboBox, checkWater, checkUnderwaterExp, checkWoodenStop, checkDemolitionSkin, checkDemolitionSkinWater, pictureBox1);
}

inline System::Void IZNT::SteelSheets::checkDemolitionSkinWater_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    imageSwitch(type_charge_comboBox, checkWater, checkUnderwaterExp, checkWoodenStop, checkDemolitionSkin, checkDemolitionSkinWater, pictureBox1);
}

inline System::Void IZNT::SteelSheets::calc_button_Click(System::Object^ sender, System::EventArgs^ e) {

    if (!double::TryParse(thickness_steel_sheets_textBox->Text, thickness_steel_sheets) && thickness_steel_sheets <= 0) {
        answer_textBox->Text = " Ошибка: вы некорректно ввели толщину\r\n Число должно быть больше 0\r\n Дробное число задается через запятую";
        return;
    }

    if (!double::TryParse(width_steel_sheets_textBox->Text, width_steel_sheets) && width_steel_sheets <= 0) {
        answer_textBox->Text = " Ошибка: вы некорректно ввели ширину\r\n Число должно быть больше 0\r\n Дробное число задается через запятую";
        return;
    }

    if (type_charge_comboBox->SelectedIndex == -1) {
        answer_textBox->Text = " Ошибка: выберите тип заряда из списка";
        return;
    }

    if (!checkWater->Checked && !checkUnderwaterExp->Checked && !checkWoodenStop->Checked &&
        !checkDemolitionSkin->Checked && !checkDemolitionSkinWater->Checked) {
        answer_textBox->Text = " Ошибка: выберите необходимое место подрыва";
        return;
    }

    switch (type_charge_comboBox->SelectedIndex)
    {
    case 0:
        if (ceil(thickness_steel_sheets) <= 2) {
            answer = 20 * ceil(thickness_steel_sheets) * width_steel_sheets;
        }
        else if (ceil(thickness_steel_sheets) > 2) {
            answer = 10 * ceil(thickness_steel_sheets) * (ceil(thickness_steel_sheets) * width_steel_sheets);
        }
        break;

    case 1:
        if (ceil(thickness_steel_sheets) <= 2) {
            answer = 20 * ceil(thickness_steel_sheets) * width_steel_sheets;
        }
        else if (ceil(thickness_steel_sheets) > 2) {
            answer = 10 * ceil(thickness_steel_sheets) * (ceil(thickness_steel_sheets) * width_steel_sheets);
        }
        break;

    case 2:
        if (ceil(thickness_steel_sheets) <= 2) {
            answer = 10 * ceil(thickness_steel_sheets) * width_steel_sheets;
        }
        else if (ceil(thickness_steel_sheets) > 2) {
            answer = 5 * ceil(thickness_steel_sheets) * (ceil(thickness_steel_sheets) * width_steel_sheets);
        }
        break;

    case 3:
        answer = 2.5 * pow(ceil(thickness_steel_sheets), 3);
        break;

    default:
        break;
    }
 

    if (checkArm->Checked) {
        answer *= 2;
    }

    if (checkUnderwaterExp->Checked && !checkWoodenStop->Checked) {
        answer *= 2;
    }

    if (checkUnderwaterExp->Checked && checkWoodenStop->Checked) {
        if (ceil(thickness_steel_sheets) <= 2) {
            answer = 20 * ceil(thickness_steel_sheets) * width_steel_sheets;
        }
        else if (ceil(thickness_steel_sheets) > 2) {
            answer = 10 * ceil(thickness_steel_sheets) * (ceil(thickness_steel_sheets) * width_steel_sheets);
        }
    }

    if (checkDemolitionSkin->Checked) {
        answer *= 4;
    }

    if (checkDemolitionSkinWater->Checked) {
        answer /= 1.5;
    }
    
    switch (type_charge_comboBox->SelectedIndex) {
    case 0:
        answer = round(answer);
        answer_textBox->Text = " Точный вес требуемого заряда: " + (answer / 1000).ToString() + " кг\r\n\r\n";

        answer = ceill(answer / 200) * 200;

        answer_textBox->Text += " Вес тротиловых шашек: " + (answer / 1000).ToString() + " кг\r\n";

        if ((int)answer % 400 == 0) {
            answer_textBox->Text += " Требуется шашек:\r\n " + floor(answer / 400) + " по 0,4 кг";
        }
        else if (answer / 400 >= 1) {
            answer_textBox->Text += " Требуется шашек:\r\n " + floor(answer / 400) + " по 0,4 кг\r\n 1 по 0,2 кг\r\n\r\n или\r\n " + ((floor(answer / 400) * 2) + 1) + " по 0,2 кг";
        }
        else {
            answer_textBox->Text += " Требуется шашек:\r\n 1 по 0,2 кг";
        }
        break;

    case 1:
    {
        int i = 0;
        for (i = 0; i < 9; i++) {
            if (thickness_steel_sheets >= coef[i][0] && thickness_steel_sheets < coef[i + 1][0]) {
                break;
            }
        }
        if (i < 7) {
            answer = round(answer);
            answer_textBox->Text = " Точный вес требуемого заряда: " + (answer / 1000).ToString() + " кг\r\n\r\n";
            answer = coef[i][1];
            answer_textBox->Text += " Требуется " + answer + " шт нитей пластитового заряда";
        }
        else {
            answer_textBox->Text = " Толщина больше 5 см!\r\n Используйте другой вид заряда";
        }
    }
        break;

    case 2:
        answer = round(answer);
        answer_textBox->Text = " Точный вес требуемого заряда из пластита: " + (answer / 1000).ToString() + " кг\r\n\r\n";
        break;

    case 3:
        answer = round(answer);
        answer_textBox->Text = " Точный вес требуемого заряда из пластита: " + (answer / 1000).ToString() + " кг\r\n\r\n";
        break;

    default:
        break;
    }
}


