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
	/// Сводка для MonolithColumn
	/// </summary>
	public ref class MonolithColumn : public System::Windows::Forms::UserControl
	{
	public:
		MonolithColumn(void);

	private: System::Windows::Forms::TextBox^ elongated_textBox;
	private: System::Windows::Forms::Label^ elongated_label;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ type_charge_comboBox;
	private: System::Windows::Forms::CheckBox^ hole_checkBox;
	private: System::Windows::Forms::CheckBox^ underwater_checkBox;
	private: System::Windows::Forms::Button^ btnTextVersion;
	private: System::Windows::Forms::CheckBox^ plastic_checkBox;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ explosive_material_comboBox;





	public:

	public:
		float answer = 0.0f;

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MonolithColumn()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^ scoring_checkBox;
	private: System::Windows::Forms::CheckBox^ anti_slip_checkBox;

	protected:

	protected:

	private: System::Windows::Forms::TextBox^ answer_textBox;
	private: System::Windows::Forms::Button^ calc_button;
	private: System::Windows::Forms::Label^ radius_label;
	private: System::Windows::Forms::TextBox^ radius_textBox;






	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ second_comboBox;

	private: System::Windows::Forms::Label^ second_label;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ type_material_comboBox;
	private: System::Windows::Forms::Label^ type_brick_lable;

	private: System::Windows::Forms::ComboBox^ type_brickwork_comboBox;
	private: System::Windows::Forms::Label^ location_label;

	private: System::Windows::Forms::ComboBox^ location_comboBox;
	private: System::Windows::Forms::PictureBox^ pictureBox1;





	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MonolithColumn::typeid));
			this->scoring_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->anti_slip_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->answer_textBox = (gcnew System::Windows::Forms::TextBox());
			this->calc_button = (gcnew System::Windows::Forms::Button());
			this->radius_label = (gcnew System::Windows::Forms::Label());
			this->radius_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->second_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->second_label = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->type_material_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->type_brick_lable = (gcnew System::Windows::Forms::Label());
			this->type_brickwork_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->location_label = (gcnew System::Windows::Forms::Label());
			this->location_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->elongated_textBox = (gcnew System::Windows::Forms::TextBox());
			this->elongated_label = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->type_charge_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->hole_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->underwater_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->btnTextVersion = (gcnew System::Windows::Forms::Button());
			this->plastic_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->explosive_material_comboBox = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// scoring_checkBox
			// 
			this->scoring_checkBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->scoring_checkBox->AutoSize = true;
			this->scoring_checkBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->scoring_checkBox->Location = System::Drawing::Point(249, 575);
			this->scoring_checkBox->Name = L"scoring_checkBox";
			this->scoring_checkBox->Size = System::Drawing::Size(123, 24);
			this->scoring_checkBox->TabIndex = 21;
			this->scoring_checkBox->Text = L"С забивкой";
			this->scoring_checkBox->UseVisualStyleBackColor = true;
			// 
			// anti_slip_checkBox
			// 
			this->anti_slip_checkBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->anti_slip_checkBox->AutoSize = true;
			this->anti_slip_checkBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->anti_slip_checkBox->Location = System::Drawing::Point(249, 545);
			this->anti_slip_checkBox->Name = L"anti_slip_checkBox";
			this->anti_slip_checkBox->Size = System::Drawing::Size(261, 24);
			this->anti_slip_checkBox->TabIndex = 20;
			this->anti_slip_checkBox->Text = L"Противооткольная одежда";
			this->anti_slip_checkBox->UseVisualStyleBackColor = true;
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
			this->answer_textBox->Size = System::Drawing::Size(451, 330);
			this->answer_textBox->TabIndex = 19;
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
			this->calc_button->TabIndex = 18;
			this->calc_button->Text = L"Рассчитать";
			this->calc_button->UseVisualStyleBackColor = false;
			this->calc_button->Click += gcnew System::EventHandler(this, &MonolithColumn::calc_button_Click);
			// 
			// radius_label
			// 
			this->radius_label->AutoSize = true;
			this->radius_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->radius_label->Location = System::Drawing::Point(13, 429);
			this->radius_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->radius_label->Name = L"radius_label";
			this->radius_label->Size = System::Drawing::Size(183, 16);
			this->radius_label->TabIndex = 17;
			this->radius_label->Text = L"Толщина объекта в метрах";
			// 
			// radius_textBox
			// 
			this->radius_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->radius_textBox->Location = System::Drawing::Point(16, 447);
			this->radius_textBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->radius_textBox->Name = L"radius_textBox";
			this->radius_textBox->Size = System::Drawing::Size(211, 26);
			this->radius_textBox->TabIndex = 16;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(18, 14);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(661, 66);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Расчет контактного заряда, необходимого\r\nдля перебивания кирпичных, каменных, бет"
				L"онных и железобетонных\r\nконструкций типа колонн, столбов, балок и т. п.";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// second_comboBox
			// 
			this->second_comboBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->second_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->second_comboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->second_comboBox->FormattingEnabled = true;
			this->second_comboBox->Location = System::Drawing::Point(16, 307);
			this->second_comboBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->second_comboBox->Name = L"second_comboBox";
			this->second_comboBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->second_comboBox->Size = System::Drawing::Size(211, 28);
			this->second_comboBox->TabIndex = 14;
			this->second_comboBox->Visible = false;
			this->second_comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MonolithColumn::second_comboBox_SelectedIndexChanged);
			// 
			// second_label
			// 
			this->second_label->AutoSize = true;
			this->second_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->second_label->Location = System::Drawing::Point(13, 289);
			this->second_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->second_label->Name = L"second_label";
			this->second_label->Size = System::Drawing::Size(97, 16);
			this->second_label->TabIndex = 15;
			this->second_label->Text = L"Тип раствора";
			this->second_label->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label2->Location = System::Drawing::Point(13, 219);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(181, 16);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Наименование материала";
			// 
			// type_material_comboBox
			// 
			this->type_material_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->type_material_comboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->type_material_comboBox->FormattingEnabled = true;
			this->type_material_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Кирпичная кладка", L"Каменная кладка",
					L"Бетон", L"Железобетон"
			});
			this->type_material_comboBox->Location = System::Drawing::Point(16, 237);
			this->type_material_comboBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->type_material_comboBox->Name = L"type_material_comboBox";
			this->type_material_comboBox->Size = System::Drawing::Size(211, 28);
			this->type_material_comboBox->TabIndex = 12;
			this->type_material_comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MonolithColumn::type_material_comboBox_SelectedIndexChanged);
			// 
			// type_brick_lable
			// 
			this->type_brick_lable->AutoSize = true;
			this->type_brick_lable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->type_brick_lable->Location = System::Drawing::Point(13, 359);
			this->type_brick_lable->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->type_brick_lable->Name = L"type_brick_lable";
			this->type_brick_lable->Size = System::Drawing::Size(81, 16);
			this->type_brick_lable->TabIndex = 23;
			this->type_brick_lable->Text = L"Тип кладки";
			this->type_brick_lable->Visible = false;
			// 
			// type_brickwork_comboBox
			// 
			this->type_brickwork_comboBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->type_brickwork_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->type_brickwork_comboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->type_brickwork_comboBox->FormattingEnabled = true;
			this->type_brickwork_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Слабая", L"Прочная" });
			this->type_brickwork_comboBox->Location = System::Drawing::Point(16, 377);
			this->type_brickwork_comboBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->type_brickwork_comboBox->Name = L"type_brickwork_comboBox";
			this->type_brickwork_comboBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->type_brickwork_comboBox->Size = System::Drawing::Size(211, 28);
			this->type_brickwork_comboBox->TabIndex = 22;
			this->type_brickwork_comboBox->Visible = false;
			// 
			// location_label
			// 
			this->location_label->AutoSize = true;
			this->location_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->location_label->Location = System::Drawing::Point(13, 499);
			this->location_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->location_label->Name = L"location_label";
			this->location_label->Size = System::Drawing::Size(145, 16);
			this->location_label->TabIndex = 25;
			this->location_label->Text = L"Схема расположения";
			// 
			// location_comboBox
			// 
			this->location_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->location_comboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->location_comboBox->FormattingEnabled = true;
			this->location_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Наружный заряд", L"В нише", L"На глубине 1/3",
					L"В середине", L"У стенки на грунте", L"В колодце у стенки"
			});
			this->location_comboBox->Location = System::Drawing::Point(16, 517);
			this->location_comboBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->location_comboBox->Name = L"location_comboBox";
			this->location_comboBox->Size = System::Drawing::Size(211, 28);
			this->location_comboBox->TabIndex = 24;
			this->location_comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MonolithColumn::location_comboBox_SelectedIndexChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(16, 549);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(211, 93);
			this->pictureBox1->TabIndex = 26;
			this->pictureBox1->TabStop = false;
			// 
			// elongated_textBox
			// 
			this->elongated_textBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->elongated_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->elongated_textBox->Location = System::Drawing::Point(249, 513);
			this->elongated_textBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->elongated_textBox->Name = L"elongated_textBox";
			this->elongated_textBox->Size = System::Drawing::Size(211, 26);
			this->elongated_textBox->TabIndex = 28;
			this->elongated_textBox->Visible = false;
			// 
			// elongated_label
			// 
			this->elongated_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->elongated_label->AutoSize = true;
			this->elongated_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->elongated_label->Location = System::Drawing::Point(246, 495);
			this->elongated_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->elongated_label->Name = L"elongated_label";
			this->elongated_label->Size = System::Drawing::Size(176, 16);
			this->elongated_label->TabIndex = 29;
			this->elongated_label->Text = L"Ширина объекта в метрах";
			this->elongated_label->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label3->Location = System::Drawing::Point(13, 149);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 16);
			this->label3->TabIndex = 32;
			this->label3->Text = L"Тип заряда";
			// 
			// type_charge_comboBox
			// 
			this->type_charge_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->type_charge_comboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->type_charge_comboBox->FormattingEnabled = true;
			this->type_charge_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Сосредоточенный", L"Удлиненный" });
			this->type_charge_comboBox->Location = System::Drawing::Point(16, 167);
			this->type_charge_comboBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->type_charge_comboBox->Name = L"type_charge_comboBox";
			this->type_charge_comboBox->Size = System::Drawing::Size(211, 28);
			this->type_charge_comboBox->TabIndex = 31;
			this->type_charge_comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MonolithColumn::type_charge_comboBox_SelectedIndexChanged);
			// 
			// hole_checkBox
			// 
			this->hole_checkBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->hole_checkBox->AutoSize = true;
			this->hole_checkBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->hole_checkBox->Location = System::Drawing::Point(249, 635);
			this->hole_checkBox->Name = L"hole_checkBox";
			this->hole_checkBox->Size = System::Drawing::Size(202, 24);
			this->hole_checkBox->TabIndex = 33;
			this->hole_checkBox->Text = L"Сквозное отверстие";
			this->hole_checkBox->UseVisualStyleBackColor = true;
			this->hole_checkBox->Visible = false;
			// 
			// underwater_checkBox
			// 
			this->underwater_checkBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->underwater_checkBox->AutoSize = true;
			this->underwater_checkBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->underwater_checkBox->Location = System::Drawing::Point(249, 665);
			this->underwater_checkBox->Name = L"underwater_checkBox";
			this->underwater_checkBox->Size = System::Drawing::Size(175, 24);
			this->underwater_checkBox->TabIndex = 34;
			this->underwater_checkBox->Text = L"Взрыв под водой";
			this->underwater_checkBox->UseVisualStyleBackColor = true;
			// 
			// btnTextVersion
			// 
			this->btnTextVersion->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnTextVersion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->btnTextVersion->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnTextVersion->Location = System::Drawing::Point(611, 57);
			this->btnTextVersion->Name = L"btnTextVersion";
			this->btnTextVersion->Size = System::Drawing::Size(89, 45);
			this->btnTextVersion->TabIndex = 35;
			this->btnTextVersion->Text = L"Текстовая версия";
			this->btnTextVersion->UseVisualStyleBackColor = true;
			this->btnTextVersion->Click += gcnew System::EventHandler(this, &MonolithColumn::btnTextVersion_Click);
			// 
			// plastic_checkBox
			// 
			this->plastic_checkBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->plastic_checkBox->AutoSize = true;
			this->plastic_checkBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->plastic_checkBox->Location = System::Drawing::Point(249, 605);
			this->plastic_checkBox->Name = L"plastic_checkBox";
			this->plastic_checkBox->Size = System::Drawing::Size(159, 24);
			this->plastic_checkBox->TabIndex = 30;
			this->plastic_checkBox->Text = L"Пластичное ВВ";
			this->plastic_checkBox->UseVisualStyleBackColor = true;
			this->plastic_checkBox->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label9->Location = System::Drawing::Point(13, 91);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(104, 16);
			this->label9->TabIndex = 57;
			this->label9->Text = L"Расчет для ВВ:";
			// 
			// explosive_material_comboBox
			// 
			this->explosive_material_comboBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->explosive_material_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->explosive_material_comboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->explosive_material_comboBox->FormattingEnabled = true;
			this->explosive_material_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Тротил", L"Пластид - 4", L"Аммонал" });
			this->explosive_material_comboBox->Location = System::Drawing::Point(16, 108);
			this->explosive_material_comboBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->explosive_material_comboBox->Name = L"explosive_material_comboBox";
			this->explosive_material_comboBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->explosive_material_comboBox->Size = System::Drawing::Size(211, 28);
			this->explosive_material_comboBox->TabIndex = 56;
			// 
			// MonolithColumn
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Controls->Add(this->label9);
			this->Controls->Add(this->explosive_material_comboBox);
			this->Controls->Add(this->btnTextVersion);
			this->Controls->Add(this->underwater_checkBox);
			this->Controls->Add(this->hole_checkBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->type_charge_comboBox);
			this->Controls->Add(this->plastic_checkBox);
			this->Controls->Add(this->elongated_label);
			this->Controls->Add(this->elongated_textBox);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->location_label);
			this->Controls->Add(this->location_comboBox);
			this->Controls->Add(this->type_brick_lable);
			this->Controls->Add(this->type_brickwork_comboBox);
			this->Controls->Add(this->scoring_checkBox);
			this->Controls->Add(this->anti_slip_checkBox);
			this->Controls->Add(this->answer_textBox);
			this->Controls->Add(this->calc_button);
			this->Controls->Add(this->radius_label);
			this->Controls->Add(this->radius_textBox);
			this->Controls->Add(this->second_label);
			this->Controls->Add(this->second_comboBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->type_material_comboBox);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"MonolithColumn";
			this->Size = System::Drawing::Size(719, 716);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void type_material_comboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void location_comboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void second_comboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void calc_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void type_charge_comboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
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
	pictureBox1->Image = Image::FromFile(".\\Picture\\ScreenMono.png");//(cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
	pictureBox1->Location = System::Drawing::Point(13, 13);
	pictureBox1->Name = L"pictureBox1";
	pictureBox1->Size = System::Drawing::Size(417, 392);
	pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
	pictureBox1->TabIndex = 0;
	pictureBox1->TabStop = false;
	// 
	// textBox1
	// 
	textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
	textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
	textBox1->Location = System::Drawing::Point(13, 412);
	textBox1->Multiline = true;
	textBox1->Name = L"textBox1";
	textBox1->ReadOnly = true;
	textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
	textBox1->Size = System::Drawing::Size(417, 307);
	textBox1->TabIndex = 1;
	textBox1->TabStop = false;
	textBox1->BackColor = System::Drawing::Color::White;
	textBox1->Text = "Для подрывания кирпичных, каменных, бетонных и железобетонных конструкций типа колонн, столбов, балок и т.п.при ширине их, не превыщающей удвоеную толщину, применяются сосредоточенные заряды, рассчитанные по формуле : \r\n"
		"С = АВR^3 (5.10) \r\n"
		"где : С - масса заряда в килограммах\r\n"
		"А - коэффициент, зависящий от свойств подрываемого материала и применяемого ВВ, определяется по таблице. \r\n"
		"В - коэффициент, зависящий от расположения заряда и называемый коэффициентом забивки, определяется по таблице.  \r\n"
		"R - необходимый радиус разрушения в метрах, определяется по таблице"
		"Для пробивания отдельных отверстий в плитах, стенах и подобных им конструкциях из кирпича, камня, бетона и железобетона применяются контактные сосредоточенные заряды, масса которых определяется по формуле : \r\n"
		"С = (2 - 3 раза)АВR^3\r\n"
		"Диаметр отверстия получается приблизительно равным удвоенной толщине пробиваемой конструкции"
		"Для пробивания отверстий в конструкциях железобетонных фортификационных сооружений, имеющих в пробиваемой конструкции противооткольную одежду в виде двухтавровых балок, рельсов, швеллеров и т.п.применяются сосредоточенные контактные заряды, масса которых определяется по формуле : \r\n"

		"С = 6АВR^3\r\n"
		"Для пробивания узких отверстий в вышеуказанных конструкциях целесообразно применять сосредоточенные кумулятивные заряды, характеристику которых мы рассмотрели при изучении темы № 1. \r\n"
		"Если взрыв одного кумулятивного заряда не обеспечивает сквозного пробивания данной конструкции, то нецелесообразно производить на ней последовательное взрывание таких зарядов до получения сквозной пробоины.  \r\n"

		"Удлиненные заряды применяются для подрывания кирпичных, каменных, бетонных и железобетонных конструкций, ширина которых более чем вдвое превышает их толщину, и рассчитываются по формуле : \r\n"
		"C = 0,5ABR^2l\r\n"
		"где С — вес заряда в килограммах; \r\n"
		"А — коэффициент, зависящий от свойств подрываемого материала и применяемого ВБ; \r\n"
		"Д ля подрывания железобетонных элементов типа колонн, балок и плит целесообразно применять заряды из пластичного ВВ в мягкой оболочке).";
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
