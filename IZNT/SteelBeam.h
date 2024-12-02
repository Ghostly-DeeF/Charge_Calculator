#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace IZNT {

	/// <summary>
	/// ������ ��� SteelBeam
	/// </summary>
	public ref class SteelBeam : public System::Windows::Forms::UserControl
	{
	public:
		SteelBeam(void)
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
		~SteelBeam()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ width_steel_beam_textBox;
	protected:

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ thickness_steel_beam_textBox;

	private: System::Windows::Forms::TextBox^ answer_textBox;
	private: System::Windows::Forms::Button^ calc_button;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ ShapedCharge;
	private: System::Windows::Forms::CheckBox^ ConcentratedCharge;
	private: System::Windows::Forms::CheckBox^ checkUnderwaterExp;



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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->width_steel_beam_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->thickness_steel_beam_textBox = (gcnew System::Windows::Forms::TextBox());
			this->answer_textBox = (gcnew System::Windows::Forms::TextBox());
			this->calc_button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ShapedCharge = (gcnew System::Windows::Forms::CheckBox());
			this->ConcentratedCharge = (gcnew System::Windows::Forms::CheckBox());
			this->checkUnderwaterExp = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9.25F));
			this->label4->Location = System::Drawing::Point(13, 139);
			this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(131, 15);
			this->label4->TabIndex = 32;
			this->label4->Text = L"������ ����� � ��";
			// 
			// width_steel_beam_textBox
			// 
			this->width_steel_beam_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->width_steel_beam_textBox->Location = System::Drawing::Point(16, 156);
			this->width_steel_beam_textBox->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->width_steel_beam_textBox->Name = L"width_steel_beam_textBox";
			this->width_steel_beam_textBox->Size = System::Drawing::Size(211, 26);
			this->width_steel_beam_textBox->TabIndex = 31;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9.25F));
			this->label5->Location = System::Drawing::Point(13, 67);
			this->label5->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(138, 15);
			this->label5->TabIndex = 30;
			this->label5->Text = L"������� ����� � ��";
			// 
			// thickness_steel_beam_textBox
			// 
			this->thickness_steel_beam_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->thickness_steel_beam_textBox->Location = System::Drawing::Point(16, 85);
			this->thickness_steel_beam_textBox->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->thickness_steel_beam_textBox->Name = L"thickness_steel_beam_textBox";
			this->thickness_steel_beam_textBox->Size = System::Drawing::Size(211, 26);
			this->thickness_steel_beam_textBox->TabIndex = 29;
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
			this->answer_textBox->TabIndex = 28;
			// 
			// calc_button
			// 
			this->calc_button->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F));
			this->calc_button->ForeColor = System::Drawing::SystemColors::ControlText;
			this->calc_button->Location = System::Drawing::Point(249, 85);
			this->calc_button->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->calc_button->Name = L"calc_button";
			this->calc_button->Size = System::Drawing::Size(451, 36);
			this->calc_button->TabIndex = 27;
			this->calc_button->Text = L"����������";
			this->calc_button->UseVisualStyleBackColor = true;
			this->calc_button->Click += gcnew System::EventHandler(this, &SteelBeam::calc_button_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 13.25F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(58, 21);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(593, 42);
			this->label1->TabIndex = 26;
			this->label1->Text = L"������ ����������� ������, ������������ ��� �����������\r\n�������� �����";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// ShapedCharge
			// 
			this->ShapedCharge->AutoSize = true;
			this->ShapedCharge->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12.25F));
			this->ShapedCharge->Location = System::Drawing::Point(14, 200);
			this->ShapedCharge->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->ShapedCharge->Name = L"ShapedCharge";
			this->ShapedCharge->Size = System::Drawing::Size(166, 24);
			this->ShapedCharge->TabIndex = 33;
			this->ShapedCharge->Text = L"�������� �����";
			this->ShapedCharge->UseVisualStyleBackColor = true;
			// 
			// ConcentratedCharge
			// 
			this->ConcentratedCharge->AutoSize = true;
			this->ConcentratedCharge->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12.25F));
			this->ConcentratedCharge->Location = System::Drawing::Point(14, 238);
			this->ConcentratedCharge->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->ConcentratedCharge->Name = L"ConcentratedCharge";
			this->ConcentratedCharge->Size = System::Drawing::Size(234, 24);
			this->ConcentratedCharge->TabIndex = 34;
			this->ConcentratedCharge->Text = L"��������������� �����";
			this->ConcentratedCharge->UseVisualStyleBackColor = true;
			// 
			// checkUnderwaterExp
			// 
			this->checkUnderwaterExp->AutoSize = true;
			this->checkUnderwaterExp->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12.25F));
			this->checkUnderwaterExp->Location = System::Drawing::Point(14, 278);
			this->checkUnderwaterExp->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->checkUnderwaterExp->Name = L"checkUnderwaterExp";
			this->checkUnderwaterExp->Size = System::Drawing::Size(187, 24);
			this->checkUnderwaterExp->TabIndex = 35;
			this->checkUnderwaterExp->Text = L"������ ��� �����";
			this->checkUnderwaterExp->UseVisualStyleBackColor = true;
			// 
			// SteelBeam
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Controls->Add(this->checkUnderwaterExp);
			this->Controls->Add(this->ConcentratedCharge);
			this->Controls->Add(this->ShapedCharge);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->width_steel_beam_textBox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->thickness_steel_beam_textBox);
			this->Controls->Add(this->answer_textBox);
			this->Controls->Add(this->calc_button);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 8.25F));
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"SteelBeam";
			this->Size = System::Drawing::Size(719, 591);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void calc_button_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
