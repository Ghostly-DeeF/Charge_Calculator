#pragma once

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
		SteelCable(void)
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
			   this->SuspendLayout();
			   // 
			   // answer_textBox
			   // 
			   this->answer_textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				   static_cast<System::Int32>(static_cast<System::Byte>(80)));
			   this->answer_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->answer_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			   this->answer_textBox->ForeColor = System::Drawing::SystemColors::Window;
			   this->answer_textBox->Location = System::Drawing::Point(250, 173);
			   this->answer_textBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			   this->answer_textBox->Multiline = true;
			   this->answer_textBox->Name = L"answer_textBox";
			   this->answer_textBox->Size = System::Drawing::Size(451, 206);
			   this->answer_textBox->TabIndex = 35;
			   // 
			   // calc_button
			   // 
			   this->calc_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			   this->calc_button->ForeColor = System::Drawing::SystemColors::ControlText;
			   this->calc_button->Location = System::Drawing::Point(250, 121);
			   this->calc_button->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
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
			   this->label4->Location = System::Drawing::Point(6, 97);
			   this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(161, 20);
			   this->label4->TabIndex = 33;
			   this->label4->Text = L"Диаметр троса в см";
			   // 
			   // diameter_steel_cable_textBox
			   // 
			   this->diameter_steel_cable_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			   this->diameter_steel_cable_textBox->Location = System::Drawing::Point(10, 122);
			   this->diameter_steel_cable_textBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			   this->diameter_steel_cable_textBox->Name = L"diameter_steel_cable_textBox";
			   this->diameter_steel_cable_textBox->Size = System::Drawing::Size(211, 31);
			   this->diameter_steel_cable_textBox->TabIndex = 32;
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F, System::Drawing::FontStyle::Bold));
			   this->label1->Location = System::Drawing::Point(59, 11);
			   this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(759, 87);
			   this->label1->TabIndex = 31;
			   this->label1->Text = L"Расчет контактного заряда, необходимого для перебивания\r\nстального троса\r\n\r\n";
			   this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			   // 
			   // checkBox_Steel_Cable
			   // 
			   this->checkBox_Steel_Cable->AutoSize = true;
			   this->checkBox_Steel_Cable->Location = System::Drawing::Point(10, 193);
			   this->checkBox_Steel_Cable->Name = L"checkBox_Steel_Cable";
			   this->checkBox_Steel_Cable->Size = System::Drawing::Size(144, 21);
			   this->checkBox_Steel_Cable->TabIndex = 36;
			   this->checkBox_Steel_Cable->Text = L"Кольцевой заряд";
			   this->checkBox_Steel_Cable->UseVisualStyleBackColor = true;
			   // 
			   // checkUnderwaterExp
			   // 
			   this->checkUnderwaterExp->AutoSize = true;
			   this->checkUnderwaterExp->Location = System::Drawing::Point(10, 237);
			   this->checkUnderwaterExp->Name = L"checkUnderwaterExp";
			   this->checkUnderwaterExp->Size = System::Drawing::Size(152, 21);
			   this->checkUnderwaterExp->TabIndex = 37;
			   this->checkUnderwaterExp->Text = L"Подрыв под водой";
			   this->checkUnderwaterExp->UseVisualStyleBackColor = true;
			   // 
			   // SteelCable
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				   static_cast<System::Int32>(static_cast<System::Byte>(64)));
			   this->Controls->Add(this->checkUnderwaterExp);
			   this->Controls->Add(this->checkBox_Steel_Cable);
			   this->Controls->Add(this->answer_textBox);
			   this->Controls->Add(this->calc_button);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->diameter_steel_cable_textBox);
			   this->Controls->Add(this->label1);
			   this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			   this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->Name = L"SteelCable";
			   this->Size = System::Drawing::Size(719, 591);
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void calc_button_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
