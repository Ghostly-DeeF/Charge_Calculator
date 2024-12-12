#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace IZNT {

	/// <summary>
	/// ������ ��� SteelTube
	/// </summary>
	public ref class SteelTube : public System::Windows::Forms::UserControl
	{
	public:
		SteelTube(void)
		{
			InitializeComponent();
			pictureBox1->Image = Image::FromFile(".\\Picture\\img1Tube.bmp");
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~SteelTube()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ thickness_steel_tube_textBox;
	protected:

	private: System::Windows::Forms::TextBox^ answer_textBox;
	private: System::Windows::Forms::Button^ calc_button;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ diameter_steel_tube_textBox;

	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

	private: System::Windows::Forms::CheckBox^ checkUnderwaterExp;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::CheckBox^ checkFillingWater;


		   float answerz;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// ��������� ����� ��� ��������� ������������ � �� ��������� 
		   /// ���������� ����� ������ � ������� ��������� ����.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->thickness_steel_tube_textBox = (gcnew System::Windows::Forms::TextBox());
			   this->answer_textBox = (gcnew System::Windows::Forms::TextBox());
			   this->calc_button = (gcnew System::Windows::Forms::Button());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->diameter_steel_tube_textBox = (gcnew System::Windows::Forms::TextBox());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->checkUnderwaterExp = (gcnew System::Windows::Forms::CheckBox());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->checkFillingWater = (gcnew System::Windows::Forms::CheckBox());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			   this->label5->Location = System::Drawing::Point(13, 139);
			   this->label5->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(148, 16);
			   this->label5->TabIndex = 25;
			   this->label5->Text = L"������� h ����� � ��";
			   // 
			   // thickness_steel_tube_textBox
			   // 
			   this->thickness_steel_tube_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			   this->thickness_steel_tube_textBox->Location = System::Drawing::Point(16, 156);
			   this->thickness_steel_tube_textBox->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			   this->thickness_steel_tube_textBox->Name = L"thickness_steel_tube_textBox";
			   this->thickness_steel_tube_textBox->Size = System::Drawing::Size(211, 26);
			   this->thickness_steel_tube_textBox->TabIndex = 24;
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
			   this->answer_textBox->TabIndex = 23;
			   // 
			   // calc_button
			   // 
			   this->calc_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			   this->calc_button->ForeColor = System::Drawing::SystemColors::ControlText;
			   this->calc_button->Location = System::Drawing::Point(249, 85);
			   this->calc_button->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			   this->calc_button->Name = L"calc_button";
			   this->calc_button->Size = System::Drawing::Size(451, 36);
			   this->calc_button->TabIndex = 22;
			   this->calc_button->Text = L"����������";
			   this->calc_button->UseVisualStyleBackColor = true;
			   this->calc_button->Click += gcnew System::EventHandler(this, &SteelTube::calc_button_Click);
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			   this->label4->Location = System::Drawing::Point(13, 67);
			   this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(150, 16);
			   this->label4->TabIndex = 21;
			   this->label4->Text = L"������� D ����� � ��";
			   // 
			   // diameter_steel_tube_textBox
			   // 
			   this->diameter_steel_tube_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			   this->diameter_steel_tube_textBox->Location = System::Drawing::Point(16, 85);
			   this->diameter_steel_tube_textBox->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			   this->diameter_steel_tube_textBox->Name = L"diameter_steel_tube_textBox";
			   this->diameter_steel_tube_textBox->Size = System::Drawing::Size(211, 26);
			   this->diameter_steel_tube_textBox->TabIndex = 20;
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F, System::Drawing::FontStyle::Bold));
			   this->label1->Location = System::Drawing::Point(58, 21);
			   this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(576, 66);
			   this->label1->TabIndex = 19;
			   this->label1->Text = L"������ ����������� ������, ������������ ��� �����������\r\n�������� �����\r\n\r\n";
			   this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			   // 
			   // checkUnderwaterExp
			   // 
			   this->checkUnderwaterExp->AutoSize = true;
			   this->checkUnderwaterExp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			   this->checkUnderwaterExp->Location = System::Drawing::Point(16, 211);
			   this->checkUnderwaterExp->Name = L"checkUnderwaterExp";
			   this->checkUnderwaterExp->Size = System::Drawing::Size(189, 24);
			   this->checkUnderwaterExp->TabIndex = 34;
			   this->checkUnderwaterExp->Text = L"������ ��� �����";
			   this->checkUnderwaterExp->UseVisualStyleBackColor = true;
			   this->checkUnderwaterExp->CheckedChanged += gcnew System::EventHandler(this, &SteelTube::checkUnderwaterExp_CheckedChanged);
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Location = System::Drawing::Point(249, 337);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(451, 241);
			   this->pictureBox1->TabIndex = 35;
			   this->pictureBox1->TabStop = false;
			   // 
			   // checkFillingWater
			   // 
			   this->checkFillingWater->AutoSize = true;
			   this->checkFillingWater->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			   this->checkFillingWater->Location = System::Drawing::Point(16, 256);
			   this->checkFillingWater->Name = L"checkFillingWater";
			   this->checkFillingWater->Size = System::Drawing::Size(227, 24);
			   this->checkFillingWater->TabIndex = 36;
			   this->checkFillingWater->Text = L"����� ��������� �����";
			   this->checkFillingWater->UseVisualStyleBackColor = true;
			   this->checkFillingWater->Visible = false;
			   this->checkFillingWater->CheckedChanged += gcnew System::EventHandler(this, &SteelTube::checkFillingWater_CheckedChanged);
			   // 
			   // SteelTube
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				   static_cast<System::Int32>(static_cast<System::Byte>(64)));
			   this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->Controls->Add(this->checkFillingWater);
			   this->Controls->Add(this->pictureBox1);
			   this->Controls->Add(this->checkUnderwaterExp);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->thickness_steel_tube_textBox);
			   this->Controls->Add(this->answer_textBox);
			   this->Controls->Add(this->calc_button);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->diameter_steel_tube_textBox);
			   this->Controls->Add(this->label1);
			   this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			   this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			   this->Name = L"SteelTube";
			   this->Size = System::Drawing::Size(719, 591);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void calc_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void checkUnderwaterExp_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkFillingWater_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
};
}
