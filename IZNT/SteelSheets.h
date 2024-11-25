#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace IZNT {

	/// <summary>
	/// Сводка для SteelSheets
	/// </summary>
	public ref class SteelSheets : public System::Windows::Forms::UserControl
	{
	public:
		SteelSheets(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
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


	private: System::Windows::Forms::CheckBox^ checkChargeСumulative;
	private: System::Windows::Forms::CheckBox^ checkConcentratedCharge;
	private: System::Windows::Forms::CheckBox^ checkArm;
	private: System::Windows::Forms::CheckBox^ checkUnderwaterExp;
	private: System::Windows::Forms::CheckBox^ checkDemolitionSkin;






	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
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
			this->checkChargeСumulative = (gcnew System::Windows::Forms::CheckBox());
			this->checkConcentratedCharge = (gcnew System::Windows::Forms::CheckBox());
			this->checkArm = (gcnew System::Windows::Forms::CheckBox());
			this->checkUnderwaterExp = (gcnew System::Windows::Forms::CheckBox());
			this->checkDemolitionSkin = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9.25F));
			this->label5->Location = System::Drawing::Point(13, 67);
			this->label5->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(136, 15);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Толщина листа в см";
			// 
			// thickness_steel_sheets_textBox
			// 
			this->thickness_steel_sheets_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->thickness_steel_sheets_textBox->Location = System::Drawing::Point(16, 85);
			this->thickness_steel_sheets_textBox->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->thickness_steel_sheets_textBox->Name = L"thickness_steel_sheets_textBox";
			this->thickness_steel_sheets_textBox->Size = System::Drawing::Size(211, 26);
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
			this->calc_button->Text = L"Рассчитать";
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
			this->label1->Size = System::Drawing::Size(593, 63);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Расчет контактного заряда, необходимого для перебивания\r\nстального листа\r\n\r\n";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9.25F));
			this->label4->Location = System::Drawing::Point(13, 139);
			this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 15);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Ширина листа в см";
			// 
			// width_steel_sheets_textBox
			// 
			this->width_steel_sheets_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->width_steel_sheets_textBox->Location = System::Drawing::Point(16, 156);
			this->width_steel_sheets_textBox->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->width_steel_sheets_textBox->Name = L"width_steel_sheets_textBox";
			this->width_steel_sheets_textBox->Size = System::Drawing::Size(211, 26);
			this->width_steel_sheets_textBox->TabIndex = 24;
			// 
			// checkChargeСumulative
			// 
			this->checkChargeСumulative->AutoSize = true;
			this->checkChargeСumulative->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12.25F));
			this->checkChargeСumulative->Location = System::Drawing::Point(14, 201);
			this->checkChargeСumulative->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->checkChargeСumulative->Name = L"checkChargeСumulative";
			this->checkChargeСumulative->Size = System::Drawing::Size(208, 44);
			this->checkChargeСumulative->TabIndex = 26;
			this->checkChargeСumulative->Text = L"Кумулятивный заряд \r\n(из пластита-4)";
			this->checkChargeСumulative->UseVisualStyleBackColor = true;
			// 
			// checkConcentratedCharge
			// 
			this->checkConcentratedCharge->AutoSize = true;
			this->checkConcentratedCharge->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12.25F));
			this->checkConcentratedCharge->Location = System::Drawing::Point(14, 251);
			this->checkConcentratedCharge->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->checkConcentratedCharge->Name = L"checkConcentratedCharge";
			this->checkConcentratedCharge->Size = System::Drawing::Size(234, 44);
			this->checkConcentratedCharge->TabIndex = 27;
			this->checkConcentratedCharge->Text = L"Сосредоточенный заряд\r\n(из пластита-4)";
			this->checkConcentratedCharge->UseVisualStyleBackColor = true;
			// 
			// checkArm
			// 
			this->checkArm->AutoSize = true;
			this->checkArm->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12.25F));
			this->checkArm->Location = System::Drawing::Point(15, 307);
			this->checkArm->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->checkArm->Name = L"checkArm";
			this->checkArm->Size = System::Drawing::Size(152, 24);
			this->checkArm->TabIndex = 28;
			this->checkArm->Text = L"Броневой лист";
			this->checkArm->UseVisualStyleBackColor = true;
			// 
			// checkUnderwaterExp
			// 
			this->checkUnderwaterExp->AutoSize = true;
			this->checkUnderwaterExp->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12.25F));
			this->checkUnderwaterExp->Location = System::Drawing::Point(15, 348);
			this->checkUnderwaterExp->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->checkUnderwaterExp->Name = L"checkUnderwaterExp";
			this->checkUnderwaterExp->Size = System::Drawing::Size(187, 24);
			this->checkUnderwaterExp->TabIndex = 29;
			this->checkUnderwaterExp->Text = L"Подрыв под водой";
			this->checkUnderwaterExp->UseVisualStyleBackColor = true;
			// 
			// checkDemolitionSkin
			// 
			this->checkDemolitionSkin->AutoSize = true;
			this->checkDemolitionSkin->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12.25F));
			this->checkDemolitionSkin->Location = System::Drawing::Point(15, 388);
			this->checkDemolitionSkin->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->checkDemolitionSkin->Name = L"checkDemolitionSkin";
			this->checkDemolitionSkin->Size = System::Drawing::Size(310, 24);
			this->checkDemolitionSkin->TabIndex = 30;
			this->checkDemolitionSkin->Text = L"Подрыв стальной обшивки судна\r\n";
			this->checkDemolitionSkin->UseVisualStyleBackColor = true;
			// 
			// SteelSheets
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Controls->Add(this->checkDemolitionSkin);
			this->Controls->Add(this->checkUnderwaterExp);
			this->Controls->Add(this->checkArm);
			this->Controls->Add(this->checkConcentratedCharge);
			this->Controls->Add(this->checkChargeСumulative);
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void calc_button_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
