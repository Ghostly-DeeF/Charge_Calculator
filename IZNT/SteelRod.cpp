#include "SteelRod.h"
#include <cmath>

float diameter_steel_rod = 0.0f;
float answery = 0.0f;

inline System::Void IZNT::SteelRod::calc_button_Click(System::Object^ sender, System::EventArgs^ e) {


	if (float::TryParse(diameter_steel_rod_textBox->Text, diameter_steel_rod) && diameter_steel_rod <= 0) {
		answer_textBox->Text = " Ошибка: вы некорректно ввели диаметр\r\n Число должно быть больше 0\r\n Дробное число задается через запятую";
		return;
	}

	if (diameter_steel_rod > 2) {
		answery = 10 * pow(diameter_steel_rod, 3);
	}

	if (checkPlastit->Checked) {
		answery = (10 * pow(diameter_steel_rod, 3)) / 2;
	}

	if (checkUnderwaterExp->Checked) {
		answery *= 2;
	}

	answery = round(answery);
	answer_textBox->Text = " Точный вес требуемого заряда: " + (answery / 1000).ToString() + " кг\r\n\r\n";

	answery = ceill(answery / 200) * 200;

	answer_textBox->Text += " Вес тротиловых шашек: " + (answery / 1000).ToString() + " кг\r\n";

	if (((int)answery % 400 == 0)) {
		answer_textBox->Text += " Требуется шашек:\r\n " + floor(answery / 400) + " по 0,4 кг";
	}
	else if (answery / 400 >= 1) {
		answer_textBox->Text += " Требуется шашек:\r\n " + floor(answery / 400) + " по 0,4 кг\r\n 1 по 0,2 кг\r\n\r\n или\r\n " + ((floor(answery / 400) * 2) + 1) + " по 0,2 кг";
	}
	else {
		answer_textBox->Text += " Требуется шашек:\r\n 1 по 0,2 кг";
	}
}


