#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace IZNT {

	/// <summary>
	/// ������ ��� SteelCable
	/// </summary>
	public ref class SteelCable : public System::Windows::Forms::UserControl
	{
	public:
		SteelCable(void);

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~SteelCable()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ answer_textBox;
	protected:
	private: System::Windows::Forms::Button^ calc_button;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ diameter_steel_cable_textBox;

	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;
	private: System::Windows::Forms::CheckBox^ checkBox_Steel_Cable;
	private: System::Windows::Forms::CheckBox^ checkUnderwaterExp;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
		   float answerz;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// ��������� ����� ��� ��������� ������������ � �� ��������� 
		   /// ���������� ����� ������ � ������� ��������� ����.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->answer_textBox = (gcnew System::Windows::Forms::TextBox());
			   this->calc_button = (gcnew System::Windows::Forms::Button());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->diameter_steel_cable_textBox = (gcnew System::Windows::Forms::TextBox());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->checkBox_Steel_Cable = (gcnew System::Windows::Forms::CheckBox());
			   this->checkUnderwaterExp = (gcnew System::Windows::Forms::CheckBox());
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
			   this->answer_textBox->TabIndex = 35;
			   // 
			   // calc_button
			   // 
			   this->calc_button->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F));
			   this->calc_button->ForeColor = System::Drawing::SystemColors::ControlText;
			   this->calc_button->Location = System::Drawing::Point(249, 85);
			   this->calc_button->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			   this->calc_button->Name = L"calc_button";
			   this->calc_button->Size = System::Drawing::Size(451, 36);
			   this->calc_button->TabIndex = 34;
			   this->calc_button->Text = L"����������";
			   this->calc_button->UseVisualStyleBackColor = true;
			   this->calc_button->Click += gcnew System::EventHandler(this, &SteelCable::calc_button_Click);
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9.25F));
			   this->label4->Location = System::Drawing::Point(13, 67);
			   this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(145, 15);
			   this->label4->TabIndex = 33;
			   this->label4->Text = L"������� h ����� � ��";
			   // 
			   // diameter_steel_cable_textBox
			   // 
			   this->diameter_steel_cable_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			   this->diameter_steel_cable_textBox->Location = System::Drawing::Point(16, 85);
			   this->diameter_steel_cable_textBox->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			   this->diameter_steel_cable_textBox->Name = L"diameter_steel_cable_textBox";
			   this->diameter_steel_cable_textBox->Size = System::Drawing::Size(211, 26);
			   this->diameter_steel_cable_textBox->TabIndex = 32;
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 13.25F, System::Drawing::FontStyle::Bold));
			   this->label1->Location = System::Drawing::Point(58, 21);
			   this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(593, 63);
			   this->label1->TabIndex = 31;
			   this->label1->Text = L"������ ����������� ������, ������������ ��� �����������\r\n��������� �����\r\n\r\n";
			   this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			   // 
			   // checkBox_Steel_Cable
			   // 
			   this->checkBox_Steel_Cable->AutoSize = true;
			   this->checkBox_Steel_Cable->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12.25F));
			   this->checkBox_Steel_Cable->Location = System::Drawing::Point(16, 132);
			   this->checkBox_Steel_Cable->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			   this->checkBox_Steel_Cable->Name = L"checkBox_Steel_Cable";
			   this->checkBox_Steel_Cable->Size = System::Drawing::Size(183, 44);
			   this->checkBox_Steel_Cable->TabIndex = 36;
			   this->checkBox_Steel_Cable->Text = L"��������� �����\r\n�� ����������� ��";
			   this->checkBox_Steel_Cable->UseVisualStyleBackColor = true;
			   this->checkBox_Steel_Cable->CheckedChanged += gcnew System::EventHandler(this, &SteelCable::checkBox_Steel_Cable_CheckedChanged);
			   // 
			   // checkUnderwaterExp
			   // 
			   this->checkUnderwaterExp->AutoSize = true;
			   this->checkUnderwaterExp->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12.25F));
			   this->checkUnderwaterExp->Location = System::Drawing::Point(16, 181);
			   this->checkUnderwaterExp->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			   this->checkUnderwaterExp->Name = L"checkUnderwaterExp";
			   this->checkUnderwaterExp->Size = System::Drawing::Size(187, 24);
			   this->checkUnderwaterExp->TabIndex = 37;
			   this->checkUnderwaterExp->Text = L"������ ��� �����";
			   this->checkUnderwaterExp->UseVisualStyleBackColor = true;
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Location = System::Drawing::Point(16, 327);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(684, 251);
			   this->pictureBox1->TabIndex = 38;
			   this->pictureBox1->TabStop = false;
			   // 
			   // SteelCable
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				   static_cast<System::Int32>(static_cast<System::Byte>(64)));
			   this->Controls->Add(this->pictureBox1);
			   this->Controls->Add(this->checkUnderwaterExp);
			   this->Controls->Add(this->checkBox_Steel_Cable);
			   this->Controls->Add(this->answer_textBox);
			   this->Controls->Add(this->calc_button);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->diameter_steel_cable_textBox);
			   this->Controls->Add(this->label1);
			   this->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 8.25F));
			   this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			   this->Name = L"SteelCable";
			   this->Size = System::Drawing::Size(719, 591);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void calc_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void checkBox_Steel_Cable_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
};
}
