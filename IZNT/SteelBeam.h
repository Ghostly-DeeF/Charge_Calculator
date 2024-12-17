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
	/// Сводка для SteelBeam
	/// </summary>
	public ref class SteelBeam : public System::Windows::Forms::UserControl
	{
	public:
		SteelBeam(void);

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~SteelBeam()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:





	private:
		float answer_up_belt = 0.0f;
		float answer_down_belt = 0.0f;
		float answer_wall = 0.0f;
		System::Windows::Forms::TextBox^ answer_textBox;
	private: System::Windows::Forms::Button^ calc_button;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::CheckBox^ checkUnderwaterExp;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ type_charge_comboBox;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ thickness_up_textBox;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ thickness_down_textBox;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ width_wall_textBox;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ thickness_wall_textBox;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::CheckBox^ conner_checkBox;
	private: System::Windows::Forms::TextBox^ width_up_textBox;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ width_down_textBox;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ btnTextVersion;





	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->answer_textBox = (gcnew System::Windows::Forms::TextBox());
			this->calc_button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkUnderwaterExp = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->type_charge_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->thickness_up_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->thickness_down_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->width_wall_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->thickness_wall_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->conner_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->width_up_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->width_down_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->btnTextVersion = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
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
			this->answer_textBox->Size = System::Drawing::Size(454, 401);
			this->answer_textBox->TabIndex = 28;
			// 
			// calc_button
			// 
			this->calc_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->calc_button->ForeColor = System::Drawing::SystemColors::ControlText;
			this->calc_button->Location = System::Drawing::Point(249, 85);
			this->calc_button->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->calc_button->Name = L"calc_button";
			this->calc_button->Size = System::Drawing::Size(454, 36);
			this->calc_button->TabIndex = 27;
			this->calc_button->Text = L"Рассчитать";
			this->calc_button->UseVisualStyleBackColor = true;
			this->calc_button->Click += gcnew System::EventHandler(this, &SteelBeam::calc_button_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(33, 21);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(576, 44);
			this->label1->TabIndex = 26;
			this->label1->Text = L"Расчет контактного заряда, необходимого для перебивания\r\nстальной балки";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// checkUnderwaterExp
			// 
			this->checkUnderwaterExp->AutoSize = true;
			this->checkUnderwaterExp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->checkUnderwaterExp->Location = System::Drawing::Point(14, 148);
			this->checkUnderwaterExp->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->checkUnderwaterExp->Name = L"checkUnderwaterExp";
			this->checkUnderwaterExp->Size = System::Drawing::Size(189, 24);
			this->checkUnderwaterExp->TabIndex = 35;
			this->checkUnderwaterExp->Text = L"Подрыв под водой";
			this->checkUnderwaterExp->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label3->Location = System::Drawing::Point(11, 68);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 16);
			this->label3->TabIndex = 37;
			this->label3->Text = L"Тип заряда";
			// 
			// type_charge_comboBox
			// 
			this->type_charge_comboBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->type_charge_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->type_charge_comboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->type_charge_comboBox->FormattingEnabled = true;
			this->type_charge_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Фигурный из шашек", L"Фигурный из пластита-4",
					L"Сосредоточенный"
			});
			this->type_charge_comboBox->Location = System::Drawing::Point(14, 85);
			this->type_charge_comboBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->type_charge_comboBox->Name = L"type_charge_comboBox";
			this->type_charge_comboBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->type_charge_comboBox->Size = System::Drawing::Size(211, 28);
			this->type_charge_comboBox->TabIndex = 36;
			this->type_charge_comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &SteelBeam::type_charge_comboBox_SelectedIndexChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(14, 178);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(211, 410);
			this->pictureBox1->TabIndex = 38;
			this->pictureBox1->TabStop = false;
			// 
			// thickness_up_textBox
			// 
			this->thickness_up_textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(86)));
			this->thickness_up_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->thickness_up_textBox->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->thickness_up_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->thickness_up_textBox->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->thickness_up_textBox->Location = System::Drawing::Point(23, 272);
			this->thickness_up_textBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->thickness_up_textBox->MaxLength = 4;
			this->thickness_up_textBox->Name = L"thickness_up_textBox";
			this->thickness_up_textBox->Size = System::Drawing::Size(28, 19);
			this->thickness_up_textBox->TabIndex = 39;
			this->thickness_up_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label8->Location = System::Drawing::Point(49, 275);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(33, 20);
			this->label8->TabIndex = 40;
			this->label8->Text = L"мм";
			// 
			// thickness_down_textBox
			// 
			this->thickness_down_textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(86)));
			this->thickness_down_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->thickness_down_textBox->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->thickness_down_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->thickness_down_textBox->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->thickness_down_textBox->Location = System::Drawing::Point(23, 442);
			this->thickness_down_textBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->thickness_down_textBox->MaxLength = 4;
			this->thickness_down_textBox->Name = L"thickness_down_textBox";
			this->thickness_down_textBox->Size = System::Drawing::Size(28, 19);
			this->thickness_down_textBox->TabIndex = 41;
			this->thickness_down_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label2->Location = System::Drawing::Point(49, 445);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 20);
			this->label2->TabIndex = 42;
			this->label2->Text = L"мм";
			// 
			// width_wall_textBox
			// 
			this->width_wall_textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(86)));
			this->width_wall_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->width_wall_textBox->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->width_wall_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->width_wall_textBox->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->width_wall_textBox->Location = System::Drawing::Point(54, 317);
			this->width_wall_textBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->width_wall_textBox->MaxLength = 4;
			this->width_wall_textBox->Name = L"width_wall_textBox";
			this->width_wall_textBox->Size = System::Drawing::Size(28, 19);
			this->width_wall_textBox->TabIndex = 43;
			this->width_wall_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label4->Location = System::Drawing::Point(80, 320);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 20);
			this->label4->TabIndex = 44;
			this->label4->Text = L"мм";
			// 
			// thickness_wall_textBox
			// 
			this->thickness_wall_textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(86)));
			this->thickness_wall_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->thickness_wall_textBox->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->thickness_wall_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->thickness_wall_textBox->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->thickness_wall_textBox->Location = System::Drawing::Point(23, 407);
			this->thickness_wall_textBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->thickness_wall_textBox->MaxLength = 4;
			this->thickness_wall_textBox->Name = L"thickness_wall_textBox";
			this->thickness_wall_textBox->Size = System::Drawing::Size(28, 19);
			this->thickness_wall_textBox->TabIndex = 45;
			this->thickness_wall_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label6->Location = System::Drawing::Point(49, 410);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 20);
			this->label6->TabIndex = 46;
			this->label6->Text = L"мм";
			// 
			// conner_checkBox
			// 
			this->conner_checkBox->AutoSize = true;
			this->conner_checkBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->conner_checkBox->Location = System::Drawing::Point(14, 119);
			this->conner_checkBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->conner_checkBox->Name = L"conner_checkBox";
			this->conner_checkBox->Size = System::Drawing::Size(162, 24);
			this->conner_checkBox->TabIndex = 47;
			this->conner_checkBox->Text = L"Поясные уголки";
			this->conner_checkBox->UseVisualStyleBackColor = true;
			this->conner_checkBox->CheckedChanged += gcnew System::EventHandler(this, &SteelBeam::conner_checkBox_CheckedChanged);
			// 
			// width_up_textBox
			// 
			this->width_up_textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)));
			this->width_up_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->width_up_textBox->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->width_up_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->width_up_textBox->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->width_up_textBox->Location = System::Drawing::Point(97, 186);
			this->width_up_textBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->width_up_textBox->MaxLength = 4;
			this->width_up_textBox->Name = L"width_up_textBox";
			this->width_up_textBox->Size = System::Drawing::Size(28, 19);
			this->width_up_textBox->TabIndex = 48;
			this->width_up_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label5->Location = System::Drawing::Point(123, 189);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(33, 20);
			this->label5->TabIndex = 49;
			this->label5->Text = L"мм";
			// 
			// width_down_textBox
			// 
			this->width_down_textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(86)));
			this->width_down_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->width_down_textBox->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->width_down_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->width_down_textBox->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->width_down_textBox->Location = System::Drawing::Point(97, 530);
			this->width_down_textBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->width_down_textBox->MaxLength = 4;
			this->width_down_textBox->Name = L"width_down_textBox";
			this->width_down_textBox->Size = System::Drawing::Size(28, 19);
			this->width_down_textBox->TabIndex = 50;
			this->width_down_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label7->Location = System::Drawing::Point(123, 533);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(33, 20);
			this->label7->TabIndex = 51;
			this->label7->Text = L"мм";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(225, 539);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(478, 49);
			this->pictureBox2->TabIndex = 52;
			this->pictureBox2->TabStop = false;
			// 
			// btnTextVersion
			// 
			this->btnTextVersion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->btnTextVersion->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnTextVersion->Location = System::Drawing::Point(614, 34);
			this->btnTextVersion->Name = L"btnTextVersion";
			this->btnTextVersion->Size = System::Drawing::Size(89, 45);
			this->btnTextVersion->TabIndex = 53;
			this->btnTextVersion->Text = L"Текстовая версия";
			this->btnTextVersion->UseVisualStyleBackColor = true;
			this->btnTextVersion->Click += gcnew System::EventHandler(this, &SteelBeam::btnTextVersion_Click);
			// 
			// SteelBeam
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Controls->Add(this->btnTextVersion);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->width_down_textBox);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->width_up_textBox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->conner_checkBox);
			this->Controls->Add(this->thickness_wall_textBox);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->width_wall_textBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->thickness_down_textBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->thickness_up_textBox);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->type_charge_comboBox);
			this->Controls->Add(this->checkUnderwaterExp);
			this->Controls->Add(this->answer_textBox);
			this->Controls->Add(this->calc_button);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"SteelBeam";
			this->Size = System::Drawing::Size(719, 591);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void calc_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void conner_checkBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void type_charge_comboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
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
	textBox1->Text = "Стальные балки подрываются преимущественно фигурными зарядами. При проведении работ в сокращенные сроки применяются сосредоточенные заряды.\r\n"

		"А) Подрывание стальных балок фигурными зарядами. \r\n"

		"С = 20F при h <= 2\r\n"
		"С = 10hF при h > 2\r\n"

		"Фигурные заряды размещаются на подрываемых балках так, чтобы они охватывали их поперечное сечение с нескольких сторон.При этом части заряда, действующие в противоположных направлениях, должны располагаться сопротивление сдвигом одна относительно другой по длине балки. \r\n"
		"Каждая составная часть фигурного заряда, предназначенная для перебивания той или иной части балки, рассчитывается отдельно, как в случае перебивания отдельных листов.При расчете частей заряда по толщине листов на каждую пару поясных уголков в составных балках добавляют по 2 - 3 больших шашки. \r\n"

		"Составные части фигурного заряда изготавливаются(вяжутся) отдельно одна от другой, а при укладке на подрываемую балку объединяются в общий заряд при помощи соединительных шашек, масса этих шашек в расчетную массу заряда не включается. \r\n"

		"Крепление фигурных зарядов к подрываемым балкам осуществляется при помощи  веревок, мягкой проволоки, дощатых накладок и распорок.Крепление производится в следующем порядке : веревку или проволоку обводят два раза вокруг перебиваемого сечения и завязывают ее сопротивление слабиной; затем под веревку(проволоку) подводят привязанные к дощатым накладкам части заряда и прижимают их к балке при помощи распорок. \r\n"
		"Для подрывания стальных балок целесообразно применять заряды из пластичного ВВ в мягкой оболочке. \r\n"


		"Б) Подрывание стальных балок сосредоточенными зарядами. \r\n"
		"Сосредоточенные заряды обычно размещаются во внутренних углах и полостях, образуемых полками и стенками подрываемых балок, где сечение их является наиболее мощным.Масса сосредоточенного заряда принимается в два раза больше по сравнению с массой фигурного заряда, рассчитанного на перебивание балки того же поперечного сечения, т.е. \r\n"
		"С = 40F при h <= 2\r\n"
		"С = 20hF при h > 2\r\n"
		"Для перебивания стальных балок, имеющих большую площадь поперечного сечения, могут применяться удлиненные заряды КЗУ, КЗУ - 2, ЛКЗ - 80; способы их укладки на подрываемых балках выбираются в зависимости от формы поперечного сечения этих балок и типа применяемых зарядов. \r\n"

		"Для подрывания под водой стальных балок применять фигурные заряды, охватывающие подрываемые элементы с нескольких сторон нецелесообразно.Для балок небольших поперечных размеров  наиболее целесообразно применять сосредоточенные заряды, а для крупных балок - фигурные заряды, перекрывающие их только с одной стороны.Масса таких зарядов определяется по правилам расчета сосредоточенных зарядов\r\n";

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
