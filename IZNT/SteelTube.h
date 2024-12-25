#pragma once
#include "TextVersion.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace IZNT {

	/// <summary>
	/// Сводка для SteelTube
	/// </summary>
	public ref class SteelTube : public System::Windows::Forms::UserControl
	{
	public:
		SteelTube(void)
		{
			InitializeComponent();
			pictureBox1->Image = Image::FromFile(".\\Picture\\img1Tube.bmp");
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~SteelTube()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ thickness_steel_tube_textBox;
	protected:

	private: System::Windows::Forms::TextBox^ answer_textBox;
	private: System::Windows::Forms::Button^ calc_button;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ diameter_steel_tube_textBox;

	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

	private: System::Windows::Forms::CheckBox^ checkUnderwaterExp;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::CheckBox^ checkFillingWater;
	private: System::Windows::Forms::Button^ btnTextVersion;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ explosive_material_comboBox;



		   float answerz;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Требуемый метод для поддержки конструктора — не изменяйте 
		   /// содержимое этого метода с помощью редактора кода.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->thickness_steel_tube_textBox = (gcnew System::Windows::Forms::TextBox());
			   this->answer_textBox = (gcnew System::Windows::Forms::TextBox());
			   this->calc_button = (gcnew System::Windows::Forms::Button());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->diameter_steel_tube_textBox = (gcnew System::Windows::Forms::TextBox());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->checkUnderwaterExp = (gcnew System::Windows::Forms::CheckBox());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->checkFillingWater = (gcnew System::Windows::Forms::CheckBox());
			   this->btnTextVersion = (gcnew System::Windows::Forms::Button());
			   this->label9 = (gcnew System::Windows::Forms::Label());
			   this->explosive_material_comboBox = (gcnew System::Windows::Forms::ComboBox());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			   this->label5->Location = System::Drawing::Point(12, 209);
			   this->label5->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(148, 16);
			   this->label5->TabIndex = 25;
			   this->label5->Text = L"Толщина h трубы в см";
			   // 
			   // thickness_steel_tube_textBox
			   // 
			   this->thickness_steel_tube_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			   this->thickness_steel_tube_textBox->Location = System::Drawing::Point(15, 226);
			   this->thickness_steel_tube_textBox->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			   this->thickness_steel_tube_textBox->Name = L"thickness_steel_tube_textBox";
			   this->thickness_steel_tube_textBox->Size = System::Drawing::Size(211, 26);
			   this->thickness_steel_tube_textBox->TabIndex = 24;
			   // 
			   // answer_textBox
			   // 
			   this->answer_textBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->answer_textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				   static_cast<System::Int32>(static_cast<System::Byte>(80)));
			   this->answer_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->answer_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			   this->answer_textBox->ForeColor = System::Drawing::SystemColors::Window;
			   this->answer_textBox->Location = System::Drawing::Point(249, 132);
			   this->answer_textBox->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			   this->answer_textBox->Multiline = true;
			   this->answer_textBox->Name = L"answer_textBox";
			   this->answer_textBox->ReadOnly = true;
			   this->answer_textBox->Size = System::Drawing::Size(451, 189);
			   this->answer_textBox->TabIndex = 23;
			   // 
			   // calc_button
			   // 
			   this->calc_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->calc_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			   this->calc_button->ForeColor = System::Drawing::SystemColors::ControlText;
			   this->calc_button->Location = System::Drawing::Point(249, 85);
			   this->calc_button->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			   this->calc_button->Name = L"calc_button";
			   this->calc_button->Size = System::Drawing::Size(451, 36);
			   this->calc_button->TabIndex = 22;
			   this->calc_button->Text = L"Рассчитать";
			   this->calc_button->UseVisualStyleBackColor = true;
			   this->calc_button->Click += gcnew System::EventHandler(this, &SteelTube::calc_button_Click);
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			   this->label4->Location = System::Drawing::Point(12, 137);
			   this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(150, 16);
			   this->label4->TabIndex = 21;
			   this->label4->Text = L"Диаметр D трубы в см";
			   // 
			   // diameter_steel_tube_textBox
			   // 
			   this->diameter_steel_tube_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			   this->diameter_steel_tube_textBox->Location = System::Drawing::Point(15, 155);
			   this->diameter_steel_tube_textBox->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			   this->diameter_steel_tube_textBox->Name = L"diameter_steel_tube_textBox";
			   this->diameter_steel_tube_textBox->Size = System::Drawing::Size(211, 26);
			   this->diameter_steel_tube_textBox->TabIndex = 20;
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F, System::Drawing::FontStyle::Bold));
			   this->label1->Location = System::Drawing::Point(35, 21);
			   this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(576, 66);
			   this->label1->TabIndex = 19;
			   this->label1->Text = L"Расчет контактного заряда, необходимого для перебивания\r\nстальной трубы\r\n\r\n";
			   this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			   // 
			   // checkUnderwaterExp
			   // 
			   this->checkUnderwaterExp->AutoSize = true;
			   this->checkUnderwaterExp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			   this->checkUnderwaterExp->Location = System::Drawing::Point(15, 281);
			   this->checkUnderwaterExp->Name = L"checkUnderwaterExp";
			   this->checkUnderwaterExp->Size = System::Drawing::Size(189, 24);
			   this->checkUnderwaterExp->TabIndex = 34;
			   this->checkUnderwaterExp->Text = L"Подрыв под водой";
			   this->checkUnderwaterExp->UseVisualStyleBackColor = true;
			   this->checkUnderwaterExp->CheckedChanged += gcnew System::EventHandler(this, &SteelTube::checkUnderwaterExp_CheckedChanged);
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->pictureBox1->Location = System::Drawing::Point(249, 337);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(451, 241);
			   this->pictureBox1->TabIndex = 35;
			   this->pictureBox1->TabStop = false;
			   // 
			   // checkFillingWater
			   // 
			   this->checkFillingWater->AutoSize = true;
			   this->checkFillingWater->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			   this->checkFillingWater->Location = System::Drawing::Point(15, 326);
			   this->checkFillingWater->Name = L"checkFillingWater";
			   this->checkFillingWater->Size = System::Drawing::Size(227, 24);
			   this->checkFillingWater->TabIndex = 36;
			   this->checkFillingWater->Text = L"Труба заполнена водой";
			   this->checkFillingWater->UseVisualStyleBackColor = true;
			   this->checkFillingWater->CheckedChanged += gcnew System::EventHandler(this, &SteelTube::checkFillingWater_CheckedChanged);
			   // 
			   // btnTextVersion
			   // 
			   this->btnTextVersion->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->btnTextVersion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			   this->btnTextVersion->ForeColor = System::Drawing::SystemColors::ControlText;
			   this->btnTextVersion->Location = System::Drawing::Point(611, 34);
			   this->btnTextVersion->Name = L"btnTextVersion";
			   this->btnTextVersion->Size = System::Drawing::Size(89, 45);
			   this->btnTextVersion->TabIndex = 37;
			   this->btnTextVersion->Text = L"Текстовая версия";
			   this->btnTextVersion->UseVisualStyleBackColor = true;
			   this->btnTextVersion->Click += gcnew System::EventHandler(this, &SteelTube::btnTextVersion_Click);
			   // 
			   // label9
			   // 
			   this->label9->AutoSize = true;
			   this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			   this->label9->Location = System::Drawing::Point(12, 71);
			   this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label9->Name = L"label9";
			   this->label9->Size = System::Drawing::Size(104, 16);
			   this->label9->TabIndex = 61;
			   this->label9->Text = L"Расчет для ВВ:";
			   // 
			   // explosive_material_comboBox
			   // 
			   this->explosive_material_comboBox->Cursor = System::Windows::Forms::Cursors::Default;
			   this->explosive_material_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			   this->explosive_material_comboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			   this->explosive_material_comboBox->FormattingEnabled = true;
			   this->explosive_material_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Тротил", L"Пластид - 4", L"Аммонал" });
			   this->explosive_material_comboBox->Location = System::Drawing::Point(15, 88);
			   this->explosive_material_comboBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			   this->explosive_material_comboBox->Name = L"explosive_material_comboBox";
			   this->explosive_material_comboBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			   this->explosive_material_comboBox->Size = System::Drawing::Size(211, 28);
			   this->explosive_material_comboBox->TabIndex = 60;
			   // 
			   // SteelTube
			   // 
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				   static_cast<System::Int32>(static_cast<System::Byte>(64)));
			   this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->Controls->Add(this->label9);
			   this->Controls->Add(this->explosive_material_comboBox);
			   this->Controls->Add(this->btnTextVersion);
			   this->Controls->Add(this->checkFillingWater);
			   this->Controls->Add(this->pictureBox1);
			   this->Controls->Add(this->checkUnderwaterExp);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->thickness_steel_tube_textBox);
			   this->Controls->Add(this->answer_textBox);
			   this->Controls->Add(this->calc_button);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->diameter_steel_tube_textBox);
			   this->Controls->Add(this->label1);
			   this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			   this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			   this->Name = L"SteelTube";
			   this->Size = System::Drawing::Size(719, 591);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void calc_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void checkUnderwaterExp_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkFillingWater_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnTextVersion_Click(System::Object^ sender, System::EventArgs^ e) {
	TextVersion^ form = gcnew TextVersion;

	System::Windows::Forms::TextBox^ textBox1 = (gcnew System::Windows::Forms::TextBox());
	System::Windows::Forms::PictureBox^ pictureBox1 = (gcnew System::Windows::Forms::PictureBox());


	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TextVersion::typeid));
	this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
	this->SuspendLayout();


	// 
	// textBox1
	// 
	textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
	textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
	textBox1->Location = System::Drawing::Point(13, 12);
	textBox1->Multiline = true;
	textBox1->Name = L"textBox1";
	textBox1->ReadOnly = true;
	textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
	textBox1->Size = System::Drawing::Size(417, 707);
	textBox1->TabIndex = 1;
	textBox1->TabStop = false;
	textBox1->BackColor = System::Drawing::Color::White;
	textBox1->Text = "Стальные трубы и пустотелые колонны подрваются зарядами, располагаемыми по наружной поверхности труб(колонн) на протяжении не менее 3/4 их окружности. Расчет зарядов производится по площади поперечного сечения стенок или по их толщине. Для подрывания стальных труб и пустотелых колонн удобнее применять кольцевые заряды из пластичного ВВ.Вес кольцевого заряда из пластита - 4 принимается равным весу заряда из тротиловых шашек. \r\n"

		"Формула расчета:\r\n"
		"C = 20F\r\n"

		"Подрывание стальных элементов под водой. \r\n"
		"Масса контактных зарядов берется в 2 раза большей \r\n"

		"Подрывание стальной обшивки судов и стальных элементов гидротехнических сооружений, омываемых водой только со стороны приложения зарядов\r\n"
		"Масса контактных зарядов берется в 1,5 раза меньше \r\n"

		"Подрывание стальной обшивки судов зарядами, расположенными с внутренней стороны конструкции(в трюме). \r\n"
		"Масса контактных зарядов берется в 4 раза больше \r\n"

		"Перебивание стальных листов(полос, плит) под водой может быть обеспечено контактными зарядами без увеличения, если со стороны, противоположной заряду, к подрываемому элементу прикрепить деревянный брусок, а лучше - полую водонепроницаемую коробку. \r\n"
		"Масса контактных зарядов берется без увеличения \r\n"
		"Размеры деревянного бруска(полой водонепроницаемой коробкой) должны быть не меньше размера заряда. \r\n"
		"Для перебивания толстых(свыше 5 см) стальных  и броневых листов под водой целесообразно применять кумулятивные удлиненные заряды с полостями, защищенными от заполнения водой . \r\n";

	// 
	// TextVersion
	// 
	form->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
	form->AutoSize = true;
	form->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
	form->ClientSize = System::Drawing::Size(442, 731);
	form->Controls->Add(textBox1);
	form->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
	form->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
	form->Name = L"TextVersion";
	form->ResumeLayout(false);
	form->PerformLayout();


	form->Show();
}
};
}
