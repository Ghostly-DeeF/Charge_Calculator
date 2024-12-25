#pragma once
#include <corecrt_math.h>
#include "TextVersion.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace IZNT {

	/// <summary>
	/// Сводка для Balk1
	/// </summary>
	public ref class Balk1 : public System::Windows::Forms::UserControl
	{
	public:
		Balk1(void)
		{
			InitializeComponent();
			pictureBox1->Image = Image::FromFile(".\\Picture\\img1Balk.bmp");
		}
	private:
		System::Windows::Forms::CheckBox^ underwater_checkBox;
		float thickness_balk = 0.0f;
		float width_balk = 0.0f;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnTextVersion;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ explosive_material_comboBox;
		   float answer = 0.0f;
	public:
		
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Balk1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::TextBox^ answer_textBox;
	private: System::Windows::Forms::Button^ calc_button;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ width_balk_textBox;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ condition_wood_comboBox;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ thickness_balk_textBox;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ type_wood_comboBox;

	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->answer_textBox = (gcnew System::Windows::Forms::TextBox());
			this->calc_button = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->width_balk_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->condition_wood_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->thickness_balk_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->type_wood_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->underwater_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnTextVersion = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->explosive_material_comboBox = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(27, 21);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(576, 44);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Расчет контактного заряда, необходимого для перебивания\r\nбруса или плоского пакет"
				L"а свай\r\n";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
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
			this->answer_textBox->Size = System::Drawing::Size(451, 206);
			this->answer_textBox->TabIndex = 15;
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
			this->calc_button->TabIndex = 14;
			this->calc_button->Text = L"Рассчитать";
			this->calc_button->UseVisualStyleBackColor = true;
			this->calc_button->Click += gcnew System::EventHandler(this, &Balk1::calc_button_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label4->Location = System::Drawing::Point(9, 289);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(198, 16);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Ширина b бруса (пакета) в см";
			// 
			// width_balk_textBox
			// 
			this->width_balk_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->width_balk_textBox->Location = System::Drawing::Point(12, 307);
			this->width_balk_textBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->width_balk_textBox->Name = L"width_balk_textBox";
			this->width_balk_textBox->Size = System::Drawing::Size(211, 26);
			this->width_balk_textBox->TabIndex = 12;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label3->Location = System::Drawing::Point(9, 212);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(152, 16);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Состояние древесины";
			// 
			// condition_wood_comboBox
			// 
			this->condition_wood_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->condition_wood_comboBox->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->condition_wood_comboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->condition_wood_comboBox->FormattingEnabled = true;
			this->condition_wood_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Сухая", L"Влажная" });
			this->condition_wood_comboBox->Location = System::Drawing::Point(12, 229);
			this->condition_wood_comboBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->condition_wood_comboBox->Name = L"condition_wood_comboBox";
			this->condition_wood_comboBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->condition_wood_comboBox->Size = System::Drawing::Size(211, 28);
			this->condition_wood_comboBox->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label5->Location = System::Drawing::Point(12, 367);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(204, 16);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Толщина h бруса (пакета) в см";
			// 
			// thickness_balk_textBox
			// 
			this->thickness_balk_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->thickness_balk_textBox->Location = System::Drawing::Point(12, 385);
			this->thickness_balk_textBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->thickness_balk_textBox->Name = L"thickness_balk_textBox";
			this->thickness_balk_textBox->Size = System::Drawing::Size(211, 26);
			this->thickness_balk_textBox->TabIndex = 17;
			this->thickness_balk_textBox->TextChanged += gcnew System::EventHandler(this, &Balk1::thickness_balk_textBox_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label2->Location = System::Drawing::Point(9, 140);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(159, 16);
			this->label2->TabIndex = 20;
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
			this->type_wood_comboBox->Location = System::Drawing::Point(12, 158);
			this->type_wood_comboBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->type_wood_comboBox->Name = L"type_wood_comboBox";
			this->type_wood_comboBox->Size = System::Drawing::Size(211, 28);
			this->type_wood_comboBox->TabIndex = 19;
			// 
			// underwater_checkBox
			// 
			this->underwater_checkBox->AutoSize = true;
			this->underwater_checkBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->underwater_checkBox->Location = System::Drawing::Point(12, 428);
			this->underwater_checkBox->Name = L"underwater_checkBox";
			this->underwater_checkBox->Size = System::Drawing::Size(175, 24);
			this->underwater_checkBox->TabIndex = 21;
			this->underwater_checkBox->Text = L"Взрыв под водой";
			this->underwater_checkBox->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox1->Location = System::Drawing::Point(249, 344);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(451, 228);
			this->pictureBox1->TabIndex = 22;
			this->pictureBox1->TabStop = false;
			// 
			// btnTextVersion
			// 
			this->btnTextVersion->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnTextVersion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->btnTextVersion->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnTextVersion->Location = System::Drawing::Point(611, 38);
			this->btnTextVersion->Name = L"btnTextVersion";
			this->btnTextVersion->Size = System::Drawing::Size(89, 45);
			this->btnTextVersion->TabIndex = 23;
			this->btnTextVersion->Text = L"Текстовая версия";
			this->btnTextVersion->UseVisualStyleBackColor = true;
			this->btnTextVersion->Click += gcnew System::EventHandler(this, &Balk1::btnTextVersion_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label9->Location = System::Drawing::Point(9, 85);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(104, 16);
			this->label9->TabIndex = 59;
			this->label9->Text = L"Расчет для ВВ:";
			// 
			// explosive_material_comboBox
			// 
			this->explosive_material_comboBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->explosive_material_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->explosive_material_comboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->explosive_material_comboBox->FormattingEnabled = true;
			this->explosive_material_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Тротил", L"Пластид - 4", L"Аммонал" });
			this->explosive_material_comboBox->Location = System::Drawing::Point(12, 102);
			this->explosive_material_comboBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->explosive_material_comboBox->Name = L"explosive_material_comboBox";
			this->explosive_material_comboBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->explosive_material_comboBox->Size = System::Drawing::Size(211, 28);
			this->explosive_material_comboBox->TabIndex = 58;
			// 
			// Balk1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Controls->Add(this->label9);
			this->Controls->Add(this->explosive_material_comboBox);
			this->Controls->Add(this->btnTextVersion);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->underwater_checkBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->type_wood_comboBox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->thickness_balk_textBox);
			this->Controls->Add(this->answer_textBox);
			this->Controls->Add(this->calc_button);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->width_balk_textBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->condition_wood_comboBox);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"Balk1";
			this->Size = System::Drawing::Size(719, 591);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void calc_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void thickness_balk_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e);
	
private: System::Void btnTextVersion_Click(System::Object^ sender, System::EventArgs^ e);
};
}
