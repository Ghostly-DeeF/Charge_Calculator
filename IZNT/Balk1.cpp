#include "Balk1.h"
#include "ExRecalc.h"


const float coef[3][2] = {
		{0.8f, 1.0f},
		{1.0f, 1.25f},
		{1.6f, 2.0f}
};



inline System::Void IZNT::Balk1::calc_button_Click(System::Object^ sender, System::EventArgs^ e) {
    if (type_wood_comboBox->SelectedIndex == -1) {
        answer_textBox->Text = " Ошибка: выберите тип древесины из списка";
        return;
    }
    if (condition_wood_comboBox->SelectedIndex == -1) {
        answer_textBox->Text = " Ошибка: выберите состояние древесины из списка";
        return;
    }

    if (!float::TryParse(width_balk_textBox->Text, width_balk) && width_balk <= 0) {
        answer_textBox->Text = " Ошибка: вы некорректно ввели ширину\r\n Число должно быть больше 0\r\n Дробное число задается через запятую";
        return;
    }

    if (!float::TryParse(thickness_balk_textBox->Text, thickness_balk) && thickness_balk <= 0) {
        answer_textBox->Text = " Ошибка: вы некорректно ввели толщину\r\n Число должно быть больше 0\r\n Дробное число задается через запятую";
        return;
    }

    answer = coef[type_wood_comboBox->SelectedIndex][condition_wood_comboBox->SelectedIndex] * width_balk * thickness_balk;

    if (thickness_balk > 30) {
        answer *= thickness_balk / 30;
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


inline System::Void IZNT::Balk1::thickness_balk_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {

    if (float::TryParse(thickness_balk_textBox->Text, thickness_balk) && thickness_balk > 0) {
        underwater_checkBox->Text = "Взрыв под водой\r\n(глубже " + (thickness_balk * 2) + " см)";
    } else {
        underwater_checkBox->Text = "Взрыв под водой";
    }

    

}

inline System::Void IZNT::Balk1::btnTextVersion_Click(System::Object^ sender, System::EventArgs^ e) {
    TextVersion^ form = gcnew TextVersion;
    
    System::Windows::Forms::TextBox^ textBox1 = (gcnew System::Windows::Forms::TextBox());
    System::Windows::Forms::PictureBox^ pictureBox1 = (gcnew System::Windows::Forms::PictureBox());


    System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TextVersion::typeid));
    this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
    this->SuspendLayout();

    // 
    // pictureBox1
    // 
    pictureBox1->Image = Image::FromFile(".\\Picture\\Screenshot 2024-12-17 205638.png");//(cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
    pictureBox1->Location = System::Drawing::Point(13, 13);
    pictureBox1->Name = L"pictureBox1";
    pictureBox1->Size = System::Drawing::Size(417, 192);
    pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
    pictureBox1->TabIndex = 0;
    pictureBox1->TabStop = false;
    // 
    // textBox1
    // 
    textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
    textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
    textBox1->Location = System::Drawing::Point(13, 212);
    textBox1->Multiline = true;
    textBox1->Name = L"textBox1";
    textBox1->ReadOnly = true;
    textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
    textBox1->Size = System::Drawing::Size(417, 507);
    textBox1->TabIndex = 1;
    textBox1->TabStop = false;
    textBox1->BackColor = System::Drawing::Color::White;
    textBox1->Text = "Вес контактного заряда, необходимого для перебивания бруса или пакета бревен, определяется по формуле\r\n" +
        "C = KF, \r\n" +
        "где C - вес заряда в граммах; \r\n" +
        "K - коэффициент, зависящий от породы(крепости) и влажности древесины\r\n" +
        "F - площадь поперечного сечения бруса или пакета в квадратных сантиметрах. \r\n" +
        "В качестве расчетного диаметра принимается общий наибольший  диаметр пакета в сантиметрах. \r\n" +
        "Подрывание пакетов бревен производится сосредоточенными зарядами. \r\n" +
        "При толщине бруса h более 30 см вес заряда умножается на величину h / 30. Составные брусья при расчете зарядов принимаются за целые. \r\n" +
        "Заряд располагается на брусе обычно поперек его широкой грани.   \r\n";


    // 
    // TextVersion
    // 
    form->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
    form->AutoSize = true;
    form->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    form->ClientSize = System::Drawing::Size(442, 731);
    form->Controls->Add(textBox1);
    form->Controls->Add(pictureBox1);
    form->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
    form->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
    form->Name = L"TextVersion";
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox1))->EndInit();
    form->ResumeLayout(false);
    form->PerformLayout();


    form->Show();
}


