#pragma once

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
		SteelSheets(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

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
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9.25F));
			this->label5->Location = System::Drawing::Point(13, 67);
			this->label5->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(202, 22);
			this->label5->TabIndex = 23;
			this->label5->Text = L"������� ����� � ��";
			// 
			// thickness_steel_sheets_textBox
			// 
			this->thickness_steel_sheets_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->thickness_steel_sheets_textBox->Location = System::Drawing::Point(16, 85);
			this->thickness_steel_sheets_textBox->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->thickness_steel_sheets_textBox->Name = L"thickness_steel_sheets_textBox";
			this->thickness_steel_sheets_textBox->Size = System::Drawing::Size(211, 35);
			this->thickness_steel_sheets_textBox->TabIndex = 22;
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
			this->answer_textBox->TabIndex = 21;
			// 
			// calc_button
			// 
			this->calc_button->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F));
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
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 13.25F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(58, 21);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(877, 96);
			this->label1->TabIndex = 19;
			this->label1->Text = L"������ ����������� ������, ������������ ��� �����������\r\n��������� �����\r\n\r\n";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9.25F));
			this->label4->Location = System::Drawing::Point(13, 139);
			this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(192, 22);
			this->label4->TabIndex = 25;
			this->label4->Text = L"������ ����� � ��";
			// 
			// width_steel_sheets_textBox
			// 
			this->width_steel_sheets_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->width_steel_sheets_textBox->Location = System::Drawing::Point(16, 156);
			this->width_steel_sheets_textBox->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->width_steel_sheets_textBox->Name = L"width_steel_sheets_textBox";
			this->width_steel_sheets_textBox->Size = System::Drawing::Size(211, 35);
			this->width_steel_sheets_textBox->TabIndex = 24;
			// 
			// type_charge_comboBox
			// 
			this->type_charge_comboBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->type_charge_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->type_charge_comboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->type_charge_comboBox->FormattingEnabled = true;
			this->type_charge_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"���������� �� �����", L"���������� �� ��������",
					L"������������", L"��������������� "
			});
			this->type_charge_comboBox->Location = System::Drawing::Point(16, 219);
			this->type_charge_comboBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->type_charge_comboBox->Name = L"type_charge_comboBox";
			this->type_charge_comboBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->type_charge_comboBox->Size = System::Drawing::Size(211, 37);
			this->type_charge_comboBox->TabIndex = 31;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9.25F));
			this->label2->Location = System::Drawing::Point(13, 201);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 22);
			this->label2->TabIndex = 33;
			this->label2->Text = L"��� ������";
			// 
			// checkUnderwaterExp
			// 
			this->checkUnderwaterExp->AutoSize = true;
			this->checkUnderwaterExp->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12.25F));
			this->checkUnderwaterExp->Location = System::Drawing::Point(14, 419);
			this->checkUnderwaterExp->Name = L"checkUnderwaterExp";
			this->checkUnderwaterExp->Size = System::Drawing::Size(454, 33);
			this->checkUnderwaterExp->TabIndex = 39;
			this->checkUnderwaterExp->TabStop = true;
			this->checkUnderwaterExp->Text = L"��� ����� (���� � ����� ������)";
			this->checkUnderwaterExp->UseVisualStyleBackColor = true;
			// 
			// checkWoodenStop
			// 
			this->checkWoodenStop->AutoSize = true;
			this->checkWoodenStop->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12.25F));
			this->checkWoodenStop->Location = System::Drawing::Point(15, 458);
			this->checkWoodenStop->Name = L"checkWoodenStop";
			this->checkWoodenStop->Size = System::Drawing::Size(430, 33);
			this->checkWoodenStop->TabIndex = 40;
			this->checkWoodenStop->TabStop = true;
			this->checkWoodenStop->Text = L"���� � ����� ������ � �������";
			this->checkWoodenStop->UseVisualStyleBackColor = true;
			// 
			// checkDemolitionSkin
			// 
			this->checkDemolitionSkin->AutoSize = true;
			this->checkDemolitionSkin->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12.25F));
			this->checkDemolitionSkin->Location = System::Drawing::Point(15, 497);
			this->checkDemolitionSkin->Name = L"checkDemolitionSkin";
			this->checkDemolitionSkin->Size = System::Drawing::Size(341, 33);
			this->checkDemolitionSkin->TabIndex = 41;
			this->checkDemolitionSkin->TabStop = true;
			this->checkDemolitionSkin->Text = L"���� �� ������� ������";
			this->checkDemolitionSkin->UseVisualStyleBackColor = true;
			// 
			// checkDemolitionSkinWater
			// 
			this->checkDemolitionSkinWater->AutoSize = true;
			this->checkDemolitionSkinWater->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12.25F));
			this->checkDemolitionSkinWater->Location = System::Drawing::Point(15, 536);
			this->checkDemolitionSkinWater->Name = L"checkDemolitionSkinWater";
			this->checkDemolitionSkinWater->Size = System::Drawing::Size(585, 33);
			this->checkDemolitionSkinWater->TabIndex = 42;
			this->checkDemolitionSkinWater->TabStop = true;
			this->checkDemolitionSkinWater->Text = L"���� �� �������, ��������������� ������";
			this->checkDemolitionSkinWater->UseVisualStyleBackColor = true;
			// 
			// checkArm
			// 
			this->checkArm->AutoSize = true;
			this->checkArm->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12.25F));
			this->checkArm->Location = System::Drawing::Point(14, 288);
			this->checkArm->Name = L"checkArm";
			this->checkArm->Size = System::Drawing::Size(223, 33);
			this->checkArm->TabIndex = 43;
			this->checkArm->Text = L"�������� ����";
			this->checkArm->UseVisualStyleBackColor = true;
			// 
			// checkWater
			// 
			this->checkWater->AutoSize = true;
			this->checkWater->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12.25F));
			this->checkWater->Location = System::Drawing::Point(14, 380);
			this->checkWater->Name = L"checkWater";
			this->checkWater->Size = System::Drawing::Size(158, 33);
			this->checkWater->TabIndex = 44;
			this->checkWater->TabStop = true;
			this->checkWater->Text = L"�� � ����";
			this->checkWater->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 14.25F, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(10, 336);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(252, 34);
			this->label3->TabIndex = 45;
			this->label3->Text = L"����� �������";
			// 
			// SteelSheets
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
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
			this->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 8.25F));
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"SteelSheets";
			this->Size = System::Drawing::Size(719, 591);
			this->Load += gcnew System::EventHandler(this, &SteelSheets::SteelSheets_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void calc_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void SteelSheets_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
