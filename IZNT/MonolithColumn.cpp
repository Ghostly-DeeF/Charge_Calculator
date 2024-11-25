#include "MonolithColumn.h"


const float masA[8]{ 0.75f, 1.0f, 1.2f, 1.4f, 1.5f, 1.8f, 5.0f, 20.0f };

const float masB[6][3] = {
	{9.0f, 5.0f, 1},
	{5.0f, 3.5f, 1},
	{1.7f, 1.5f, 0.666f},
	{1.3f, 1.15f, 0.5f},
	{5.0f, 2.5f, 1},
	{3.5f, 2.0f, 1}
};

const float count_line[9][3] = {
	{0.0f, 0.0f, 0.0f},
	{0.15f, 1.0f, 1.0f},
	{0.20f, 1.0f, 2.0f},
	{0.25f, 1.0f, 3.0f},
	{0.30f, 2.0f, 4.0f},
	{0.40f, 2.0f, 8.0f},
	{0.50f, 3.0f, 12.0f},
	{0.60f, 4.0f, 16.0f},
	{9999.9f, 0.0f, 0.0f}
};

inline IZNT::MonolithColumn::MonolithColumn(void)
{
	InitializeComponent();
	
	radius_label->Location = System::Drawing::Point(13, 173);
	radius_textBox->Location = System::Drawing::Point(16, 190);
	location_label->Location = System::Drawing::Point(13, 252);
	location_comboBox->Location = System::Drawing::Point(16, 270);
	pictureBox1->Location = System::Drawing::Point(16, 302);
	anti_slip_checkBox->Location = System::Drawing::Point(249, 400);
	scoring_checkBox->Location = System::Drawing::Point(249, 439);
}

inline System::Void IZNT::MonolithColumn::type_material_comboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	switch (type_material_comboBox->SelectedIndex)
	{
	case 0:
		second_label->Visible = true;
		second_comboBox->Visible = true;
		second_label->Text = "Тип раствора";
		second_comboBox->Items->Clear();
		second_comboBox->Items->Add("Известковый");
		second_comboBox->Items->Add("Цементный");
		radius_label->Location = System::Drawing::Point(13, 246);
		radius_textBox->Location = System::Drawing::Point(16, 263);
		location_label->Location = System::Drawing::Point(13, 325);
		location_comboBox->Location = System::Drawing::Point(16, 343);
		pictureBox1->Location = System::Drawing::Point(16, 375);
		break;

	case 1:
		second_label->Visible = true;
		second_comboBox->Visible = true;
		second_label->Text = "Тип раствора";
		second_comboBox->Items->Clear();
		second_comboBox->Items->Add("Цементный");
		type_brick_lable->Visible = false;
		type_brickwork_comboBox->Visible = false;
		radius_label->Location = System::Drawing::Point(13, 246);
		radius_textBox->Location = System::Drawing::Point(16, 263);
		location_label->Location = System::Drawing::Point(13, 325);
		location_comboBox->Location = System::Drawing::Point(16, 343);
		pictureBox1->Location = System::Drawing::Point(16, 375);
		break;

	case 2:
		second_label->Visible = true;
		second_comboBox->Visible = true;
		second_label->Text = "Тип бетона";
		second_comboBox->Items->Clear();
		second_comboBox->Items->Add("Строительный");
		second_comboBox->Items->Add("Фортификационный");
		type_brick_lable->Visible = false;
		type_brickwork_comboBox->Visible = false;
		radius_label->Location = System::Drawing::Point(13, 246);
		radius_textBox->Location = System::Drawing::Point(16, 263);
		location_label->Location = System::Drawing::Point(13, 325);
		location_comboBox->Location = System::Drawing::Point(16, 343);
		pictureBox1->Location = System::Drawing::Point(16, 375);
		break;

	case 3:
		second_label->Visible = true;
		second_comboBox->Visible = true;
		second_label->Text = "Тип перебивания";
		second_comboBox->Items->Clear();
		second_comboBox->Items->Add("Бетона");
		second_comboBox->Items->Add("Бетона и частично арматуры");
		type_brick_lable->Visible = false;
		type_brickwork_comboBox->Visible = false;
		radius_label->Location = System::Drawing::Point(13, 246);
		radius_textBox->Location = System::Drawing::Point(16, 263);
		location_label->Location = System::Drawing::Point(13, 325);
		location_comboBox->Location = System::Drawing::Point(16, 343);
		pictureBox1->Location = System::Drawing::Point(16, 375);
		break;

	default:
		radius_label->Location = System::Drawing::Point(13, 173);
		radius_textBox->Location = System::Drawing::Point(16, 190);
		location_label->Location = System::Drawing::Point(13, 252);
		location_comboBox->Location = System::Drawing::Point(16, 270);
		pictureBox1->Location = System::Drawing::Point(16, 302);
		break;
	};

	plastic_checkBox->Checked = false;

	if (type_material_comboBox->SelectedIndex == 3 && elongated_checkBox->Checked) {
		anti_slip_checkBox->Location = System::Drawing::Point(249, 468);
		scoring_checkBox->Location = System::Drawing::Point(249, 498);
		elongated_label->Location = System::Drawing::Point(246, 418);
		elongated_textBox->Location = System::Drawing::Point(249, 436);
		plastic_checkBox->Visible = true;
	}
	else {
		if (elongated_checkBox->Checked) {
			anti_slip_checkBox->Location = System::Drawing::Point(249, 438);
			scoring_checkBox->Location = System::Drawing::Point(249, 468);
			elongated_label->Location = System::Drawing::Point(246, 388);
			elongated_textBox->Location = System::Drawing::Point(249, 406);
			plastic_checkBox->Visible = false;
		}
	}

}

inline System::Void IZNT::MonolithColumn::second_comboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (type_material_comboBox->SelectedIndex == 0 && second_comboBox->SelectedIndex == 0) {
		type_brick_lable->Visible = true;
		type_brickwork_comboBox->Visible = true;
		radius_label->Location = System::Drawing::Point(13, 319);
		radius_textBox->Location = System::Drawing::Point(16, 336);
		location_label->Location = System::Drawing::Point(13, 398);
		location_comboBox->Location = System::Drawing::Point(16, 416);
		pictureBox1->Location = System::Drawing::Point(16, 448);
	}
	else {
		type_brick_lable->Visible = false;
		type_brickwork_comboBox->Visible = false;
		radius_label->Location = System::Drawing::Point(13, 246);
		radius_textBox->Location = System::Drawing::Point(16, 263);
		location_label->Location = System::Drawing::Point(13, 325);
		location_comboBox->Location = System::Drawing::Point(16, 343);
		pictureBox1->Location = System::Drawing::Point(16, 375);
	}
}

inline System::Void IZNT::MonolithColumn::location_comboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	switch (location_comboBox->SelectedIndex)
	{
	case 0:
		pictureBox1->Image = Image::FromFile(".\\Picture\\img1.bmp");
		break;
	case 1:
		pictureBox1->Image = Image::FromFile(".\\Picture\\img2.bmp");
		break;
	case 2:
		pictureBox1->Image = Image::FromFile(".\\Picture\\img3.bmp");
		break;
	case 3:
		pictureBox1->Image = Image::FromFile(".\\Picture\\img4.bmp");
		break;
	case 4:
		pictureBox1->Image = Image::FromFile(".\\Picture\\img5.bmp");
		break;
	case 5:
		pictureBox1->Image = Image::FromFile(".\\Picture\\img6.bmp");
		break;
	default:
		break;
	}
}

inline System::Void IZNT::MonolithColumn::radius_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	float width = 0.0f;
	if (float::TryParse(radius_textBox->Text, width) && width > 0) {
		elongated_checkBox->Text = "Удлиненный заряд (если ширина больше " + width * 2 + " м)";
	}
}

inline System::Void IZNT::MonolithColumn::elongated_checkBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	plastic_checkBox->Checked = false;
	if (elongated_checkBox->Checked) {
		elongated_textBox->Visible = true;
		elongated_label->Visible = true;
		if (type_material_comboBox->SelectedIndex == 3) {
			anti_slip_checkBox->Location = System::Drawing::Point(249, 468);
			scoring_checkBox->Location = System::Drawing::Point(249, 498);
			elongated_label->Location = System::Drawing::Point(246, 418);
			elongated_textBox->Location = System::Drawing::Point(249, 436);
			plastic_checkBox->Visible = true;
		}
		else {
			anti_slip_checkBox->Location = System::Drawing::Point(249, 438);
			scoring_checkBox->Location = System::Drawing::Point(249, 468);
			elongated_label->Location = System::Drawing::Point(246, 388);
			elongated_textBox->Location = System::Drawing::Point(249, 406);
			plastic_checkBox->Visible = false;
		}
	}
	else {
		anti_slip_checkBox->Location = System::Drawing::Point(249, 400);
		scoring_checkBox->Location = System::Drawing::Point(249, 439);
		elongated_textBox->Visible = false;
		elongated_label->Visible = false;
		plastic_checkBox->Visible = false;
	}
}

inline System::Void IZNT::MonolithColumn::plastic_checkBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (plastic_checkBox->Checked) {
		anti_slip_checkBox->Location = System::Drawing::Point(249, 421);
		scoring_checkBox->Location = System::Drawing::Point(249, 451);
		elongated_textBox->Visible = false;
		elongated_label->Visible = false;

		location_label->Visible = false;
		location_comboBox->Visible = false;
		pictureBox1->Visible = false;
	}
	else {
		anti_slip_checkBox->Location = System::Drawing::Point(249, 468);
		scoring_checkBox->Location = System::Drawing::Point(249, 498);
		elongated_textBox->Visible = true;
		elongated_label->Visible = true;

		location_label->Visible = true;
		location_comboBox->Visible = true;
		pictureBox1->Visible = true;
	}
}

inline System::Void IZNT::MonolithColumn::calc_button_Click(System::Object^ sender, System::EventArgs^ e) {
	if (type_material_comboBox->SelectedIndex == -1) {
		answer_textBox->Text = " Ошибка: выберите материал из списка";
		return;
	}
	if (second_comboBox->SelectedIndex == -1) {
		answer_textBox->Text = " Ошибка: выберите тип из списка";
		return;
	}
	if (type_brickwork_comboBox->SelectedIndex == -1 && type_material_comboBox->SelectedIndex == 0 && second_comboBox->SelectedIndex == 0) {
		answer_textBox->Text = " Ошибка: выберите тип кладки из списка";
		return;
	}
	if (location_comboBox->SelectedIndex == -1 && !plastic_checkBox->Checked) {
		answer_textBox->Text = " Ошибка: выберите схему расположения из списка";
		return;
	}

	float width = 0.0f;
	if (!float::TryParse(radius_textBox->Text, width) && width <= 0) {
		answer_textBox->Text = " Ошибка: вы некорректно ввели толщину\r\n Число должно быть больше 0\r\n Дробное число задается через запятую";
		return;
	}

	int indexA = 0;
	if (type_material_comboBox->SelectedIndex == 0) {
		if (second_comboBox->SelectedIndex == 0) {
			if (type_brickwork_comboBox->SelectedIndex == 0) indexA = 0;
			if (type_brickwork_comboBox->SelectedIndex == 1) indexA = 1;
		}
		if (second_comboBox->SelectedIndex == 1) indexA = 2;
	}
	if (type_material_comboBox->SelectedIndex == 1) indexA = 3;
	if (type_material_comboBox->SelectedIndex == 2) {
		if (second_comboBox->SelectedIndex == 0) indexA = 4;
		if (second_comboBox->SelectedIndex == 1) indexA = 5;
	}
	if (type_material_comboBox->SelectedIndex == 3) {
		if (second_comboBox->SelectedIndex == 0) indexA = 6;
		if (second_comboBox->SelectedIndex == 1) indexA = 7;
	}
	
	float coefB = 0.0f;
	if (location_comboBox->SelectedIndex == 0 && scoring_checkBox->Checked) {
		coefB = 6.5f;
	}
	else {
		coefB = masB[location_comboBox->SelectedIndex][(scoring_checkBox->Checked) ? 1 : 0];
	}

	if (plastic_checkBox->Checked) {
		int i = 0;
		for (i = 0; i < 8; i++) {
			if ((width > count_line[i][0]) && (width <= count_line[i + 1][0])) {
				break;
			}
		}
		if (i+1 <= 7) {
			answer = count_line[i + 1][indexA == 7 ? 2 : 1];
			answer_textBox->Text = "Требуется " + answer + " шт нитей пластитового заряда";
		}
		else {
			answer_textBox->Text = "Толщина больше 60 см!\r\nИспользуйте другой вид заряда";
		}
	}
	else {

		if (elongated_checkBox->Checked && !plastic_checkBox->Checked) {
			float length = 0.0f;
			if (!float::TryParse(elongated_textBox->Text, length) && length <= 0) {
				answer_textBox->Text = " Ошибка: вы некорректно ввели длину\r\n Число должно быть больше 0\r\n Дробное число задается через запятую";
				return;
			}
			answer = (0.5 * masA[indexA] * coefB * pow(width * masB[location_comboBox->SelectedIndex][2], 2) * length) * 1000;
		}
		else {
			answer = (masA[indexA] * coefB * pow(width * masB[location_comboBox->SelectedIndex][2], 3)) * 1000;
		}

		if (anti_slip_checkBox->Checked) {
			answer *= 6;
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
}




