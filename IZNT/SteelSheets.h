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
	/// ������ ��� SteelSheets
	/// </summary>
	public ref class SteelSheets : public System::Windows::Forms::UserControl
	{
	public:
		SteelSheets(void);

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~SteelSheets()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ thickness_steel_sheets_textBox;



	protected:

	private: System::Windows::Forms::TextBox^ answer_textBox;
	private: System::Windows::Forms::Button^ calc_button;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ width_steel_sheets_textBox;










	private: System::Windows::Forms::ComboBox^ type_charge_comboBox;

	private: System::Windows::Forms::Label^ label2;








	private: System::Windows::Forms::RadioButton^ checkUnderwaterExp;
	private: System::Windows::Forms::RadioButton^ checkWoodenStop;
	private: System::Windows::Forms::RadioButton^ checkDemolitionSkin;
	private: System::Windows::Forms::RadioButton^ checkDemolitionSkinWater;
	private: System::Windows::Forms::CheckBox^ checkArm;
	private: System::Windows::Forms::RadioButton^ checkWater;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnTextVersion;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ explosive_material_comboBox;














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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->thickness_steel_sheets_textBox = (gcnew System::Windows::Forms::TextBox());
			this->answer_textBox = (gcnew System::Windows::Forms::TextBox());
			this->calc_button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->width_steel_sheets_textBox = (gcnew System::Windows::Forms::TextBox());
			this->type_charge_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkUnderwaterExp = (gcnew System::Windows::Forms::RadioButton());
			this->checkWoodenStop = (gcnew System::Windows::Forms::RadioButton());
			this->checkDemolitionSkin = (gcnew System::Windows::Forms::RadioButton());
			this->checkDemolitionSkinWater = (gcnew System::Windows::Forms::RadioButton());
			this->checkArm = (gcnew System::Windows::Forms::CheckBox());
			this->checkWater = (gcnew System::Windows::Forms::RadioButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnTextVersion = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->explosive_material_comboBox = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label5->Location = System::Drawing::Point(11, 123);
			this->label5->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(146, 16);
			this->label5->TabIndex = 23;
			this->label5->Text = L"������� h ����� � ��";
			// 
			// thickness_steel_sheets_textBox
			// 
			this->thickness_steel_sheets_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->thickness_steel_sheets_textBox->Location = System::Drawing::Point(14, 141);
			this->thickness_steel_sheets_textBox->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->thickness_steel_sheets_textBox->Name = L"thickness_steel_sheets_textBox";
			this->thickness_steel_sheets_textBox->Size = System::Drawing::Size(211, 26);
			this->thickness_steel_sheets_textBox->TabIndex = 22;
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
			this->answer_textBox->TabIndex = 21;
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
			this->calc_button->TabIndex = 20;
			this->calc_button->Text = L"����������";
			this->calc_button->UseVisualStyleBackColor = true;
			this->calc_button->Click += gcnew System::EventHandler(this, &SteelSheets::calc_button_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(33, 21);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(576, 66);
			this->label1->TabIndex = 19;
			this->label1->Text = L"������ ����������� ������, ������������ ��� �����������\r\n��������� �����\r\n\r\n";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label4->Location = System::Drawing::Point(11, 195);
			this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(142, 16);
			this->label4->TabIndex = 25;
			this->label4->Text = L"������ D ����� � ��";
			// 
			// width_steel_sheets_textBox
			// 
			this->width_steel_sheets_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->width_steel_sheets_textBox->Location = System::Drawing::Point(14, 212);
			this->width_steel_sheets_textBox->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->width_steel_sheets_textBox->Name = L"width_steel_sheets_textBox";
			this->width_steel_sheets_textBox->Size = System::Drawing::Size(211, 26);
			this->width_steel_sheets_textBox->TabIndex = 24;
			// 
			// type_charge_comboBox
			// 
			this->type_charge_comboBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->type_charge_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->type_charge_comboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->type_charge_comboBox->FormattingEnabled = true;
			this->type_charge_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"���������� �� �����", L"������������ ���������� ",
					L"������������ ���������������"
			});
			this->type_charge_comboBox->Location = System::Drawing::Point(14, 275);
			this->type_charge_comboBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->type_charge_comboBox->Name = L"type_charge_comboBox";
			this->type_charge_comboBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->type_charge_comboBox->Size = System::Drawing::Size(211, 28);
			this->type_charge_comboBox->TabIndex = 31;
			this->type_charge_comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &SteelSheets::type_charge_comboBox_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label2->Location = System::Drawing::Point(11, 257);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 16);
			this->label2->TabIndex = 33;
			this->label2->Text = L"��� ������";
			// 
			// checkUnderwaterExp
			// 
			this->checkUnderwaterExp->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->checkUnderwaterExp->AutoSize = true;
			this->checkUnderwaterExp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->checkUnderwaterExp->Location = System::Drawing::Point(14, 438);
			this->checkUnderwaterExp->Name = L"checkUnderwaterExp";
			this->checkUnderwaterExp->Size = System::Drawing::Size(309, 24);
			this->checkUnderwaterExp->TabIndex = 39;
			this->checkUnderwaterExp->TabStop = true;
			this->checkUnderwaterExp->Text = L"��� ����� (���� � ����� ������)";
			this->checkUnderwaterExp->UseVisualStyleBackColor = true;
			this->checkUnderwaterExp->CheckedChanged += gcnew System::EventHandler(this, &SteelSheets::checkUnderwaterExp_CheckedChanged);
			// 
			// checkWoodenStop
			// 
			this->checkWoodenStop->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->checkWoodenStop->AutoSize = true;
			this->checkWoodenStop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->checkWoodenStop->Location = System::Drawing::Point(15, 477);
			this->checkWoodenStop->Name = L"checkWoodenStop";
			this->checkWoodenStop->Size = System::Drawing::Size(289, 24);
			this->checkWoodenStop->TabIndex = 40;
			this->checkWoodenStop->TabStop = true;
			this->checkWoodenStop->Text = L"���� � ����� ������ � �������";
			this->checkWoodenStop->UseVisualStyleBackColor = true;
			this->checkWoodenStop->CheckedChanged += gcnew System::EventHandler(this, &SteelSheets::checkWoodenStop_CheckedChanged);
			// 
			// checkDemolitionSkin
			// 
			this->checkDemolitionSkin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->checkDemolitionSkin->AutoSize = true;
			this->checkDemolitionSkin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->checkDemolitionSkin->Location = System::Drawing::Point(15, 516);
			this->checkDemolitionSkin->Name = L"checkDemolitionSkin";
			this->checkDemolitionSkin->Size = System::Drawing::Size(237, 24);
			this->checkDemolitionSkin->TabIndex = 41;
			this->checkDemolitionSkin->TabStop = true;
			this->checkDemolitionSkin->Text = L"���� �� ������� ������";
			this->checkDemolitionSkin->UseVisualStyleBackColor = true;
			this->checkDemolitionSkin->CheckedChanged += gcnew System::EventHandler(this, &SteelSheets::checkDemolitionSkin_CheckedChanged);
			// 
			// checkDemolitionSkinWater
			// 
			this->checkDemolitionSkinWater->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->checkDemolitionSkinWater->AutoSize = true;
			this->checkDemolitionSkinWater->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->checkDemolitionSkinWater->Location = System::Drawing::Point(15, 555);
			this->checkDemolitionSkinWater->Name = L"checkDemolitionSkinWater";
			this->checkDemolitionSkinWater->Size = System::Drawing::Size(396, 24);
			this->checkDemolitionSkinWater->TabIndex = 42;
			this->checkDemolitionSkinWater->TabStop = true;
			this->checkDemolitionSkinWater->Text = L"���� �� �������, ��������������� ������";
			this->checkDemolitionSkinWater->UseVisualStyleBackColor = true;
			this->checkDemolitionSkinWater->CheckedChanged += gcnew System::EventHandler(this, &SteelSheets::checkDemolitionSkinWater_CheckedChanged);
			// 
			// checkArm
			// 
			this->checkArm->AutoSize = true;
			this->checkArm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->checkArm->Location = System::Drawing::Point(14, 314);
			this->checkArm->Name = L"checkArm";
			this->checkArm->Size = System::Drawing::Size(154, 24);
			this->checkArm->TabIndex = 43;
			this->checkArm->Text = L"�������� ����";
			this->checkArm->UseVisualStyleBackColor = true;
			// 
			// checkWater
			// 
			this->checkWater->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->checkWater->AutoSize = true;
			this->checkWater->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->checkWater->Location = System::Drawing::Point(14, 399);
			this->checkWater->Name = L"checkWater";
			this->checkWater->Size = System::Drawing::Size(112, 24);
			this->checkWater->TabIndex = 44;
			this->checkWater->TabStop = true;
			this->checkWater->Text = L"�� � ����";
			this->checkWater->UseVisualStyleBackColor = true;
			this->checkWater->CheckedChanged += gcnew System::EventHandler(this, &SteelSheets::checkWater_CheckedChanged);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(10, 355);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(165, 24);
			this->label3->TabIndex = 45;
			this->label3->Text = L"����� �������";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox1->Location = System::Drawing::Point(415, 327);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(285, 250);
			this->pictureBox1->TabIndex = 46;
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
			this->btnTextVersion->TabIndex = 47;
			this->btnTextVersion->Text = L"��������� ������";
			this->btnTextVersion->UseVisualStyleBackColor = true;
			this->btnTextVersion->Click += gcnew System::EventHandler(this, &SteelSheets::btnTextVersion_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label9->Location = System::Drawing::Point(12, 70);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(104, 16);
			this->label9->TabIndex = 57;
			this->label9->Text = L"������ ��� ��:";
			// 
			// explosive_material_comboBox
			// 
			this->explosive_material_comboBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->explosive_material_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->explosive_material_comboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->explosive_material_comboBox->FormattingEnabled = true;
			this->explosive_material_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"������", L"������� - 4", L"�������" });
			this->explosive_material_comboBox->Location = System::Drawing::Point(15, 87);
			this->explosive_material_comboBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->explosive_material_comboBox->Name = L"explosive_material_comboBox";
			this->explosive_material_comboBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->explosive_material_comboBox->Size = System::Drawing::Size(211, 28);
			this->explosive_material_comboBox->TabIndex = 56;
			this->explosive_material_comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &SteelSheets::explosive_material_comboBox_SelectedIndexChanged);
			// 
			// SteelSheets
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Controls->Add(this->label9);
			this->Controls->Add(this->explosive_material_comboBox);
			this->Controls->Add(this->btnTextVersion);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->checkWater);
			this->Controls->Add(this->checkArm);
			this->Controls->Add(this->checkDemolitionSkinWater);
			this->Controls->Add(this->checkDemolitionSkin);
			this->Controls->Add(this->checkWoodenStop);
			this->Controls->Add(this->checkUnderwaterExp);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->type_charge_comboBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->width_steel_sheets_textBox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->thickness_steel_sheets_textBox);
			this->Controls->Add(this->answer_textBox);
			this->Controls->Add(this->calc_button);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"SteelSheets";
			this->Size = System::Drawing::Size(719, 591);
			this->Load += gcnew System::EventHandler(this, &SteelSheets::SteelSheets_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void calc_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void SteelSheets_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void type_charge_comboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkWater_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkUnderwaterExp_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkWoodenStop_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkDemolitionSkin_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkDemolitionSkinWater_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
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
	textBox1->Text = "�������� ����� �����������(������������) ����������� ��������, �������������� ����� �� ���� ������.� ������ ���������� ������� � �������� ������ ������� ����������� ������ ����� ������ �����, ������ ��������� ����� ��������. \r\n" +
		"�) ���������� �������� ������ �������� �� 2 �����������. \r\n"
		"����� ������, ������������ ��� ����������� ����� ������������ �� ������� : \r\n"
		"� = 20F(5.4) \r\n"
		"��� : � - ����� ������ � �������; \r\n"
		"h - ��������� ������� ����� � �����������; \r\n"
		"F - ������� ����������� ������� ����� �� ��������� ����������� � ���������� �����������. \r\n"
		"�� ������� ����� - �� ������ ��������� ������� ����� - ���� ��� ����� ���������� �����. \r\n"
		"�) ���������� �������� ������ �������� ����� 2 ��. \r\n"
		"����� ������, ������������ ��� ����������� ����� ������������ �� ������� : \r\n"
		"� = 10hF  F(5.5) \r\n"
		"��� : � - ����� ������ � �������\r\n"
		"h - ��������� ������� ����� � ��\r\n"
		"F - ������� ����������� ������� ����� �� ��������� ����������� � ���������� �����������. \r\n"
		"�� ������� ����� : ���������� ����� ����� ����� ����� : \r\n"

		"���������� ������ ��� ����������� �������� ������ ����� ������������� � �� ����������� ��(�������� - 4).����� ������� �� �������� - 4 ������������ �� ��� �� �������� : \r\n"
		"� = 20F    � � = 10hF\r\n"
		"��� ����������� � ���������� �������� ������ �������� ����� 2 �� ������������� ��������� ������������ ���������� � ��������������� ������. \r\n"
		"����� ������������ ���������� ������� �� �������� - 4 ������������ �� �������"
		"� = 10hF, �� � ����������� � ��� ���� �.�. \r\n"

		"����� ��������������� ������������ ������� �� �������� - 4 ������������ �� ������� : \r\n"
		"� = 2.5h^3(5.6) \r\n"
		"��� :\r\n� - ����� ������ � �������\r\n"
		"h - ������� ����� � �����������\r\n"

		"�) ����������� � ���������� �������� ������. \r\n"
		"��� ����������� � ���������� �������� ������ ����� ��� ������������, ��� � �������������� ������������ �� �������� ������� ������� ��� ���������� ������� ������, �� � ����������� � ��� ����, �.�. \r\n"
		"� = 2�20F; � = 2�10hF; � = 2�2.5h^3  \r\n"


		"���������� �������� ��������� ��� �����. \r\n"
		"����� ���������� ������� ������� � 2 ���� ������� \r\n"

		"���������� �������� ������� ����� � �������� ��������� ���������������� ����������, ��������� ����� ������ �� ������� ���������� �������\r\n"
		"����� ���������� ������� ������� � 1,5 ���� ������ \r\n"

		"���������� �������� ������� ����� ��������, �������������� � ���������� ������� �����������(� �����). \r\n"
		"����� ���������� ������� ������� � 4 ���� ������ \r\n"

		"����������� �������� ������(�����, ����) ��� ����� ����� ���� ���������� ����������� �������� ��� ����������, ���� �� �������, ��������������� ������, � ������������ �������� ���������� ���������� ������, � ����� - ����� ����������������� �������. \r\n"
		"����� ���������� ������� ������� ��� ���������� \r\n"
		"������� ����������� ������(����� ����������������� ��������) ������ ���� �� ������ ������� ������. \r\n"
		"��� ����������� �������(����� 5 ��) ��������  � �������� ������ ��� ����� ������������� ��������� ������������ ���������� ������ � ���������, ����������� �� ���������� ����� . \r\n";


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
private: System::Void explosive_material_comboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
};
}
