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
	/// Сводка для SteelCable
	/// </summary>
	public ref class SteelCable : public System::Windows::Forms::UserControl
	{
	public:
		SteelCable(void);

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~SteelCable()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ answer_textBox;
	protected:
	private: System::Windows::Forms::Button^ calc_button;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ diameter_steel_cable_textBox;

	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;
	private: System::Windows::Forms::CheckBox^ checkBox_Steel_Cable;
	private: System::Windows::Forms::CheckBox^ checkUnderwaterExp;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnTextVersion;

		   float answerz;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Требуемый метод для поддержки конструктора — не изменяйте 
		   /// содержимое этого метода с помощью редактора кода.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->answer_textBox = (gcnew System::Windows::Forms::TextBox());
			   this->calc_button = (gcnew System::Windows::Forms::Button());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->diameter_steel_cable_textBox = (gcnew System::Windows::Forms::TextBox());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->checkBox_Steel_Cable = (gcnew System::Windows::Forms::CheckBox());
			   this->checkUnderwaterExp = (gcnew System::Windows::Forms::CheckBox());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->btnTextVersion = (gcnew System::Windows::Forms::Button());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // answer_textBox
			   // 
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
			   this->answer_textBox->TabIndex = 35;
			   // 
			   // calc_button
			   // 
			   this->calc_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			   this->calc_button->ForeColor = System::Drawing::SystemColors::ControlText;
			   this->calc_button->Location = System::Drawing::Point(249, 85);
			   this->calc_button->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			   this->calc_button->Name = L"calc_button";
			   this->calc_button->Size = System::Drawing::Size(451, 36);
			   this->calc_button->TabIndex = 34;
			   this->calc_button->Text = L"Рассчитать";
			   this->calc_button->UseVisualStyleBackColor = true;
			   this->calc_button->Click += gcnew System::EventHandler(this, &SteelCable::calc_button_Click);
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			   this->label4->Location = System::Drawing::Point(13, 67);
			   this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(145, 16);
			   this->label4->TabIndex = 33;
			   this->label4->Text = L"Диаметр h троса в см";
			   // 
			   // diameter_steel_cable_textBox
			   // 
			   this->diameter_steel_cable_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			   this->diameter_steel_cable_textBox->Location = System::Drawing::Point(16, 85);
			   this->diameter_steel_cable_textBox->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			   this->diameter_steel_cable_textBox->Name = L"diameter_steel_cable_textBox";
			   this->diameter_steel_cable_textBox->Size = System::Drawing::Size(211, 26);
			   this->diameter_steel_cable_textBox->TabIndex = 32;
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F, System::Drawing::FontStyle::Bold));
			   this->label1->Location = System::Drawing::Point(34, 21);
			   this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(576, 66);
			   this->label1->TabIndex = 31;
			   this->label1->Text = L"Расчет контактного заряда, необходимого для перебивания\r\nстального троса\r\n\r\n";
			   this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			   // 
			   // checkBox_Steel_Cable
			   // 
			   this->checkBox_Steel_Cable->AutoSize = true;
			   this->checkBox_Steel_Cable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			   this->checkBox_Steel_Cable->Location = System::Drawing::Point(16, 132);
			   this->checkBox_Steel_Cable->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			   this->checkBox_Steel_Cable->Name = L"checkBox_Steel_Cable";
			   this->checkBox_Steel_Cable->Size = System::Drawing::Size(188, 44);
			   this->checkBox_Steel_Cable->TabIndex = 36;
			   this->checkBox_Steel_Cable->Text = L"Кольцевой заряд\r\nиз пластичного ВВ";
			   this->checkBox_Steel_Cable->UseVisualStyleBackColor = true;
			   this->checkBox_Steel_Cable->CheckedChanged += gcnew System::EventHandler(this, &SteelCable::checkBox_Steel_Cable_CheckedChanged);
			   // 
			   // checkUnderwaterExp
			   // 
			   this->checkUnderwaterExp->AutoSize = true;
			   this->checkUnderwaterExp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			   this->checkUnderwaterExp->Location = System::Drawing::Point(16, 181);
			   this->checkUnderwaterExp->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			   this->checkUnderwaterExp->Name = L"checkUnderwaterExp";
			   this->checkUnderwaterExp->Size = System::Drawing::Size(189, 24);
			   this->checkUnderwaterExp->TabIndex = 37;
			   this->checkUnderwaterExp->Text = L"Подрыв под водой";
			   this->checkUnderwaterExp->UseVisualStyleBackColor = true;
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Location = System::Drawing::Point(16, 327);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(684, 251);
			   this->pictureBox1->TabIndex = 38;
			   this->pictureBox1->TabStop = false;
			   // 
			   // btnTextVersion
			   // 
			   this->btnTextVersion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			   this->btnTextVersion->ForeColor = System::Drawing::SystemColors::ControlText;
			   this->btnTextVersion->Location = System::Drawing::Point(611, 34);
			   this->btnTextVersion->Name = L"btnTextVersion";
			   this->btnTextVersion->Size = System::Drawing::Size(89, 45);
			   this->btnTextVersion->TabIndex = 39;
			   this->btnTextVersion->Text = L"Текстовая версия";
			   this->btnTextVersion->UseVisualStyleBackColor = true;
			   this->btnTextVersion->Click += gcnew System::EventHandler(this, &SteelCable::btnTextVersion_Click);
			   // 
			   // SteelCable
			   // 
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				   static_cast<System::Int32>(static_cast<System::Byte>(64)));
			   this->Controls->Add(this->btnTextVersion);
			   this->Controls->Add(this->pictureBox1);
			   this->Controls->Add(this->checkUnderwaterExp);
			   this->Controls->Add(this->checkBox_Steel_Cable);
			   this->Controls->Add(this->answer_textBox);
			   this->Controls->Add(this->calc_button);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->diameter_steel_cable_textBox);
			   this->Controls->Add(this->label1);
			   this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			   this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			   this->Name = L"SteelCable";
			   this->Size = System::Drawing::Size(719, 591);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void calc_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void checkBox_Steel_Cable_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
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
	textBox1->Text = "Стальные тросы перебиваются парными сосредоточенными зарядами из тротиловых шашек, прикрепляемыми с противоположных сторон троса, сопротивление сдвигом одного по отношению к другому.Взрыв обоих зарядов должен производиться одновременно при помощи детонирующего шнура. . \r\n"
		"Масса каждого из двух зарядов, предназначенных для перебивания троса определяется по формуле :\r\nС = 10·D^3	(5.9) \r\n"
		"Примечания : \r\n"
		"1.	Заряд должен располагаться так, чтобы он перекрывал весь диаметр троса. \r\n"
		"2.	Заряд должен иметь высоту не менее 2.5 диаметра троса. \r\n"
		"3.	Для перебивания троса применяется два заряда. \r\n"
		"4.	Заряды располагаются с противоположных сторон троса сопротивление сдвигом одного по отношению к другому. \r\n"
		"5.	Взрыв зарядов производится одновременно. \r\n"
		"Для перебивания тросов целесообразно применять кольцевые заряды из пластичного ВВ.Трос перебивается одним кольцевым зарядом, масса которого определяется по формуле С = 10·D^3, но с уменьшением на 1/4";

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
	form->Text = L"TextVersion";
	form->ResumeLayout(false);
	form->PerformLayout();


	form->Show();
}
};
}
