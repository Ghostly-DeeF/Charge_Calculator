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
	/// ������ ��� WoodStump
	/// </summary>
	public ref class WoodStump : public System::Windows::Forms::UserControl
	{
	public:
		WoodStump(void)
		{
			InitializeComponent();
			pictureBox1->Image = Image::FromFile(".\\Picture\\img1Stump.bmp");
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~WoodStump()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		System::Windows::Forms::Label^ label2;
		float answer = 0.0f;
	protected:

	private: System::Windows::Forms::TextBox^ answer_textBox;
	private: System::Windows::Forms::Button^ calc_button;

	private: System::Windows::Forms::TextBox^ diameter_log_textBox;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnTextVersion;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ explosive_material_comboBox;


	protected:







	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->answer_textBox = (gcnew System::Windows::Forms::TextBox());
			this->calc_button = (gcnew System::Windows::Forms::Button());
			this->diameter_log_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
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
			this->label2->Location = System::Drawing::Point(13, 114);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(133, 16);
			this->label2->TabIndex = 41;
			this->label2->Text = L"������� D ��� � ��";
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
			this->answer_textBox->TabIndex = 39;
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
			this->calc_button->TabIndex = 38;
			this->calc_button->Text = L"����������";
			this->calc_button->UseVisualStyleBackColor = true;
			this->calc_button->Click += gcnew System::EventHandler(this, &WoodStump::calc_button_Click);
			// 
			// diameter_log_textBox
			// 
			this->diameter_log_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->diameter_log_textBox->Location = System::Drawing::Point(16, 132);
			this->diameter_log_textBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->diameter_log_textBox->Name = L"diameter_log_textBox";
			this->diameter_log_textBox->Size = System::Drawing::Size(211, 26);
			this->diameter_log_textBox->TabIndex = 36;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(15, 10);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(661, 22);
			this->label1->TabIndex = 33;
			this->label1->Text = L"������ ���������������� ������, ������������ ��� ���������� ���";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox1->Location = System::Drawing::Point(16, 373);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(684, 202);
			this->pictureBox1->TabIndex = 42;
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
			this->btnTextVersion->TabIndex = 43;
			this->btnTextVersion->Text = L"��������� ������";
			this->btnTextVersion->UseVisualStyleBackColor = true;
			this->btnTextVersion->Click += gcnew System::EventHandler(this, &WoodStump::btnTextVersion_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label9->Location = System::Drawing::Point(13, 61);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(104, 16);
			this->label9->TabIndex = 65;
			this->label9->Text = L"������ ��� ��:";
			// 
			// explosive_material_comboBox
			// 
			this->explosive_material_comboBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->explosive_material_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->explosive_material_comboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->explosive_material_comboBox->FormattingEnabled = true;
			this->explosive_material_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"������", L"������� - 4", L"�������" });
			this->explosive_material_comboBox->Location = System::Drawing::Point(16, 78);
			this->explosive_material_comboBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->explosive_material_comboBox->Name = L"explosive_material_comboBox";
			this->explosive_material_comboBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->explosive_material_comboBox->Size = System::Drawing::Size(211, 28);
			this->explosive_material_comboBox->TabIndex = 64;
			// 
			// WoodStump
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Controls->Add(this->label9);
			this->Controls->Add(this->explosive_material_comboBox);
			this->Controls->Add(this->btnTextVersion);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->answer_textBox);
			this->Controls->Add(this->calc_button);
			this->Controls->Add(this->diameter_log_textBox);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"WoodStump";
			this->Size = System::Drawing::Size(719, 591);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void calc_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnTextVersion_Click(System::Object^ sender, System::EventArgs^ e) {
	TextVersion^ form = gcnew TextVersion;

	System::Windows::Forms::TextBox^ textBox1 = (gcnew System::Windows::Forms::TextBox());



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
	textBox1->Text = "�������� ���� ������������ �������� ��������������� �������, ������������� � ����� ����� �������.��� ������, ������������ ��� ������������ ���, ������� �� ������ ������, �������� ���, �������� ������, ��������� ������ �  ��.�������������� �� ����� ���� ��������� �� ������� 10 - 15 � �� �� ������ ��������� �������� ��� � ����������� �����.�������� �� ����� ������� ��� ������ ������ ���� ������� �������� ��������. \r\n"+
		"����� ��� ���������� ������������� ��� �������� ��� �� ������� 1.0 - 1.5 ��� ��������.��� �������� ������ ��� ������ ����, ������ ��� ������� ��������� ���� ������������ �������� ������������ ��������, ������� ���������� �� ����� ��� �� ���� ����� �� �����.��� ������� ����������� ����� ����� ������ ��������� �������� � ����.������� ������� �����������.";

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
