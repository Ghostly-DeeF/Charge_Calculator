#pragma once

#include <cmath>
#include "TextVersion.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace IZNT {

	/// <summary>
	/// ������ ��� MonolithNoncontact
	/// </summary>
	public ref class MonolithNoncontact : public System::Windows::Forms::UserControl
	{
	public:
		MonolithNoncontact(void);

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MonolithNoncontact()
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
	private: System::Windows::Forms::Label^ type_brick_lable;
	private: System::Windows::Forms::ComboBox^ type_brickwork_comboBox;
	private: System::Windows::Forms::TextBox^ answer_textBox;
	private: System::Windows::Forms::Button^ calc_button;
	private: System::Windows::Forms::Label^ radius_label;
	private: System::Windows::Forms::TextBox^ thikness_textBox;

	private: System::Windows::Forms::Label^ second_label;
	private: System::Windows::Forms::ComboBox^ second_comboBox;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ type_material_comboBox;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ radius_textBox;
	private: System::Windows::Forms::CheckBox^ hole_checkBox;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnTextVersion;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ explosive_material_comboBox;



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
			this->underwater_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->type_brick_lable = (gcnew System::Windows::Forms::Label());
			this->type_brickwork_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->answer_textBox = (gcnew System::Windows::Forms::TextBox());
			this->calc_button = (gcnew System::Windows::Forms::Button());
			this->radius_label = (gcnew System::Windows::Forms::Label());
			this->thikness_textBox = (gcnew System::Windows::Forms::TextBox());
			this->second_label = (gcnew System::Windows::Forms::Label());
			this->second_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->type_material_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->radius_textBox = (gcnew System::Windows::Forms::TextBox());
			this->hole_checkBox = (gcnew System::Windows::Forms::CheckBox());
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
			this->underwater_checkBox->Location = System::Drawing::Point(16, 548);
			this->underwater_checkBox->Name = L"underwater_checkBox";
			this->underwater_checkBox->Size = System::Drawing::Size(175, 24);
			this->underwater_checkBox->TabIndex = 46;
			this->underwater_checkBox->Text = L"����� ��� �����";
			this->underwater_checkBox->UseVisualStyleBackColor = true;
			// 
			// type_brick_lable
			// 
			this->type_brick_lable->AutoSize = true;
			this->type_brick_lable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->type_brick_lable->Location = System::Drawing::Point(13, 430);
			this->type_brick_lable->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->type_brick_lable->Name = L"type_brick_lable";
			this->type_brick_lable->Size = System::Drawing::Size(81, 16);
			this->type_brick_lable->TabIndex = 45;
			this->type_brick_lable->Text = L"��� ������";
			this->type_brick_lable->Visible = false;
			// 
			// type_brickwork_comboBox
			// 
			this->type_brickwork_comboBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->type_brickwork_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->type_brickwork_comboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->type_brickwork_comboBox->FormattingEnabled = true;
			this->type_brickwork_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"������", L"�������" });
			this->type_brickwork_comboBox->Location = System::Drawing::Point(16, 448);
			this->type_brickwork_comboBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->type_brickwork_comboBox->Name = L"type_brickwork_comboBox";
			this->type_brickwork_comboBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->type_brickwork_comboBox->Size = System::Drawing::Size(211, 28);
			this->type_brickwork_comboBox->TabIndex = 44;
			this->type_brickwork_comboBox->Visible = false;
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
			this->answer_textBox->Location = System::Drawing::Point(249, 150);
			this->answer_textBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->answer_textBox->Multiline = true;
			this->answer_textBox->Name = L"answer_textBox";
			this->answer_textBox->ReadOnly = true;
			this->answer_textBox->Size = System::Drawing::Size(451, 205);
			this->answer_textBox->TabIndex = 43;
			// 
			// calc_button
			// 
			this->calc_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->calc_button->BackColor = System::Drawing::Color::White;
			this->calc_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->calc_button->ForeColor = System::Drawing::SystemColors::ControlText;
			this->calc_button->Location = System::Drawing::Point(249, 108);
			this->calc_button->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->calc_button->Name = L"calc_button";
			this->calc_button->Size = System::Drawing::Size(451, 36);
			this->calc_button->TabIndex = 42;
			this->calc_button->Text = L"����������";
			this->calc_button->UseVisualStyleBackColor = false;
			this->calc_button->Click += gcnew System::EventHandler(this, &MonolithNoncontact::calc_button_Click);
			// 
			// radius_label
			// 
			this->radius_label->AutoSize = true;
			this->radius_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->radius_label->Location = System::Drawing::Point(13, 150);
			this->radius_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->radius_label->Name = L"radius_label";
			this->radius_label->Size = System::Drawing::Size(196, 16);
			this->radius_label->TabIndex = 41;
			this->radius_label->Text = L"������� H ������� � ������";
			// 
			// thikness_textBox
			// 
			this->thikness_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->thikness_textBox->Location = System::Drawing::Point(16, 168);
			this->thikness_textBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->thikness_textBox->Name = L"thikness_textBox";
			this->thikness_textBox->Size = System::Drawing::Size(211, 26);
			this->thikness_textBox->TabIndex = 40;
			// 
			// second_label
			// 
			this->second_label->AutoSize = true;
			this->second_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->second_label->Location = System::Drawing::Point(13, 360);
			this->second_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->second_label->Name = L"second_label";
			this->second_label->Size = System::Drawing::Size(97, 16);
			this->second_label->TabIndex = 39;
			this->second_label->Text = L"��� ��������";
			this->second_label->Visible = false;
			// 
			// second_comboBox
			// 
			this->second_comboBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->second_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->second_comboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->second_comboBox->FormattingEnabled = true;
			this->second_comboBox->Location = System::Drawing::Point(16, 378);
			this->second_comboBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->second_comboBox->Name = L"second_comboBox";
			this->second_comboBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->second_comboBox->Size = System::Drawing::Size(211, 28);
			this->second_comboBox->TabIndex = 38;
			this->second_comboBox->Visible = false;
			this->second_comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MonolithNoncontact::second_comboBox_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label2->Location = System::Drawing::Point(13, 290);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(181, 16);
			this->label2->TabIndex = 37;
			this->label2->Text = L"������������ ���������";
			// 
			// type_material_comboBox
			// 
			this->type_material_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->type_material_comboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->type_material_comboBox->FormattingEnabled = true;
			this->type_material_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"��������� ������", L"�������� ������",
					L"�����", L"�����������"
			});
			this->type_material_comboBox->Location = System::Drawing::Point(16, 308);
			this->type_material_comboBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->type_material_comboBox->Name = L"type_material_comboBox";
			this->type_material_comboBox->Size = System::Drawing::Size(211, 28);
			this->type_material_comboBox->TabIndex = 36;
			this->type_material_comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MonolithNoncontact::type_material_comboBox_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(18, 14);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(661, 66);
			this->label1->TabIndex = 35;
			this->label1->Text = L"������ ����������� ������, ������������\r\n��� ����������� ���������, ��������, ���"
				L"����� � ��������������\r\n����������� ���� ������, �������, ����� � �. �.";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label3->Location = System::Drawing::Point(13, 207);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(208, 32);
			this->label3->TabIndex = 48;
			this->label3->Text = L"��������� R �� ������ ������\r\n�� ��� ������� � ������";
			// 
			// radius_textBox
			// 
			this->radius_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->radius_textBox->Location = System::Drawing::Point(16, 238);
			this->radius_textBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->radius_textBox->Name = L"radius_textBox";
			this->radius_textBox->Size = System::Drawing::Size(211, 26);
			this->radius_textBox->TabIndex = 47;
			this->radius_textBox->TextChanged += gcnew System::EventHandler(this, &MonolithNoncontact::radius_textBox_TextChanged);
			// 
			// hole_checkBox
			// 
			this->hole_checkBox->AutoSize = true;
			this->hole_checkBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->hole_checkBox->Location = System::Drawing::Point(16, 518);
			this->hole_checkBox->Name = L"hole_checkBox";
			this->hole_checkBox->Size = System::Drawing::Size(202, 24);
			this->hole_checkBox->TabIndex = 49;
			this->hole_checkBox->Text = L"�������� ���������";
			this->hole_checkBox->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox1->Location = System::Drawing::Point(249, 362);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(451, 202);
			this->pictureBox1->TabIndex = 50;
			this->pictureBox1->TabStop = false;
			// 
			// btnTextVersion
			// 
			this->btnTextVersion->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnTextVersion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->btnTextVersion->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnTextVersion->Location = System::Drawing::Point(611, 57);
			this->btnTextVersion->Name = L"btnTextVersion";
			this->btnTextVersion->Size = System::Drawing::Size(89, 45);
			this->btnTextVersion->TabIndex = 51;
			this->btnTextVersion->Text = L"��������� ������";
			this->btnTextVersion->UseVisualStyleBackColor = true;
			this->btnTextVersion->Click += gcnew System::EventHandler(this, &MonolithNoncontact::btnTextVersion_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label9->Location = System::Drawing::Point(13, 91);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(104, 16);
			this->label9->TabIndex = 61;
			this->label9->Text = L"������ ��� ��:";
			// 
			// explosive_material_comboBox
			// 
			this->explosive_material_comboBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->explosive_material_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->explosive_material_comboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->explosive_material_comboBox->FormattingEnabled = true;
			this->explosive_material_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"������", L"������� - 4", L"�������" });
			this->explosive_material_comboBox->Location = System::Drawing::Point(16, 108);
			this->explosive_material_comboBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->explosive_material_comboBox->Name = L"explosive_material_comboBox";
			this->explosive_material_comboBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->explosive_material_comboBox->Size = System::Drawing::Size(211, 28);
			this->explosive_material_comboBox->TabIndex = 60;
			// 
			// MonolithNoncontact
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Controls->Add(this->label9);
			this->Controls->Add(this->explosive_material_comboBox);
			this->Controls->Add(this->btnTextVersion);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->hole_checkBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->radius_textBox);
			this->Controls->Add(this->underwater_checkBox);
			this->Controls->Add(this->type_brick_lable);
			this->Controls->Add(this->type_brickwork_comboBox);
			this->Controls->Add(this->answer_textBox);
			this->Controls->Add(this->calc_button);
			this->Controls->Add(this->radius_label);
			this->Controls->Add(this->thikness_textBox);
			this->Controls->Add(this->second_label);
			this->Controls->Add(this->second_comboBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->type_material_comboBox);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"MonolithNoncontact";
			this->Size = System::Drawing::Size(719, 591);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void calc_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void radius_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void type_material_comboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void second_comboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
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
	pictureBox1->Image = Image::FromFile(".\\Picture\\Screenshot 2024-12-17 214216.png");//(cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
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
	textBox1->Text = "������������ ������ ��� ���������� ���������, ��������, �������� � �������������� ������(�������) � ����� �������������� �� ������� :"
		"C = 10 Ahr^2 (29) \r\n"
		"��� � � ��� ������ � �����������; \r\n"
		"� � �����������, ��������� �� ������� ������������ ��������� � ������������ �� \r\n"
		"h � ������� ������������ �������� � ������; \r\n"
		"r � ���������� ����� ������� ������ � ���� ������������ �������� � ������. \r\n"

		"������������ ������ ��� ���������� ��������� � ������ � ������ �� �������, ����� � ��������������� ������ �������������� �� �������(29) � ����������� � ��� ����."

		"��� ���������� ����������� �� �������, ������ ������ ��� ����� ����������� �������� ��� ���������, ������������ �� ��. 147 � 148 ��� ���������.���������� ������ ��� ���������� ��� ����� �������������� ��������� - �������������� �� ��������� ��� �� ������, �� � ����������� � ������� ����.��� ���� ������ ��������� ���������� ���������� �� ������� �� ���������� � ����.������������ ������ ��� ���������� ��� ����� ����������� �� �������, �����, ������ � ������������ �������������� �� �������(29) � ����������� � ������� ����, ���� ������� ���������� ������� ���������� �� ����� �������� ���������� ���������� (���������� �� ������ ������ �� ��� ������������ ��������) .";

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
