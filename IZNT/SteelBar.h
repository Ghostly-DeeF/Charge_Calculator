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
	/// ������ ��� SteelBar
	/// </summary>
	public ref class SteelBar : public System::Windows::Forms::UserControl
	{
	public:
		SteelBar(void)
		{
			InitializeComponent();
			pictureBox1->Image = Image::FromFile(".\\Picture\\img1Bar.bmp");
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~SteelBar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^ checkUnderwaterExp;
	protected:
	private: System::Windows::Forms::TextBox^ answer_textBox;
	private: System::Windows::Forms::Button^ calc_button;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ width_steel_bar_textBox;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ thickness_steel_bar_textBox;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnTextVersion;


	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->checkUnderwaterExp = (gcnew System::Windows::Forms::CheckBox());
			this->answer_textBox = (gcnew System::Windows::Forms::TextBox());
			this->calc_button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->width_steel_bar_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->thickness_steel_bar_textBox = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnTextVersion = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// checkUnderwaterExp
			// 
			this->checkUnderwaterExp->AutoSize = true;
			this->checkUnderwaterExp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->checkUnderwaterExp->Location = System::Drawing::Point(16, 215);
			this->checkUnderwaterExp->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->checkUnderwaterExp->Name = L"checkUnderwaterExp";
			this->checkUnderwaterExp->Size = System::Drawing::Size(189, 24);
			this->checkUnderwaterExp->TabIndex = 37;
			this->checkUnderwaterExp->Text = L"������ ��� �����";
			this->checkUnderwaterExp->UseVisualStyleBackColor = true;
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
			this->answer_textBox->TabIndex = 36;
			// 
			// calc_button
			// 
			this->calc_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->calc_button->ForeColor = System::Drawing::SystemColors::ControlText;
			this->calc_button->Location = System::Drawing::Point(249, 85);
			this->calc_button->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->calc_button->Name = L"calc_button";
			this->calc_button->Size = System::Drawing::Size(451, 36);
			this->calc_button->TabIndex = 35;
			this->calc_button->Text = L"����������";
			this->calc_button->UseVisualStyleBackColor = true;
			this->calc_button->Click += gcnew System::EventHandler(this, &SteelBar::calc_button_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(32, 21);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(576, 44);
			this->label1->TabIndex = 32;
			this->label1->Text = L"������ ����������� ������, ������������ ��� �����������\r\n��������� ������\r\n";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label2->Location = System::Drawing::Point(13, 139);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(149, 16);
			this->label2->TabIndex = 41;
			this->label2->Text = L"������ B ������ � ��";
			// 
			// width_steel_bar_textBox
			// 
			this->width_steel_bar_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->width_steel_bar_textBox->Location = System::Drawing::Point(16, 157);
			this->width_steel_bar_textBox->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->width_steel_bar_textBox->Name = L"width_steel_bar_textBox";
			this->width_steel_bar_textBox->Size = System::Drawing::Size(211, 26);
			this->width_steel_bar_textBox->TabIndex = 40;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label5->Location = System::Drawing::Point(13, 67);
			this->label5->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(154, 16);
			this->label5->TabIndex = 39;
			this->label5->Text = L"������� h ������ � ��";
			// 
			// thickness_steel_bar_textBox
			// 
			this->thickness_steel_bar_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->thickness_steel_bar_textBox->Location = System::Drawing::Point(16, 85);
			this->thickness_steel_bar_textBox->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->thickness_steel_bar_textBox->Name = L"thickness_steel_bar_textBox";
			this->thickness_steel_bar_textBox->Size = System::Drawing::Size(211, 26);
			this->thickness_steel_bar_textBox->TabIndex = 38;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(249, 330);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(451, 251);
			this->pictureBox1->TabIndex = 42;
			this->pictureBox1->TabStop = false;
			// 
			// btnTextVersion
			// 
			this->btnTextVersion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->btnTextVersion->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnTextVersion->Location = System::Drawing::Point(611, 34);
			this->btnTextVersion->Name = L"btnTextVersion";
			this->btnTextVersion->Size = System::Drawing::Size(89, 45);
			this->btnTextVersion->TabIndex = 43;
			this->btnTextVersion->Text = L"��������� ������";
			this->btnTextVersion->UseVisualStyleBackColor = true;
			this->btnTextVersion->Click += gcnew System::EventHandler(this, &SteelBar::btnTextVersion_Click);
			// 
			// SteelBar
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Controls->Add(this->btnTextVersion);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->width_steel_bar_textBox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->thickness_steel_bar_textBox);
			this->Controls->Add(this->checkUnderwaterExp);
			this->Controls->Add(this->answer_textBox);
			this->Controls->Add(this->calc_button);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"SteelBar";
			this->Size = System::Drawing::Size(719, 591);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::Void calc_button_Click(System::Object^ sender, System::EventArgs^ e);
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
		textBox1->Text = "�������� ������ ����������� ���������������� ��������, ����� ������� � ����������� �� ������� ����������� ��������� ������������ �� �������� :"
			"� = 20�F ���� h <= 2��\r\n"
			"� = 10�h�F ���� h > 2�� \r\n";

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
