#pragma once

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
			//
			//TODO: добавьте код конструктора
			//
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



	private: System::Windows::Forms::RadioButton^ checkUnderwaterExp;
	private: System::Windows::Forms::RadioButton^ checkUnderwaterExp1;
	private: System::Windows::Forms::Label^ label2;


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
			   this->checkUnderwaterExp = (gcnew System::Windows::Forms::RadioButton());
			   this->checkUnderwaterExp1 = (gcnew System::Windows::Forms::RadioButton());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->SuspendLayout();
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9.25F));
			   this->label5->Location = System::Drawing::Point(13, 139);
			   this->label5->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(205, 22);
			   this->label5->TabIndex = 25;
			   this->label5->Text = L"Толщина трубы в см";
			   // 
			   // thickness_steel_tube_textBox
			   // 
			   this->thickness_steel_tube_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			   this->thickness_steel_tube_textBox->Location = System::Drawing::Point(16, 156);
			   this->thickness_steel_tube_textBox->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			   this->thickness_steel_tube_textBox->Name = L"thickness_steel_tube_textBox";
			   this->thickness_steel_tube_textBox->Size = System::Drawing::Size(211, 35);
			   this->thickness_steel_tube_textBox->TabIndex = 24;
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
			   this->answer_textBox->TabIndex = 23;
			   // 
			   // calc_button
			   // 
			   this->calc_button->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F));
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
			   this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9.25F));
			   this->label4->Location = System::Drawing::Point(13, 67);
			   this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(201, 22);
			   this->label4->TabIndex = 21;
			   this->label4->Text = L"Диаметр трубы в см";
			   // 
			   // diameter_steel_tube_textBox
			   // 
			   this->diameter_steel_tube_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			   this->diameter_steel_tube_textBox->Location = System::Drawing::Point(16, 85);
			   this->diameter_steel_tube_textBox->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			   this->diameter_steel_tube_textBox->Name = L"diameter_steel_tube_textBox";
			   this->diameter_steel_tube_textBox->Size = System::Drawing::Size(211, 35);
			   this->diameter_steel_tube_textBox->TabIndex = 20;
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 13.25F, System::Drawing::FontStyle::Bold));
			   this->label1->Location = System::Drawing::Point(58, 21);
			   this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(877, 96);
			   this->label1->TabIndex = 19;
			   this->label1->Text = L"Расчет контактного заряда, необходимого для перебивания\r\nстальной трубы\r\n\r\n";
			   this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			   // 
			   // checkUnderwaterExp
			   // 
			   this->checkUnderwaterExp->AutoSize = true;
			   this->checkUnderwaterExp->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12.25F));
			   this->checkUnderwaterExp->Location = System::Drawing::Point(16, 288);
			   this->checkUnderwaterExp->Name = L"checkUnderwaterExp";
			   this->checkUnderwaterExp->Size = System::Drawing::Size(294, 33);
			   this->checkUnderwaterExp->TabIndex = 32;
			   this->checkUnderwaterExp->TabStop = true;
			   this->checkUnderwaterExp->Text = L"Не заполнена водой";
			   this->checkUnderwaterExp->UseVisualStyleBackColor = true;
			   // 
			   // checkUnderwaterExp1
			   // 
			   this->checkUnderwaterExp1->AutoSize = true;
			   this->checkUnderwaterExp1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12.25F));
			   this->checkUnderwaterExp1->Location = System::Drawing::Point(16, 337);
			   this->checkUnderwaterExp1->Name = L"checkUnderwaterExp1";
			   this->checkUnderwaterExp1->Size = System::Drawing::Size(256, 33);
			   this->checkUnderwaterExp1->TabIndex = 33;
			   this->checkUnderwaterExp1->TabStop = true;
			   this->checkUnderwaterExp1->Text = L"Заполнена водой";
			   this->checkUnderwaterExp1->UseVisualStyleBackColor = true;
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12.25F, System::Drawing::FontStyle::Bold));
			   this->label2->Location = System::Drawing::Point(11, 212);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(218, 58);
			   this->label2->TabIndex = 34;
			   this->label2->Text = L"Подрыв трубы \r\nпод водой";
			   // 
			   // SteelTube
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				   static_cast<System::Int32>(static_cast<System::Byte>(64)));
			   this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->checkUnderwaterExp1);
			   this->Controls->Add(this->checkUnderwaterExp);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->thickness_steel_tube_textBox);
			   this->Controls->Add(this->answer_textBox);
			   this->Controls->Add(this->calc_button);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->diameter_steel_tube_textBox);
			   this->Controls->Add(this->label1);
			   this->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 8.25F));
			   this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			   this->Name = L"SteelTube";
			   this->Size = System::Drawing::Size(719, 591);
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void calc_button_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
