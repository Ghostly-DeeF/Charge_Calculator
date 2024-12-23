#include "WoodTwoBalk.h"
#include "ExRecalc.h"

const float coef[3][2] = {
		{0.8f, 1.0f},
		{1.0f, 1.25f},
		{1.6f, 2.0f}
};

inline IZNT::WoodTwoBalk::WoodTwoBalk(void)
{
	InitializeComponent();
	pictureBox1->Image = Image::FromFile(".\\Picture\\img1WoodTwoTavr.bmp");
}

inline System::Void IZNT::WoodTwoBalk::type_charge_comboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (type_charge_comboBox->SelectedIndex == 0) {
		pictureBox1->Image = Image::FromFile(".\\Picture\\img2WoodTwoTavr.bmp");
	}
	else if (type_charge_comboBox->SelectedIndex == 1) {
		pictureBox1->Image = Image::FromFile(".\\Picture\\img3WoodTwoTavr.bmp");
	}
}

inline System::Void IZNT::WoodTwoBalk::calc_button_Click(System::Object^ sender, System::EventArgs^ e) {
	if (type_charge_comboBox->SelectedIndex == -1) {
		answer_textBox->Text = " Ошибка: выберите тип заряда из списка";
		return;
	}
	if (type_wood_comboBox->SelectedIndex == -1) {
		answer_textBox->Text = " Ошибка: выберите тип древесины из списка";
		return;
	}
	if (condition_wood_comboBox->SelectedIndex == -1) {
		answer_textBox->Text = " Ошибка: выберите состояние древесины из списка";
		return;
	}

	float widthMas;
	if (!float::TryParse(widthMas_textBox->Text, widthMas) && widthMas <= 0) {
		answer_textBox->Text = " Ошибка: вы некорректно ввели ширину пояса\r\n Число должно быть больше 0\r\n Дробное число задается через запятую";
		return;
	}

	float heightMas;
	if (!float::TryParse(heightMas_textBox->Text, heightMas) && heightMas <= 0) {
		answer_textBox->Text = " Ошибка: вы некорректно ввели толщину пояса\r\n Число должно быть больше 0\r\n Дробное число задается через запятую";
		return;
	}

	float heightWall;
	if (!float::TryParse(heightWall_textBox->Text, heightWall) && heightWall <= 0) {
		answer_textBox->Text = " Ошибка: вы некорректно ввели высоту стенки\r\n Число должно быть больше 0\r\n Дробное число задается через запятую";
		return;
	}

	float widthWall;
	if (!float::TryParse(widthWall_textBox->Text, widthWall) && widthWall <= 0) {
		answer_textBox->Text = " Ошибка: вы некорректно ввели толщину стенки\r\n Число должно быть больше 0\r\n Дробное число задается через запятую";
		return;
	}

	

	switch (type_charge_comboBox->SelectedIndex)
	{
	case 0:

		answerMas = coef[type_wood_comboBox->SelectedIndex][condition_wood_comboBox->SelectedIndex] * (widthMas * heightMas);
		answerWall = coef[type_wood_comboBox->SelectedIndex][condition_wood_comboBox->SelectedIndex] * (widthWall * heightWall);

		if (widthMas > 30) {
			answerMas *= widthMas / 30;
		}
		if (widthWall > 30) {
			answerWall *= widthWall / 30;
		}

		if (underwater_checkBox->Checked) {
			answerMas /= 2;
			answerWall /= 2;
		}

		if (explosive_material_comboBox->SelectedIndex == -1) {
			answer_textBox->Text = " Ошибка: выберите тип ВВ из списка";
			return;
		}
		answerMas = recalculation(explosive_material_comboBox, answer_textBox, answerMas);
		answerWall = recalculation(explosive_material_comboBox, answer_textBox, answerWall);

		answerMas = round(answerMas);
		answerWall = round(answerWall);

		answer_textBox->Text = " Точный общий вес всех зарядов: " + ((answerMas + answerWall) / 1000).ToString() + " кг\r\n\r\n";

		answerMas = ceill(answerMas / 200) * 200;

		answer_textBox->Text += " Вес тротиловых шашек для каждого пояса: " + (answerMas / 1000).ToString() + " кг\r\n";

		if (((int)answerMas % 400 == 0)) {
			answer_textBox->Text += " Требуется шашек:\r\n " + floor(answerMas / 400) + " по 0,4 кг\r\n\r\n";
		}
		else if (answerMas / 400 >= 1) {
			answer_textBox->Text += " Требуется шашек:\r\n " + floor(answerMas / 400) + " по 0,4 кг\r\n 1 по 0,2 кг\r\n\r\n";
		}
		else {
			answer_textBox->Text += " Требуется шашек:\r\n 1 по 0,2 кг\r\n\r\n";
		}

		answerWall = ceill(answerWall / 200) * 200;

		answer_textBox->Text += " Вес тротиловых шашек для стенки: " + (answerWall / 1000).ToString() + " кг\r\n";

		if (((int)answerWall % 400 == 0)) {
			answer_textBox->Text += " Требуется шашек:\r\n " + floor(answerWall / 400) + " по 0,4 кг\r\n";
		}
		else if (answerWall / 400 >= 1) {
			answer_textBox->Text += " Требуется шашек:\r\n " + floor(answerWall / 400) + " по 0,4 кг\r\n 1 по 0,2 кг\r\n";
		}
		else {
			answer_textBox->Text += " Требуется шашек:\r\n 1 по 0,2 кг\r\n";
		}
		answer_textBox->Text += " Или перекройте стенку по всей высоте 1 рядом\r\n малых шашек по 200г";
		break;

	case 1:

		answerMas = coef[type_wood_comboBox->SelectedIndex][condition_wood_comboBox->SelectedIndex] * (widthMas * heightMas);

		if (widthMas > 30) {
			answerMas *= widthMas / 30;
		}

		answerMas *= 2;

		if (underwater_checkBox->Checked) {
			answerMas /= 2;
		}

		answerMas = round(answerMas);

		answer_textBox->Text = " Точный вес каждого заряда: " + (answerMas / 1000).ToString() + " кг\r\n\r\n";

		answerMas = ceill(answerMas / 200) * 200;

		answer_textBox->Text += " Вес тротиловых шашек: " + (answerMas / 1000).ToString() + " кг\r\n";

		if (((int)answerMas % 400 == 0)) {
			answer_textBox->Text += " Требуется шашек:\r\n " + floor(answerMas / 400) + " по 0,4 кг";
		}
		else if (answerMas / 400 >= 1) {
			answer_textBox->Text += " Требуется шашек:\r\n " + floor(answerMas / 400) + " по 0,4 кг\r\n 1 по 0,2 кг\r\n\r\n или\r\n " + ((floor(answerMas / 400) * 2) + 1) + " по 0,2 кг";
		}
		else {
			answer_textBox->Text += " Требуется шашек:\r\n 1 по 0,2 кг";
		}
		break;

		
	default:
		break;
	}
	

}
