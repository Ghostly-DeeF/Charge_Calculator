#pragma once

#include <cmath>
#include "TextVersion.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace IZNT {

	/// <summary>
	/// Сводка для WoodTwoBalk
	/// </summary>
	public ref class WoodTwoBalk : public System::Windows::Forms::UserControl
	{
	public:
		WoodTwoBalk(void);

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~WoodTwoBalk()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		System::Windows::Forms::Label^ label2;
		float answerMas = 0.0f;
		float answerWall = 0.0f;
	protected:
	private: System::Windows::Forms::ComboBox^ type_wood_comboBox;
	private: System::Windows::Forms::TextBox^ answer_textBox;
	private: System::Windows::Forms::Button^ calc_button;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ condition_wood_comboBox;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ heightMas_textBox;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ heightWall_textBox;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ widthWall_textBox;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ type_charge_comboBox;
	private: System::Windows::Forms::TextBox^ widthMas_textBox;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::CheckBox^ underwater_checkBox;
	private: System::Windows::Forms::Button^ btnTextVersion;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ explosive_material_comboBox;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->type_wood_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->answer_textBox = (gcnew System::Windows::Forms::TextBox());
			this->calc_button = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->condition_wood_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->heightMas_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->heightWall_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->widthWall_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->type_charge_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->widthMas_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->underwater_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->btnTextVersion = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->explosive_material_comboBox = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label2->Location = System::Drawing::Point(10, 163);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(186, 20);
			this->label2->TabIndex = 27;
			this->label2->Text = L"Тип породы древесины";
			// 
			// type_wood_comboBox
			// 
			this->type_wood_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->type_wood_comboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->type_wood_comboBox->FormattingEnabled = true;
			this->type_wood_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Слабые породы", L"Породы средней крепости",
					L"Крепкие породы"
			});
			this->type_wood_comboBox->Location = System::Drawing::Point(13, 180);
			this->type_wood_comboBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->type_wood_comboBox->Name = L"type_wood_comboBox";
			this->type_wood_comboBox->Size = System::Drawing::Size(211, 33);
			this->type_wood_comboBox->TabIndex = 26;
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
			this->answer_textBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->answer_textBox->Multiline = true;
			this->answer_textBox->Name = L"answer_textBox";
			this->answer_textBox->ReadOnly = true;
			this->answer_textBox->Size = System::Drawing::Size(451, 274);
			this->answer_textBox->TabIndex = 25;
			// 
			// calc_button
			// 
			this->calc_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->calc_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->calc_button->ForeColor = System::Drawing::SystemColors::ControlText;
			this->calc_button->Location = System::Drawing::Point(249, 85);
			this->calc_button->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->calc_button->Name = L"calc_button";
			this->calc_button->Size = System::Drawing::Size(451, 36);
			this->calc_button->TabIndex = 24;
			this->calc_button->Text = L"Рассчитать";
			this->calc_button->UseVisualStyleBackColor = true;
			this->calc_button->Click += gcnew System::EventHandler(this, &WoodTwoBalk::calc_button_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label3->Location = System::Drawing::Point(10, 217);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(179, 20);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Состояние древесины";
			// 
			// condition_wood_comboBox
			// 
			this->condition_wood_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->condition_wood_comboBox->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->condition_wood_comboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->condition_wood_comboBox->FormattingEnabled = true;
			this->condition_wood_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Сухая", L"Влажная" });
			this->condition_wood_comboBox->Location = System::Drawing::Point(11, 235);
			this->condition_wood_comboBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->condition_wood_comboBox->Name = L"condition_wood_comboBox";
			this->condition_wood_comboBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->condition_wood_comboBox->Size = System::Drawing::Size(211, 33);
			this->condition_wood_comboBox->TabIndex = 22;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(17, 13);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(837, 58);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Расчет контактного заряда, необходимого для перебивания балок\r\nдвутаврового сечен"
				L"ия";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(13, 294);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(211, 335);
			this->pictureBox1->TabIndex = 28;
			this->pictureBox1->TabStop = false;
			// 
			// heightMas_textBox
			// 
			this->heightMas_textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(86)));
			this->heightMas_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->heightMas_textBox->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->heightMas_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->heightMas_textBox->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->heightMas_textBox->Location = System::Drawing::Point(44, 314);
			this->heightMas_textBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->heightMas_textBox->MaxLength = 4;
			this->heightMas_textBox->Name = L"heightMas_textBox";
			this->heightMas_textBox->Size = System::Drawing::Size(28, 24);
			this->heightMas_textBox->TabIndex = 29;
			this->heightMas_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label4->Location = System::Drawing::Point(70, 317);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 25);
			this->label4->TabIndex = 30;
			this->label4->Text = L"см";
			// 
			// heightWall_textBox
			// 
			this->heightWall_textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(86)));
			this->heightWall_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->heightWall_textBox->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->heightWall_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->heightWall_textBox->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->heightWall_textBox->Location = System::Drawing::Point(74, 375);
			this->heightWall_textBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->heightWall_textBox->MaxLength = 4;
			this->heightWall_textBox->Name = L"heightWall_textBox";
			this->heightWall_textBox->Size = System::Drawing::Size(28, 24);
			this->heightWall_textBox->TabIndex = 31;
			this->heightWall_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label5->Location = System::Drawing::Point(100, 378);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 25);
			this->label5->TabIndex = 32;
			this->label5->Text = L"см";
			// 
			// widthWall_textBox
			// 
			this->widthWall_textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(86)));
			this->widthWall_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->widthWall_textBox->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->widthWall_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->widthWall_textBox->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->widthWall_textBox->Location = System::Drawing::Point(48, 427);
			this->widthWall_textBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->widthWall_textBox->MaxLength = 4;
			this->widthWall_textBox->Name = L"widthWall_textBox";
			this->widthWall_textBox->Size = System::Drawing::Size(28, 24);
			this->widthWall_textBox->TabIndex = 33;
			this->widthWall_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label6->Location = System::Drawing::Point(74, 430);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 25);
			this->label6->TabIndex = 34;
			this->label6->Text = L"см";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label7->Location = System::Drawing::Point(10, 110);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(95, 20);
			this->label7->TabIndex = 36;
			this->label7->Text = L"Тип заряда";
			// 
			// type_charge_comboBox
			// 
			this->type_charge_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->type_charge_comboBox->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->type_charge_comboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->type_charge_comboBox->FormattingEnabled = true;
			this->type_charge_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Фигурный", L"Сосредоточенный" });
			this->type_charge_comboBox->Location = System::Drawing::Point(13, 128);
			this->type_charge_comboBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->type_charge_comboBox->Name = L"type_charge_comboBox";
			this->type_charge_comboBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->type_charge_comboBox->Size = System::Drawing::Size(211, 33);
			this->type_charge_comboBox->TabIndex = 35;
			this->type_charge_comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &WoodTwoBalk::type_charge_comboBox_SelectedIndexChanged);
			// 
			// widthMas_textBox
			// 
			this->widthMas_textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)));
			this->widthMas_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->widthMas_textBox->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->widthMas_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->widthMas_textBox->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->widthMas_textBox->Location = System::Drawing::Point(130, 314);
			this->widthMas_textBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->widthMas_textBox->MaxLength = 4;
			this->widthMas_textBox->Name = L"widthMas_textBox";
			this->widthMas_textBox->Size = System::Drawing::Size(28, 24);
			this->widthMas_textBox->TabIndex = 37;
			this->widthMas_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label8->Location = System::Drawing::Point(156, 317);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(38, 25);
			this->label8->TabIndex = 38;
			this->label8->Text = L"см";
			// 
			// underwater_checkBox
			// 
			this->underwater_checkBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->underwater_checkBox->AutoSize = true;
			this->underwater_checkBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->underwater_checkBox->Location = System::Drawing::Point(249, 421);
			this->underwater_checkBox->Name = L"underwater_checkBox";
			this->underwater_checkBox->Size = System::Drawing::Size(204, 29);
			this->underwater_checkBox->TabIndex = 39;
			this->underwater_checkBox->Text = L"Взрыв под водой";
			this->underwater_checkBox->UseVisualStyleBackColor = true;
			// 
			// btnTextVersion
			// 
			this->btnTextVersion->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnTextVersion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->btnTextVersion->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnTextVersion->Location = System::Drawing::Point(611, 34);
			this->btnTextVersion->Name = L"btnTextVersion";
			this->btnTextVersion->Size = System::Drawing::Size(89, 45);
			this->btnTextVersion->TabIndex = 40;
			this->btnTextVersion->Text = L"Текстовая версия";
			this->btnTextVersion->UseVisualStyleBackColor = true;
			this->btnTextVersion->Click += gcnew System::EventHandler(this, &WoodTwoBalk::btnTextVersion_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label9->Location = System::Drawing::Point(10, 57);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(127, 20);
			this->label9->TabIndex = 67;
			this->label9->Text = L"Расчет для ВВ:";
			// 
			// explosive_material_comboBox
			// 
			this->explosive_material_comboBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->explosive_material_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->explosive_material_comboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->explosive_material_comboBox->FormattingEnabled = true;
			this->explosive_material_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Тротил", L"Пластид - 4", L"Тетрил",
					L"Гексоген", L"ТЭН", L"ТНРС", L"Тритонал"
			});
			this->explosive_material_comboBox->Location = System::Drawing::Point(13, 74);
			this->explosive_material_comboBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->explosive_material_comboBox->Name = L"explosive_material_comboBox";
			this->explosive_material_comboBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->explosive_material_comboBox->Size = System::Drawing::Size(211, 33);
			this->explosive_material_comboBox->TabIndex = 66;
			// 
			// WoodTwoBalk
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Controls->Add(this->label9);
			this->Controls->Add(this->explosive_material_comboBox);
			this->Controls->Add(this->btnTextVersion);
			this->Controls->Add(this->underwater_checkBox);
			this->Controls->Add(this->widthMas_textBox);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->type_charge_comboBox);
			this->Controls->Add(this->widthWall_textBox);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->heightWall_textBox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->heightMas_textBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->type_wood_comboBox);
			this->Controls->Add(this->answer_textBox);
			this->Controls->Add(this->calc_button);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->condition_wood_comboBox);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Name = L"WoodTwoBalk";
			this->Size = System::Drawing::Size(719, 591);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void type_charge_comboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void calc_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnTextVersion_Click(System::Object^ sender, System::EventArgs^ e) {
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
	textBox1->Text = "Деревянные балки двутаврового сечения наиболее целесообразно подрывать фигурными зарядами.Вес каждой составной части фигурного заряда определяется по формуле: \r\n"+
		"C = KF, \r\n"+
		"где C - вес заряда в граммах; \r\n"+
		"K - коэффициент, зависящий от породы(крепости) и влажности древесины\r\n"+
		"F - площадь поперечного сечения бруса в квадратных сантиметрах. \r\n"+
		"Части фигурных зарядов, не примыкающие одна к другой вплотную, дол - , жны соединяться между собой соединительными шашками.Вес соединительных шашек не включается в расчетный вес заряда.Балка двутаврового сечения может быть подорвана такж е двумя отдельными сосредоточенными зарядами, располагаемыми в углах, образуемых верхним и нижним поясами с вертикальной стенкой.По весу каждый из - этих зарядов принимается вдвое большим по сравнению с зарядом, определенным по условию перебивания соответствующего пояса как отдельного бруса.";

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

};
}
