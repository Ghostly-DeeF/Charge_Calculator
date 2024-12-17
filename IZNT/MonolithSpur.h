#pragma once

#include <cmath>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace IZNT {

	/// <summary>
	/// Сводка для MonolithSpur
	/// </summary>
	public ref class MonolithSpur : public System::Windows::Forms::UserControl
	{
	public:
		MonolithSpur(void)
		{
			InitializeComponent();
			pictureBox1->Image = Image::FromFile(".\\Picture\\img3Shurp.bmp");
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MonolithSpur()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		System::Windows::Forms::Label^ label1;
		float answer = 0.0f;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ thickness_textBox;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ type_material_comboBox;
	private: System::Windows::Forms::TextBox^ answer_textBox;
	private: System::Windows::Forms::Button^ calc_button;
	private: System::Windows::Forms::CheckBox^ underwater_checkBox;
	private: System::Windows::Forms::CheckBox^ ammonite_checkBox;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnTextVersion;


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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->thickness_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->type_material_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->answer_textBox = (gcnew System::Windows::Forms::TextBox());
			this->calc_button = (gcnew System::Windows::Forms::Button());
			this->underwater_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->ammonite_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnTextVersion = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 13.25F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(18, 21);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(534, 63);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Расчет шпурового заряда, необходимого\r\nдля перебивания кирпичных, каменных, бетон"
				L"ных и железобетонных\r\nконструкций типа колонн, столбов, балок и т. п.";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9.25F));
			this->label2->Location = System::Drawing::Point(13, 170);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(141, 15);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Толщина H объекта в метрах";
			// 
			// thickness_textBox
			// 
			this->thickness_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->thickness_textBox->Location = System::Drawing::Point(16, 188);
			this->thickness_textBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->thickness_textBox->Name = L"thickness_textBox";
			this->thickness_textBox->Size = System::Drawing::Size(211, 26);
			this->thickness_textBox->TabIndex = 20;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9.25F));
			this->label3->Location = System::Drawing::Point(13, 90);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 15);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Материал";
			// 
			// type_material_comboBox
			// 
			this->type_material_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->type_material_comboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->type_material_comboBox->FormattingEnabled = true;
			this->type_material_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Кирпичная кладка", L"Каменная кладка",
					L"Бетон", L"Железобетон"
			});
			this->type_material_comboBox->Location = System::Drawing::Point(16, 108);
			this->type_material_comboBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->type_material_comboBox->Name = L"type_material_comboBox";
			this->type_material_comboBox->Size = System::Drawing::Size(211, 28);
			this->type_material_comboBox->TabIndex = 22;
			// 
			// answer_textBox
			// 
			this->answer_textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->answer_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->answer_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->answer_textBox->ForeColor = System::Drawing::SystemColors::Window;
			this->answer_textBox->Location = System::Drawing::Point(249, 150);
			this->answer_textBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->answer_textBox->Multiline = true;
			this->answer_textBox->Name = L"answer_textBox";
			this->answer_textBox->ReadOnly = true;
			this->answer_textBox->Size = System::Drawing::Size(451, 205);
			this->answer_textBox->TabIndex = 25;
			// 
			// calc_button
			// 
			this->calc_button->BackColor = System::Drawing::Color::White;
			this->calc_button->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F));
			this->calc_button->ForeColor = System::Drawing::SystemColors::ControlText;
			this->calc_button->Location = System::Drawing::Point(249, 108);
			this->calc_button->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->calc_button->Name = L"calc_button";
			this->calc_button->Size = System::Drawing::Size(451, 36);
			this->calc_button->TabIndex = 24;
			this->calc_button->Text = L"Рассчитать";
			this->calc_button->UseVisualStyleBackColor = false;
			this->calc_button->Click += gcnew System::EventHandler(this, &MonolithSpur::calc_button_Click);
			// 
			// underwater_checkBox
			// 
			this->underwater_checkBox->AutoSize = true;
			this->underwater_checkBox->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12.25F));
			this->underwater_checkBox->Location = System::Drawing::Point(16, 266);
			this->underwater_checkBox->Name = L"underwater_checkBox";
			this->underwater_checkBox->Size = System::Drawing::Size(131, 23);
			this->underwater_checkBox->TabIndex = 35;
			this->underwater_checkBox->Text = L"Взрыв под водой";
			this->underwater_checkBox->UseVisualStyleBackColor = true;
			// 
			// ammonite_checkBox
			// 
			this->ammonite_checkBox->AutoSize = true;
			this->ammonite_checkBox->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12.25F));
			this->ammonite_checkBox->Location = System::Drawing::Point(16, 230);
			this->ammonite_checkBox->Name = L"ammonite_checkBox";
			this->ammonite_checkBox->Size = System::Drawing::Size(81, 23);
			this->ammonite_checkBox->TabIndex = 36;
			this->ammonite_checkBox->Text = L"Аммонит";
			this->ammonite_checkBox->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(249, 361);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(451, 210);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 37;
			this->pictureBox1->TabStop = false;
			// 
			// btnTextVersion
			// 
			this->btnTextVersion->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F));
			this->btnTextVersion->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnTextVersion->Location = System::Drawing::Point(629, 20);
			this->btnTextVersion->Name = L"btnTextVersion";
			this->btnTextVersion->Size = System::Drawing::Size(71, 43);
			this->btnTextVersion->TabIndex = 38;
			this->btnTextVersion->Text = L"Текстовая версия";
			this->btnTextVersion->UseVisualStyleBackColor = true;
			// 
			// MonolithSpur
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Controls->Add(this->btnTextVersion);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->ammonite_checkBox);
			this->Controls->Add(this->underwater_checkBox);
			this->Controls->Add(this->answer_textBox);
			this->Controls->Add(this->calc_button);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->type_material_comboBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->thickness_textBox);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 8.25F));
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"MonolithSpur";
			this->Size = System::Drawing::Size(719, 591);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void calc_button_Click(System::Object^ sender, System::EventArgs^ e);
};
}
