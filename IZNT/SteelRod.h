#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace IZNT {

	/// <summary>
	/// Сводка для SteelRod
	/// </summary>
	public ref class SteelRod : public System::Windows::Forms::UserControl
	{
	public:
		SteelRod(void)
		{
			InitializeComponent();
			pictureBox1->Image = Image::FromFile(".\\Picture\\img2Rod.bmp");
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~SteelRod()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::TextBox^ answer_textBox;
	private: System::Windows::Forms::Button^ calc_button;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ diameter_steel_rod_textBox;
	private: System::Windows::Forms::Label^ label1;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;
	private: System::Windows::Forms::CheckBox^ checkPlastit;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::CheckBox^ checkUnderwaterExp;






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
			   this->diameter_steel_rod_textBox = (gcnew System::Windows::Forms::TextBox());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->checkUnderwaterExp = (gcnew System::Windows::Forms::CheckBox());
			   this->checkPlastit = (gcnew System::Windows::Forms::CheckBox());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
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
			   this->answer_textBox->TabIndex = 30;
			   // 
			   // calc_button
			   // 
			   this->calc_button->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F));
			   this->calc_button->ForeColor = System::Drawing::SystemColors::ControlText;
			   this->calc_button->Location = System::Drawing::Point(249, 85);
			   this->calc_button->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			   this->calc_button->Name = L"calc_button";
			   this->calc_button->Size = System::Drawing::Size(451, 36);
			   this->calc_button->TabIndex = 29;
			   this->calc_button->Text = L"Рассчитать";
			   this->calc_button->UseVisualStyleBackColor = true;
			   this->calc_button->Click += gcnew System::EventHandler(this, &SteelRod::calc_button_Click);
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9.25F));
			   this->label4->Location = System::Drawing::Point(13, 67);
			   this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(223, 22);
			   this->label4->TabIndex = 28;
			   this->label4->Text = L"Диаметр стержня в см";
			   // 
			   // diameter_steel_rod_textBox
			   // 
			   this->diameter_steel_rod_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			   this->diameter_steel_rod_textBox->Location = System::Drawing::Point(16, 85);
			   this->diameter_steel_rod_textBox->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			   this->diameter_steel_rod_textBox->Name = L"diameter_steel_rod_textBox";
			   this->diameter_steel_rod_textBox->Size = System::Drawing::Size(211, 35);
			   this->diameter_steel_rod_textBox->TabIndex = 27;
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 13.25F, System::Drawing::FontStyle::Bold));
			   this->label1->Location = System::Drawing::Point(58, 21);
			   this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(877, 64);
			   this->label1->TabIndex = 26;
			   this->label1->Text = L"Расчет контактного заряда, необходимого для перебивания\r\nстального стержня\r\n";
			   this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			   // 
			   // checkUnderwaterExp
			   // 
			   this->checkUnderwaterExp->AutoSize = true;
			   this->checkUnderwaterExp->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12.25F));
			   this->checkUnderwaterExp->Location = System::Drawing::Point(16, 131);
			   this->checkUnderwaterExp->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			   this->checkUnderwaterExp->Name = L"checkUnderwaterExp";
			   this->checkUnderwaterExp->Size = System::Drawing::Size(276, 33);
			   this->checkUnderwaterExp->TabIndex = 31;
			   this->checkUnderwaterExp->Text = L"Подрыв под водой";
			   this->checkUnderwaterExp->UseVisualStyleBackColor = true;
			   // 
			   // checkPlastit
			   // 
			   this->checkPlastit->AutoSize = true;
			   this->checkPlastit->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12.25F));
			   this->checkPlastit->Location = System::Drawing::Point(16, 184);
			   this->checkPlastit->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			   this->checkPlastit->Name = L"checkPlastit";
			   this->checkPlastit->Size = System::Drawing::Size(299, 33);
			   this->checkPlastit->TabIndex = 32;
			   this->checkPlastit->Text = L"Заряд из пластита-4";
			   this->checkPlastit->UseVisualStyleBackColor = true;
			   // pictureBox1
			   // 
			   this->pictureBox1->Location = System::Drawing::Point(249, 327);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(451, 251);
			   this->pictureBox1->TabIndex = 32;
			   this->pictureBox1->TabStop = false;
			   // 
			   // SteelRod
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				   static_cast<System::Int32>(static_cast<System::Byte>(64)));
			   this->Controls->Add(this->checkPlastit);
			   this->Controls->Add(this->pictureBox1);
			   this->Controls->Add(this->checkUnderwaterExp);
			   this->Controls->Add(this->answer_textBox);
			   this->Controls->Add(this->calc_button);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->diameter_steel_rod_textBox);
			   this->Controls->Add(this->label1);
			   this->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 8.25F));
			   this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			   this->Name = L"SteelRod";
			   this->Size = System::Drawing::Size(719, 591);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void calc_button_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
