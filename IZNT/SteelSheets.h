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
	private: System::Windows::Forms::CheckBox^ checkCharge�umulative;
	private: System::Windows::Forms::CheckBox^ checkConcentratedCharge;



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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->thickness_steel_sheets_textBox = (gcnew System::Windows::Forms::TextBox());
			this->answer_textBox = (gcnew System::Windows::Forms::TextBox());
			this->calc_button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->width_steel_sheets_textBox = (gcnew System::Windows::Forms::TextBox());
			this->checkCharge�umulative = (gcnew System::Windows::Forms::CheckBox());
			this->checkConcentratedCharge = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label5->Location = System::Drawing::Point(4, 106);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(162, 20);
			this->label5->TabIndex = 23;
			this->label5->Text = L"������� ����� � ��";
			// 
			// thickness_steel_sheets_textBox
			// 
			this->thickness_steel_sheets_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->thickness_steel_sheets_textBox->Location = System::Drawing::Point(4, 129);
			this->thickness_steel_sheets_textBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->thickness_steel_sheets_textBox->Name = L"thickness_steel_sheets_textBox";
			this->thickness_steel_sheets_textBox->Size = System::Drawing::Size(211, 31);
			this->thickness_steel_sheets_textBox->TabIndex = 22;
			// 
			// answer_textBox
			// 
			this->answer_textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->answer_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->answer_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->answer_textBox->ForeColor = System::Drawing::SystemColors::Window;
			this->answer_textBox->Location = System::Drawing::Point(243, 167);
			this->answer_textBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->answer_textBox->Multiline = true;
			this->answer_textBox->Name = L"answer_textBox";
			this->answer_textBox->Size = System::Drawing::Size(451, 206);
			this->answer_textBox->TabIndex = 21;
			// 
			// calc_button
			// 
			this->calc_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->calc_button->ForeColor = System::Drawing::SystemColors::ControlText;
			this->calc_button->Location = System::Drawing::Point(243, 124);
			this->calc_button->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
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
			this->label1->Location = System::Drawing::Point(41, 21);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(759, 58);
			this->label1->TabIndex = 19;
			this->label1->Text = L"������ ����������� ������, ������������ ��� �����������\r\n����� ��� �������� �����"
				L"� ����\r\n";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label4->Location = System::Drawing::Point(1, 195);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(216, 20);
			this->label4->TabIndex = 25;
			this->label4->Text = L"������ ����� (������) � ��";
			// 
			// width_steel_sheets_textBox
			// 
			this->width_steel_sheets_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->width_steel_sheets_textBox->Location = System::Drawing::Point(4, 213);
			this->width_steel_sheets_textBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->width_steel_sheets_textBox->Name = L"width_steel_sheets_textBox";
			this->width_steel_sheets_textBox->Size = System::Drawing::Size(211, 31);
			this->width_steel_sheets_textBox->TabIndex = 24;
			// 
			// checkCharge�umulative
			// 
			this->checkCharge�umulative->AutoSize = true;
			this->checkCharge�umulative->Location = System::Drawing::Point(4, 280);
			this->checkCharge�umulative->Name = L"checkCharge�umulative";
			this->checkCharge�umulative->Size = System::Drawing::Size(173, 38);
			this->checkCharge�umulative->TabIndex = 26;
			this->checkCharge�umulative->Text = L"������������ ����� \r\n(�� ��������-4)";
			this->checkCharge�umulative->UseVisualStyleBackColor = true;
			// 
			// checkConcentratedCharge
			// 
			this->checkConcentratedCharge->AutoSize = true;
			this->checkConcentratedCharge->Location = System::Drawing::Point(4, 335);
			this->checkConcentratedCharge->Name = L"checkConcentratedCharge";
			this->checkConcentratedCharge->Size = System::Drawing::Size(198, 38);
			this->checkConcentratedCharge->TabIndex = 27;
			this->checkConcentratedCharge->Text = L"��������������� ����� \r\n(�� ��������-4)";
			this->checkConcentratedCharge->UseVisualStyleBackColor = true;
			// 
			// SteelSheets
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Controls->Add(this->checkConcentratedCharge);
			this->Controls->Add(this->checkCharge�umulative);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->width_steel_sheets_textBox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->thickness_steel_sheets_textBox);
			this->Controls->Add(this->answer_textBox);
			this->Controls->Add(this->calc_button);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Name = L"SteelSheets";
			this->Size = System::Drawing::Size(719, 591);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void calc_button_Click(System::Object^ sender, System::EventArgs^ e);
};
}
