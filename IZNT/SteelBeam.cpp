#include "SteelBeam.h"
#include <corecrt_math.h>

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

            break;

        case 2:

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
        answer_textBox->Text = " ������: �������� ��� ������ �� ������";
        return;
    }

    float width_up = 0.0f;
    if (!float::TryParse(width_up_textBox->Text, width_up) && width_up <= 0) {
        answer_textBox->Text = " ������: �� ����������� ����� ������ ������� �����\r\n ����� ������ ���� ������ 0\r\n ������� ����� �������� ����� �������";
        return;
    }
    float thickness_up = 0.0f;
    if (!float::TryParse(thickness_up_textBox->Text, thickness_up) && thickness_up <= 0) {
        answer_textBox->Text = " ������: �� ����������� ����� ������� ������� �����\r\n ����� ������ ���� ������ 0\r\n ������� ����� �������� ����� �������";
        return;
    }

    float width_wall = 0.0f;
    if (!float::TryParse(width_wall_textBox->Text, width_wall) && width_wall <= 0) {
        answer_textBox->Text = " ������: �� ����������� ����� ������ ������\r\n ����� ������ ���� ������ 0\r\n ������� ����� �������� ����� �������";
        return;
    }
    float thickness_wall = 0.0f;
    if (!float::TryParse(thickness_wall_textBox->Text, thickness_wall) && thickness_wall <= 0) {
        answer_textBox->Text = " ������: �� ����������� ����� ������� ������\r\n ����� ������ ���� ������ 0\r\n ������� ����� �������� ����� �������";
        return;
    }
    float thickness_down = 0.0f;
    if (!float::TryParse(thickness_down_textBox->Text, thickness_down) && thickness_down <= 0) {
        answer_textBox->Text = " ������: �� ����������� ����� ������� ������ �����\r\n ����� ������ ���� ������ 0\r\n ������� ����� �������� ����� �������";
        return;
    }
    float width_down = 0.0f;
    if (!float::TryParse(width_down_textBox->Text, width_down) && width_down <= 0) {
        answer_textBox->Text = " ������: �� ����������� ����� ������ ������ �����\r\n ����� ������ ���� ������ 0\r\n ������� ����� �������� ����� �������";
        return;
    }

    width_up /= 10;
    thickness_up /= 10;
    width_down /= 10;
    thickness_down /= 10;
    width_wall /= 10;
    thickness_wall /= 10;

    switch (type_charge_comboBox->SelectedIndex)
    {
    case 0:
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

        answer_up_belt = round(answer_up_belt);
        answer_down_belt = round(answer_down_belt);
        answer_wall = round(answer_wall);


        answer_textBox->Text = " ������ ����� ��� ���� �������: " + ((answer_up_belt + answer_down_belt + answer_wall + (conner_checkBox->Checked? 800: 0)) / 1000).ToString() + " ��\r\n\r\n";

        answer_up_belt = ceill(answer_up_belt / 200) * 200;

        answer_textBox->Text += " ��� ���������� ����� ��� ������� �����: " + (answer_up_belt / 1000).ToString() + " ��\r\n";

        if (((int)answer_up_belt % 400 == 0)) {
            answer_textBox->Text += " ��������� �����:\r\n " + floor(answer_up_belt / 400) + " �� 0,4 ��\r\n";
        }
        else if (answer_up_belt / 400 >= 1) {
            answer_textBox->Text += " ��������� �����:\r\n " + floor(answer_up_belt / 400) + " �� 0,4 ��\r\n 1 �� 0,2 ��\r\n";
        }
        else {
            answer_textBox->Text += " ��������� �����:\r\n 1 �� 0,2 ��\r\n";
        }

        answer_down_belt = ceill(answer_down_belt / 200) * 200;

        answer_textBox->Text += " ��� ���������� ����� ��� ������ �����: " + (answer_down_belt / 1000).ToString() + " ��\r\n";

        if (((int)answer_down_belt % 400 == 0)) {
            answer_textBox->Text += " ��������� �����:\r\n " + floor(answer_down_belt / 400) + " �� 0,4 ��\r\n";
        }
        else if (answer_down_belt / 400 >= 1) {
            answer_textBox->Text += " ��������� �����:\r\n " + floor(answer_down_belt / 400) + " �� 0,4 ��\r\n 1 �� 0,2 ��\r\n";
        }
        else {
            answer_textBox->Text += " ��������� �����:\r\n 1 �� 0,2 ��\r\n";
        }


        answer_wall = ceill(answer_wall / 200) * 200;

        answer_textBox->Text += " ��� ���������� ����� ��� ������: " + (answer_wall / 1000).ToString() + " ��\r\n";

        if (((int)answer_wall % 400 == 0)) {
            answer_textBox->Text += " ��������� �����:\r\n " + floor(answer_wall / 400) + " �� 0,4 ��\r\n";
        }
        else if (answer_wall / 400 >= 1) {
            answer_textBox->Text += " ��������� �����:\r\n " + floor(answer_wall / 400) + " �� 0,4 ��\r\n 1 �� 0,2 ��\r\n";
        }
        else {
            answer_textBox->Text += " ��������� �����:\r\n 1 �� 0,2 ��\r\n";
        }

        if (conner_checkBox->Checked) {
            answer_textBox->Text += " ��� ���������� ����� ��� 1 ���� �������: 0.4 ��\r\n";
            answer_textBox->Text += " ��������� �����:\r\n " + "1 �� 0,4 ��\r\n";
        }

        answer_textBox->Text += " ����� ������, ����������� � ���������������\r\n ������������, ������ ������������� �� ������� ����\r\n ������������ ������ �� ����� �����\r\n";

        /*answer = round(answer);
        answer_textBox->Text = " ������ ��� ���������� ������: " + (answer / 1000).ToString() + " ��\r\n\r\n";

        answer = ceill(answer / 200) * 200;

        answer_textBox->Text += " ��� ���������� �����: " + (answer / 1000).ToString() + " ��\r\n";

        if (((int)answer % 400 == 0)) {
            answer_textBox->Text += " ��������� �����:\r\n " + floor(answer / 400) + " �� 0,4 ��";
        }
        else if (answer / 400 >= 1) {
            answer_textBox->Text += " ��������� �����:\r\n " + floor(answer / 400) + " �� 0,4 ��\r\n 1 �� 0,2 ��\r\n\r\n ���\r\n " + ((floor(answer / 400) * 2) + 1) + " �� 0,2 ��";
        }
        else {
            answer_textBox->Text += " ��������� �����:\r\n 1 �� 0,2 ��";
        }*/

        break;

    case 1:

        break;

    case 2:

        break;
    default:
        break;
    }

   /* if (!float::TryParse(thickness_steel_beam_textBox->Text, thickness_steel_beam) && thickness_steel_beam <= 0) {
        answer_textBox->Text = " ������: �� ����������� ����� �������\r\n ����� ������ ���� ������ 0\r\n ������� ����� �������� ����� �������";
        return;
    }

    if (!float::TryParse(width_steel_beam_textBox->Text, width_steel_beam) && width_steel_beam <= 0) {
        answer_textBox->Text = " ������: �� ����������� ����� ������\r\n ����� ������ ���� ������ 0\r\n ������� ����� �������� ����� �������";
        return;
    }

    thickness_steel_beam = round(thickness_steel_beam);
    if (ShapedCharge->Checked) {
        if (thickness_steel_beam <= 2) {
            answer = 20 * thickness_steel_beam * width_steel_beam;
        }

        if (thickness_steel_beam > 2) {
            answer = 10 * thickness_steel_beam * (thickness_steel_beam * width_steel_beam);
        }

        answer = round(answer);
        answer_textBox->Text = " ������ ��� ���������� ������: " + (answer / 1000).ToString() + " ��\r\n\r\n";

        answer = ceill(answer / 200) * 200;

        answer_textBox->Text += " ��� ���������� �����: " + (answer / 1000).ToString() + " ��\r\n";

        if ((int)answer % 400 == 0) {
            answer_textBox->Text += " ��������� �����:\r\n " + floor(answer / 400) + " �� 0,4 ��";
        }
        else if (answer / 400 >= 1) {
            answer_textBox->Text += " ��������� �����:\r\n " + floor(answer / 400) + " �� 0,4 ��\r\n 1 �� 0,2 ��\r\n\r\n ���\r\n " + ((floor(answer / 400) * 2) + 1) + " �� 0,2 ��";
        }
        else {
            answer_textBox->Text += " ��������� �����:\r\n 1 �� 0,2 ��";
        }
    }

    if (ConcentratedCharge->Checked) {
        if (thickness_steel_beam <= 2) {
            answer = 20 * thickness_steel_beam * width_steel_beam;
        }

        if (thickness_steel_beam > 2) {
            answer = 10 * thickness_steel_beam * (thickness_steel_beam * width_steel_beam);
        }
        answer *= 2;
        answer = round(answer);
        answer_textBox->Text = " ������ ��� ���������� ������: " + (answer / 1000).ToString() + " ��\r\n\r\n";

        answer = ceill(answer / 200) * 200;

        answer_textBox->Text += " ��� ���������� �����: " + (answer / 1000).ToString() + " ��\r\n";

        if ((int)answer % 400 == 0) {
            answer_textBox->Text += " ��������� �����:\r\n " + floor(answer / 400) + " �� 0,4 ��";
        }
        else if (answer / 400 >= 1) {
            answer_textBox->Text += " ��������� �����:\r\n " + floor(answer / 400) + " �� 0,4 ��\r\n 1 �� 0,2 ��\r\n\r\n ���\r\n " + ((floor(answer / 400) * 2) + 1) + " �� 0,2 ��";
        }
        else {
            answer_textBox->Text += " ��������� �����:\r\n 1 �� 0,2 ��";
        }
    }

    if (checkUnderwaterExp->Checked) {
        answer *= 2;
        answer = round(answer);
        answer_textBox->Text = " ������ ��� ���������� ������: " + (answer / 1000).ToString() + " ��\r\n\r\n";

        answer = ceill(answer / 200) * 200;

        answer_textBox->Text += " ��� ���������� �����: " + (answer / 1000).ToString() + " ��\r\n";

        if ((int)answer % 400 == 0) {
            answer_textBox->Text += " ��������� �����:\r\n " + floor(answer / 400) + " �� 0,4 ��";
        }
        else if (answer / 400 >= 1) {
            answer_textBox->Text += " ��������� �����:\r\n " + floor(answer / 400) + " �� 0,4 ��\r\n 1 �� 0,2 ��\r\n\r\n ���\r\n " + ((floor(answer / 400) * 2) + 1) + " �� 0,2 ��";
        }
        else {
            answer_textBox->Text += " ��������� �����:\r\n 1 �� 0,2 ��";
        }
    }*/

}

