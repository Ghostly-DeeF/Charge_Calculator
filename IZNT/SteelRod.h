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
	private: System::Windows::Forms::Button^ btnTextVersion;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ explosive_material_comboBox;

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
			   this->btnTextVersion = (gcnew System::Windows::Forms::Button());
			   this->label9 = (gcnew System::Windows::Forms::Label());
			   this->explosive_material_comboBox = (gcnew System::Windows::Forms::ComboBox());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->SuspendLayout();
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
			   this->answer_textBox->TabIndex = 30;
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
			   this->calc_button->TabIndex = 29;
			   this->calc_button->Text = L"Рассчитать";
			   this->calc_button->UseVisualStyleBackColor = true;
			   this->calc_button->Click += gcnew System::EventHandler(this, &SteelRod::calc_button_Click);
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			   this->label4->Location = System::Drawing::Point(13, 135);
			   this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(181, 20);
			   this->label4->TabIndex = 28;
			   this->label4->Text = L"Диаметр стержня в см";
			   // 
			   // diameter_steel_rod_textBox
			   // 
			   this->diameter_steel_rod_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			   this->diameter_steel_rod_textBox->Location = System::Drawing::Point(16, 153);
			   this->diameter_steel_rod_textBox->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			   this->diameter_steel_rod_textBox->Name = L"diameter_steel_rod_textBox";
			   this->diameter_steel_rod_textBox->Size = System::Drawing::Size(211, 31);
			   this->diameter_steel_rod_textBox->TabIndex = 27;
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F, System::Drawing::FontStyle::Bold));
			   this->label1->Location = System::Drawing::Point(34, 21);
			   this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(759, 58);
			   this->label1->TabIndex = 26;
			   this->label1->Text = L"Расчет контактного заряда, необходимого для перебивания\r\nстального стержня\r\n";
			   this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			   // 
			   // checkUnderwaterExp
			   // 
			   this->checkUnderwaterExp->AutoSize = true;
			   this->checkUnderwaterExp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			   this->checkUnderwaterExp->Location = System::Drawing::Point(16, 199);
			   this->checkUnderwaterExp->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			   this->checkUnderwaterExp->Name = L"checkUnderwaterExp";
			   this->checkUnderwaterExp->Size = System::Drawing::Size(218, 29);
			   this->checkUnderwaterExp->TabIndex = 31;
			   this->checkUnderwaterExp->Text = L"Подрыв под водой";
			   this->checkUnderwaterExp->UseVisualStyleBackColor = true;
			   // 
			   // checkPlastit
			   // 
			   this->checkPlastit->AutoSize = true;
			   this->checkPlastit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			   this->checkPlastit->Location = System::Drawing::Point(16, 252);
			   this->checkPlastit->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			   this->checkPlastit->Name = L"checkPlastit";
			   this->checkPlastit->Size = System::Drawing::Size(239, 29);
			   this->checkPlastit->TabIndex = 32;
			   this->checkPlastit->Text = L"Заряд из пластита-4";
			   this->checkPlastit->UseVisualStyleBackColor = true;
			   this->checkPlastit->CheckedChanged += gcnew System::EventHandler(this, &SteelRod::checkPlastit_CheckedChanged);
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->pictureBox1->Location = System::Drawing::Point(249, 327);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(451, 251);
			   this->pictureBox1->TabIndex = 32;
			   this->pictureBox1->TabStop = false;
			   // 
			   // btnTextVersion
			   // 
			   this->btnTextVersion->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->btnTextVersion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			   this->btnTextVersion->ForeColor = System::Drawing::SystemColors::ControlText;
			   this->btnTextVersion->Location = System::Drawing::Point(611, 34);
			   this->btnTextVersion->Name = L"btnTextVersion";
			   this->btnTextVersion->Size = System::Drawing::Size(89, 45);
			   this->btnTextVersion->TabIndex = 33;
			   this->btnTextVersion->Text = L"Текстовая версия";
			   this->btnTextVersion->UseVisualStyleBackColor = true;
			   this->btnTextVersion->Click += gcnew System::EventHandler(this, &SteelRod::btnTextVersion_Click);
			   // 
			   // label9
			   // 
			   this->label9->AutoSize = true;
			   this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			   this->label9->Location = System::Drawing::Point(13, 71);
			   this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label9->Name = L"label9";
			   this->label9->Size = System::Drawing::Size(127, 20);
			   this->label9->TabIndex = 59;
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
			   this->explosive_material_comboBox->Location = System::Drawing::Point(16, 88);
			   this->explosive_material_comboBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			   this->explosive_material_comboBox->Name = L"explosive_material_comboBox";
			   this->explosive_material_comboBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			   this->explosive_material_comboBox->Size = System::Drawing::Size(211, 33);
			   this->explosive_material_comboBox->TabIndex = 58;
			   // 
			   // SteelRod
			   // 
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				   static_cast<System::Int32>(static_cast<System::Byte>(64)));
			   this->Controls->Add(this->label9);
			   this->Controls->Add(this->explosive_material_comboBox);
			   this->Controls->Add(this->btnTextVersion);
			   this->Controls->Add(this->checkPlastit);
			   this->Controls->Add(this->pictureBox1);
			   this->Controls->Add(this->checkUnderwaterExp);
			   this->Controls->Add(this->answer_textBox);
			   this->Controls->Add(this->calc_button);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->diameter_steel_rod_textBox);
			   this->Controls->Add(this->label1);
			   this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
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
	private: System::Void checkPlastit_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
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
	textBox1->Text = "Стальные стержни, прутья, бруски и т.п.подрываются сосредоточенными зарядами, масса которых в зависимости от толщины подрываемых элементов определяется по формулам :\r\nС = 20F; С = 10hF\r\nПеребивание стержней круглого сечения диаметром до 2 см включительно целесообразно производить зарядами из тротила массой 200 г(одна малая шашка) или зарядами из пластичного ВВ массой 100 г.\r\n"
		"Масса заряда для перебивания стержней диаметром более 2 см определяется по формуле : \r\n"
		"С = 10·D^3	   (5.8)\r\n"
		"где : С - масса заряда в граммах;"
		"D - диаметр стержня в сантиметрах. \r\n"

		"Примечания: \r\n"
		"1.	Заряд должен располагаться так, чтобы он перекрывал всю ширину(диаметр) стержня . \r\n"
		"2. Заряд должен иметь высоту не менее 2.5 толщины(диаметра) стержня . \r\n"
		"В случае применения пластита - 4 для перебивания стальных стержней заряды рассчитываются как заряды из тротиловых шашек, с уменьшением в два раза";

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
