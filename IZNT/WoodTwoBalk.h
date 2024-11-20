#pragma once

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
		WoodTwoBalk(void)
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
		~WoodTwoBalk()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::ComboBox^ type_wood_comboBox;
	private: System::Windows::Forms::TextBox^ answer_textBox;
	private: System::Windows::Forms::Button^ calc_button;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ condition_wood_comboBox;
	private: System::Windows::Forms::Label^ label1;

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
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9.25F));
			this->label2->Location = System::Drawing::Point(13, 67);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(238, 22);
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
			this->type_wood_comboBox->Location = System::Drawing::Point(16, 85);
			this->type_wood_comboBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->type_wood_comboBox->Name = L"type_wood_comboBox";
			this->type_wood_comboBox->Size = System::Drawing::Size(211, 37);
			this->type_wood_comboBox->TabIndex = 26;
			// 
			// answer_textBox
			// 
			this->answer_textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->answer_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->answer_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->answer_textBox->ForeColor = System::Drawing::SystemColors::Window;
			this->answer_textBox->Location = System::Drawing::Point(364, 132);
			this->answer_textBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->answer_textBox->Multiline = true;
			this->answer_textBox->Name = L"answer_textBox";
			this->answer_textBox->Size = System::Drawing::Size(336, 206);
			this->answer_textBox->TabIndex = 25;
			// 
			// calc_button
			// 
			this->calc_button->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F));
			this->calc_button->ForeColor = System::Drawing::SystemColors::ControlText;
			this->calc_button->Location = System::Drawing::Point(364, 85);
			this->calc_button->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->calc_button->Name = L"calc_button";
			this->calc_button->Size = System::Drawing::Size(336, 36);
			this->calc_button->TabIndex = 24;
			this->calc_button->Text = L"Рассчитать";
			this->calc_button->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9.25F));
			this->label3->Location = System::Drawing::Point(13, 139);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(222, 22);
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
			this->condition_wood_comboBox->Location = System::Drawing::Point(16, 156);
			this->condition_wood_comboBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->condition_wood_comboBox->Name = L"condition_wood_comboBox";
			this->condition_wood_comboBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->condition_wood_comboBox->Size = System::Drawing::Size(211, 37);
			this->condition_wood_comboBox->TabIndex = 22;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 13.25F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(23, 21);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(969, 64);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Расчет контактного заряда, необходимого для перебивания балок\r\nдвутаврового сечен"
				L"ия";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// WoodTwoBalk
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Controls->Add(this->label2);
			this->Controls->Add(this->type_wood_comboBox);
			this->Controls->Add(this->answer_textBox);
			this->Controls->Add(this->calc_button);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->condition_wood_comboBox);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 8.25F));
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Name = L"WoodTwoBalk";
			this->Size = System::Drawing::Size(719, 591);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
