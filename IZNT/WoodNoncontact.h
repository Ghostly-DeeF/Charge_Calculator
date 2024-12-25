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
	/// Сводка для WoodNoncontact
	/// </summary>
	public ref class WoodNoncontact : public System::Windows::Forms::UserControl
	{
	public:
		WoodNoncontact(void)
		{
			InitializeComponent();
			pictureBox1->Image = Image::FromFile(".\\Picture\\img1WoodNonContact.bmp");
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~WoodNoncontact()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		System::Windows::Forms::CheckBox^ underwater_checkBox;
		float answer = 0.0f;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ type_wood_comboBox;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ distanse_textBox;

	private: System::Windows::Forms::TextBox^ answer_textBox;
	private: System::Windows::Forms::Button^ calc_button;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ diameter_log_textBox;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ condition_wood_comboBox;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
			this->underwater_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->type_wood_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->distanse_textBox = (gcnew System::Windows::Forms::TextBox());
			this->answer_textBox = (gcnew System::Windows::Forms::TextBox());
			this->calc_button = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->diameter_log_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->condition_wood_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnTextVersion = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->explosive_material_comboBox = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// underwater_checkBox
			// 
			this->underwater_checkBox->AutoSize = true;
			this->underwater_checkBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->underwater_checkBox->Location = System::Drawing::Point(14, 458);
			this->underwater_checkBox->Name = L"underwater_checkBox";
			this->underwater_checkBox->Size = System::Drawing::Size(175, 24);
			this->underwater_checkBox->TabIndex = 33;
			this->underwater_checkBox->Text = L"Взрыв под водой";
			this->underwater_checkBox->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label2->Location = System::Drawing::Point(11, 128);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(159, 16);
			this->label2->TabIndex = 32;
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
			this->type_wood_comboBox->Location = System::Drawing::Point(14, 146);
			this->type_wood_comboBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->type_wood_comboBox->Name = L"type_wood_comboBox";
			this->type_wood_comboBox->Size = System::Drawing::Size(211, 28);
			this->type_wood_comboBox->TabIndex = 31;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label5->Location = System::Drawing::Point(11, 354);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(221, 48);
			this->label5->TabIndex = 30;
			this->label5->Text = L"Расстояние r от центра заряда\r\nдо центра наиболее удаленного\r\nэлемента в метрах";
			// 
			// distanse_textBox
			// 
			this->distanse_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->distanse_textBox->Location = System::Drawing::Point(14, 402);
			this->distanse_textBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->distanse_textBox->Name = L"distanse_textBox";
			this->distanse_textBox->Size = System::Drawing::Size(211, 26);
			this->distanse_textBox->TabIndex = 29;
			this->distanse_textBox->TextChanged += gcnew System::EventHandler(this, &WoodNoncontact::distanse_textBox_TextChanged);
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
			this->answer_textBox->Size = System::Drawing::Size(451, 235);
			this->answer_textBox->TabIndex = 28;
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
			this->calc_button->TabIndex = 27;
			this->calc_button->Text = L"Рассчитать";
			this->calc_button->UseVisualStyleBackColor = true;
			this->calc_button->Click += gcnew System::EventHandler(this, &WoodNoncontact::calc_button_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label4->Location = System::Drawing::Point(11, 273);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(182, 32);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Диаметр D наиболее\r\nудаленного элемента в см";
			// 
			// diameter_log_textBox
			// 
			this->diameter_log_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->diameter_log_textBox->Location = System::Drawing::Point(14, 306);
			this->diameter_log_textBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->diameter_log_textBox->Name = L"diameter_log_textBox";
			this->diameter_log_textBox->Size = System::Drawing::Size(211, 26);
			this->diameter_log_textBox->TabIndex = 25;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label3->Location = System::Drawing::Point(11, 200);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(152, 16);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Состояние древесины";
			// 
			// condition_wood_comboBox
			// 
			this->condition_wood_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->condition_wood_comboBox->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->condition_wood_comboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->condition_wood_comboBox->FormattingEnabled = true;
			this->condition_wood_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Сухая", L"Влажная" });
			this->condition_wood_comboBox->Location = System::Drawing::Point(14, 217);
			this->condition_wood_comboBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->condition_wood_comboBox->Name = L"condition_wood_comboBox";
			this->condition_wood_comboBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->condition_wood_comboBox->Size = System::Drawing::Size(211, 28);
			this->condition_wood_comboBox->TabIndex = 23;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(18, 21);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(591, 44);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Расчет неконтактного заряда, необходимого для подрывания\r\nгрупп деревянных элемен"
				L"тов\r\n";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox1->Location = System::Drawing::Point(249, 373);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(451, 206);
			this->pictureBox1->TabIndex = 34;
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
			this->btnTextVersion->TabIndex = 35;
			this->btnTextVersion->Text = L"Текстовая версия";
			this->btnTextVersion->UseVisualStyleBackColor = true;
			this->btnTextVersion->Click += gcnew System::EventHandler(this, &WoodNoncontact::btnTextVersion_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label9->Location = System::Drawing::Point(12, 71);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(104, 16);
			this->label9->TabIndex = 63;
			this->label9->Text = L"Расчет для ВВ:";
			// 
			// explosive_material_comboBox
			// 
			this->explosive_material_comboBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->explosive_material_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->explosive_material_comboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->explosive_material_comboBox->FormattingEnabled = true;
			this->explosive_material_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Тротил", L"Пластид - 4", L"Аммонал" });
			this->explosive_material_comboBox->Location = System::Drawing::Point(15, 88);
			this->explosive_material_comboBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->explosive_material_comboBox->Name = L"explosive_material_comboBox";
			this->explosive_material_comboBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->explosive_material_comboBox->Size = System::Drawing::Size(211, 28);
			this->explosive_material_comboBox->TabIndex = 62;
			// 
			// WoodNoncontact
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
			this->Controls->Add(this->distanse_textBox);
			this->Controls->Add(this->answer_textBox);
			this->Controls->Add(this->calc_button);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->diameter_log_textBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->condition_wood_comboBox);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"WoodNoncontact";
			this->Size = System::Drawing::Size(719, 591);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void calc_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void distanse_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e);
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
	textBox1->Text = "Неконтактные заряды целесообразно применять для подрывания групп деревянных элементов, расположенных на некоторых расстояниях один от другого(рассредоточенные кусты свай, свайные опоры). \r\n"+
		"Вес неконтактного заряда, необходимого для перебивания любого деревянного элемента, определяется по формуле : \r\n"+
		"С = 30КDr^2, (5.3) \r\n"+
		"где С - вес заряда в килограммах, \r\n"+
		"К - коэффициент, зависящий от породы и влажности древесины, \r\n"+
		"D - диаметр(толщина)наиболее удаленного из подрываемых элементов в метрах, \r\n"+
		"r - расстояние от  центра заряда до оси наиболее удаленного элемента в метрах. \r\n"+
		"При подрывании деревянных элементов неконтактными зарядами под водой     вес зарядов, определенный по формуле(5.3) при величине К, соответствующей влажному состоянию древесины, уменьшается в два раза. Это правило справедливо только в тех случаях, когда глубина погружения заряда равна или больше половины расчетного расстояния r(расстояния от центра заряда до наиболее удаленного из подрываемых элементов).При меньшем заглублении зарядов их вес определяется по условиям подрывания деревянных элементов в воздухе";


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
