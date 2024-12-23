#pragma once

#include "HelloPanel.h"

#include "Wood1.h"
#include "Balk1.h"
#include "WoodTwoBalk.h"
#include "WoodNoncontact.h"
#include "WoodStump.h"

#include "SteelSheets.h"
#include "SteelBeam.h"
#include "SteelTube.h"
#include "SteelRod.h"
#include "SteelCable.h"
#include "SteelBar.h"

#include "MonolithColumn.h"
#include "MonolithSpur.h"
#include "MonolithNoncontact.h"

namespace IZNT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void);
		void SetForm(System::Windows::Forms::Panel^, System::Windows::Forms::Control^);
	protected:
		~MainForm();
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Button^ wood_group;
	private: System::Windows::Forms::Button^ steel_group;


	private: System::Windows::Forms::Button^ btnWood;
	private: System::Windows::Forms::Button^ btnWoodBalk;
	private: System::Windows::Forms::Button^ btnWoodTwoBalk;

		   int selected_panel = 0;




	private: System::Windows::Forms::Button^ btnWoodNoncontact;
	private: System::Windows::Forms::Button^ btnWoodStump;
	private: System::Windows::Forms::Button^ btnSteelPlate;






	private: System::Windows::Forms::Button^ btnSteelBalk;
	private: System::Windows::Forms::Button^ btnSteelTube;
	private: System::Windows::Forms::Button^ btnSteelRod;
	private: System::Windows::Forms::Button^ btnSteelCable;
	private: System::Windows::Forms::Button^ btnSteelBar;


	private: System::Windows::Forms::Button^ monolith_group;
	private: System::Windows::Forms::Button^ btnMonolithColumn;

	private: System::Windows::Forms::Button^ btnMonolithSpur;
	private: System::Windows::Forms::Button^ btnMonolithNoncontact;











	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

	public:
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->wood_group = (gcnew System::Windows::Forms::Button());
			this->btnWood = (gcnew System::Windows::Forms::Button());
			this->btnWoodBalk = (gcnew System::Windows::Forms::Button());
			this->btnWoodTwoBalk = (gcnew System::Windows::Forms::Button());
			this->btnWoodNoncontact = (gcnew System::Windows::Forms::Button());
			this->btnWoodStump = (gcnew System::Windows::Forms::Button());
			this->steel_group = (gcnew System::Windows::Forms::Button());
			this->btnSteelPlate = (gcnew System::Windows::Forms::Button());
			this->btnSteelBalk = (gcnew System::Windows::Forms::Button());
			this->btnSteelTube = (gcnew System::Windows::Forms::Button());
			this->btnSteelRod = (gcnew System::Windows::Forms::Button());
			this->btnSteelCable = (gcnew System::Windows::Forms::Button());
			this->btnSteelBar = (gcnew System::Windows::Forms::Button());
			this->monolith_group = (gcnew System::Windows::Forms::Button());
			this->btnMonolithColumn = (gcnew System::Windows::Forms::Button());
			this->btnMonolithSpur = (gcnew System::Windows::Forms::Button());
			this->btnMonolithNoncontact = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(919, 666);
			this->panel1->TabIndex = 0;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->Controls->Add(this->wood_group);
			this->flowLayoutPanel1->Controls->Add(this->btnWood);
			this->flowLayoutPanel1->Controls->Add(this->btnWoodBalk);
			this->flowLayoutPanel1->Controls->Add(this->btnWoodTwoBalk);
			this->flowLayoutPanel1->Controls->Add(this->btnWoodNoncontact);
			this->flowLayoutPanel1->Controls->Add(this->btnWoodStump);
			this->flowLayoutPanel1->Controls->Add(this->steel_group);
			this->flowLayoutPanel1->Controls->Add(this->btnSteelPlate);
			this->flowLayoutPanel1->Controls->Add(this->btnSteelBalk);
			this->flowLayoutPanel1->Controls->Add(this->btnSteelTube);
			this->flowLayoutPanel1->Controls->Add(this->btnSteelRod);
			this->flowLayoutPanel1->Controls->Add(this->btnSteelCable);
			this->flowLayoutPanel1->Controls->Add(this->btnSteelBar);
			this->flowLayoutPanel1->Controls->Add(this->monolith_group);
			this->flowLayoutPanel1->Controls->Add(this->btnMonolithColumn);
			this->flowLayoutPanel1->Controls->Add(this->btnMonolithSpur);
			this->flowLayoutPanel1->Controls->Add(this->btnMonolithNoncontact);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::RightToLeft;
			this->flowLayoutPanel1->Location = System::Drawing::Point(720, 0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(199, 666);
			this->flowLayoutPanel1->TabIndex = 1;
			// 
			// wood_group
			// 
			this->wood_group->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->wood_group->Location = System::Drawing::Point(5, 3);
			this->wood_group->Name = L"wood_group";
			this->wood_group->Size = System::Drawing::Size(174, 44);
			this->wood_group->TabIndex = 1;
			this->wood_group->Text = L"Дерево";
			this->wood_group->UseVisualStyleBackColor = true;
			this->wood_group->Click += gcnew System::EventHandler(this, &MainForm::wood_group_Click);
			// 
			// btnWood
			// 
			this->btnWood->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnWood->Location = System::Drawing::Point(15, 53);
			this->btnWood->Name = L"btnWood";
			this->btnWood->Size = System::Drawing::Size(164, 86);
			this->btnWood->TabIndex = 7;
			this->btnWood->Text = L"Бревно или куст свай";
			this->btnWood->UseVisualStyleBackColor = true;
			this->btnWood->Visible = false;
			this->btnWood->Click += gcnew System::EventHandler(this, &MainForm::btnWood_Click);
			// 
			// btnWoodBalk
			// 
			this->btnWoodBalk->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(90)));
			this->btnWoodBalk->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnWoodBalk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold));
			this->btnWoodBalk->Location = System::Drawing::Point(15, 145);
			this->btnWoodBalk->Name = L"btnWoodBalk";
			this->btnWoodBalk->Size = System::Drawing::Size(164, 86);
			this->btnWoodBalk->TabIndex = 8;
			this->btnWoodBalk->Text = L"Брус или пакет бревен";
			this->btnWoodBalk->UseVisualStyleBackColor = false;
			this->btnWoodBalk->Visible = false;
			this->btnWoodBalk->Click += gcnew System::EventHandler(this, &MainForm::btnWoodBalk_Click);
			// 
			// btnWoodTwoBalk
			// 
			this->btnWoodTwoBalk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold));
			this->btnWoodTwoBalk->Location = System::Drawing::Point(15, 237);
			this->btnWoodTwoBalk->Name = L"btnWoodTwoBalk";
			this->btnWoodTwoBalk->Size = System::Drawing::Size(164, 86);
			this->btnWoodTwoBalk->TabIndex = 9;
			this->btnWoodTwoBalk->Text = L"Двутавровая балка";
			this->btnWoodTwoBalk->UseVisualStyleBackColor = true;
			this->btnWoodTwoBalk->Visible = false;
			this->btnWoodTwoBalk->Click += gcnew System::EventHandler(this, &MainForm::btnWoodTwoBalk_Click);
			// 
			// btnWoodNoncontact
			// 
			this->btnWoodNoncontact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold));
			this->btnWoodNoncontact->Location = System::Drawing::Point(15, 329);
			this->btnWoodNoncontact->Name = L"btnWoodNoncontact";
			this->btnWoodNoncontact->Size = System::Drawing::Size(164, 86);
			this->btnWoodNoncontact->TabIndex = 12;
			this->btnWoodNoncontact->Text = L"Подрыв неконтактным зарядом";
			this->btnWoodNoncontact->UseVisualStyleBackColor = true;
			this->btnWoodNoncontact->Visible = false;
			this->btnWoodNoncontact->Click += gcnew System::EventHandler(this, &MainForm::btnWoodNoncontact_Click);
			// 
			// btnWoodStump
			// 
			this->btnWoodStump->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold));
			this->btnWoodStump->Location = System::Drawing::Point(15, 421);
			this->btnWoodStump->Name = L"btnWoodStump";
			this->btnWoodStump->Size = System::Drawing::Size(164, 86);
			this->btnWoodStump->TabIndex = 13;
			this->btnWoodStump->Text = L"Корчевка пня";
			this->btnWoodStump->UseVisualStyleBackColor = true;
			this->btnWoodStump->Visible = false;
			this->btnWoodStump->Click += gcnew System::EventHandler(this, &MainForm::btnWoodStump_Click);
			// 
			// steel_group
			// 
			this->steel_group->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->steel_group->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->steel_group->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->steel_group->Location = System::Drawing::Point(5, 513);
			this->steel_group->Name = L"steel_group";
			this->steel_group->Size = System::Drawing::Size(174, 44);
			this->steel_group->TabIndex = 2;
			this->steel_group->Text = L"Сталь";
			this->steel_group->UseVisualStyleBackColor = false;
			this->steel_group->Click += gcnew System::EventHandler(this, &MainForm::steel_group_Click);
			// 
			// btnSteelPlate
			// 
			this->btnSteelPlate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold));
			this->btnSteelPlate->Location = System::Drawing::Point(15, 563);
			this->btnSteelPlate->Name = L"btnSteelPlate";
			this->btnSteelPlate->Size = System::Drawing::Size(164, 86);
			this->btnSteelPlate->TabIndex = 14;
			this->btnSteelPlate->Text = L"Стальные листы";
			this->btnSteelPlate->UseVisualStyleBackColor = true;
			this->btnSteelPlate->Visible = false;
			this->btnSteelPlate->Click += gcnew System::EventHandler(this, &MainForm::btnSteelPlate_Click);
			// 
			// btnSteelBalk
			// 
			this->btnSteelBalk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold));
			this->btnSteelBalk->Location = System::Drawing::Point(15, 655);
			this->btnSteelBalk->Name = L"btnSteelBalk";
			this->btnSteelBalk->Size = System::Drawing::Size(164, 86);
			this->btnSteelBalk->TabIndex = 15;
			this->btnSteelBalk->Text = L"Стальные балки";
			this->btnSteelBalk->UseVisualStyleBackColor = true;
			this->btnSteelBalk->Visible = false;
			this->btnSteelBalk->Click += gcnew System::EventHandler(this, &MainForm::btnSteelBalk_Click);
			// 
			// btnSteelTube
			// 
			this->btnSteelTube->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold));
			this->btnSteelTube->Location = System::Drawing::Point(15, 747);
			this->btnSteelTube->Name = L"btnSteelTube";
			this->btnSteelTube->Size = System::Drawing::Size(164, 86);
			this->btnSteelTube->TabIndex = 16;
			this->btnSteelTube->Text = L"Стальные трубы";
			this->btnSteelTube->UseVisualStyleBackColor = true;
			this->btnSteelTube->Visible = false;
			this->btnSteelTube->Click += gcnew System::EventHandler(this, &MainForm::btnSteelTube_Click);
			// 
			// btnSteelRod
			// 
			this->btnSteelRod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold));
			this->btnSteelRod->Location = System::Drawing::Point(15, 839);
			this->btnSteelRod->Name = L"btnSteelRod";
			this->btnSteelRod->Size = System::Drawing::Size(164, 86);
			this->btnSteelRod->TabIndex = 17;
			this->btnSteelRod->Text = L"Стальные стержни";
			this->btnSteelRod->UseVisualStyleBackColor = true;
			this->btnSteelRod->Visible = false;
			this->btnSteelRod->Click += gcnew System::EventHandler(this, &MainForm::btnSteelRod_Click);
			// 
			// btnSteelCable
			// 
			this->btnSteelCable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold));
			this->btnSteelCable->Location = System::Drawing::Point(15, 931);
			this->btnSteelCable->Name = L"btnSteelCable";
			this->btnSteelCable->Size = System::Drawing::Size(164, 86);
			this->btnSteelCable->TabIndex = 18;
			this->btnSteelCable->Text = L"Стальные тросы";
			this->btnSteelCable->UseVisualStyleBackColor = true;
			this->btnSteelCable->Visible = false;
			this->btnSteelCable->Click += gcnew System::EventHandler(this, &MainForm::btnSteelCable_Click);
			// 
			// btnSteelBar
			// 
			this->btnSteelBar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold));
			this->btnSteelBar->Location = System::Drawing::Point(15, 1023);
			this->btnSteelBar->Name = L"btnSteelBar";
			this->btnSteelBar->Size = System::Drawing::Size(164, 86);
			this->btnSteelBar->TabIndex = 19;
			this->btnSteelBar->Text = L"Стальные бруски";
			this->btnSteelBar->UseVisualStyleBackColor = true;
			this->btnSteelBar->Visible = false;
			this->btnSteelBar->Click += gcnew System::EventHandler(this, &MainForm::btnSteelBar_Click);
			// 
			// monolith_group
			// 
			this->monolith_group->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->monolith_group->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->monolith_group->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->monolith_group->Location = System::Drawing::Point(5, 1115);
			this->monolith_group->Name = L"monolith_group";
			this->monolith_group->Size = System::Drawing::Size(174, 44);
			this->monolith_group->TabIndex = 20;
			this->monolith_group->Text = L"Элементы конструкций";
			this->monolith_group->UseVisualStyleBackColor = false;
			this->monolith_group->Click += gcnew System::EventHandler(this, &MainForm::monolith_group_Click);
			// 
			// btnMonolithColumn
			// 
			this->btnMonolithColumn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold));
			this->btnMonolithColumn->Location = System::Drawing::Point(15, 1165);
			this->btnMonolithColumn->Name = L"btnMonolithColumn";
			this->btnMonolithColumn->Size = System::Drawing::Size(164, 86);
			this->btnMonolithColumn->TabIndex = 21;
			this->btnMonolithColumn->Text = L"Колонны, столбы, балки, плиты";
			this->btnMonolithColumn->UseVisualStyleBackColor = true;
			this->btnMonolithColumn->Visible = false;
			this->btnMonolithColumn->Click += gcnew System::EventHandler(this, &MainForm::btnMonolithColumn_Click);
			// 
			// btnMonolithSpur
			// 
			this->btnMonolithSpur->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold));
			this->btnMonolithSpur->Location = System::Drawing::Point(15, 1257);
			this->btnMonolithSpur->Name = L"btnMonolithSpur";
			this->btnMonolithSpur->Size = System::Drawing::Size(164, 86);
			this->btnMonolithSpur->TabIndex = 23;
			this->btnMonolithSpur->Text = L"Шпуровый заряд";
			this->btnMonolithSpur->UseVisualStyleBackColor = true;
			this->btnMonolithSpur->Visible = false;
			this->btnMonolithSpur->Click += gcnew System::EventHandler(this, &MainForm::btnMonolithSpur_Click);
			// 
			// btnMonolithNoncontact
			// 
			this->btnMonolithNoncontact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold));
			this->btnMonolithNoncontact->Location = System::Drawing::Point(15, 1349);
			this->btnMonolithNoncontact->Name = L"btnMonolithNoncontact";
			this->btnMonolithNoncontact->Size = System::Drawing::Size(164, 86);
			this->btnMonolithNoncontact->TabIndex = 24;
			this->btnMonolithNoncontact->Text = L"Неконтактный заряд";
			this->btnMonolithNoncontact->UseVisualStyleBackColor = true;
			this->btnMonolithNoncontact->Visible = false;
			this->btnMonolithNoncontact->Click += gcnew System::EventHandler(this, &MainForm::btnMonolithNoncontact_Click);
			// 
			// MainForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->ClientSize = System::Drawing::Size(919, 666);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->panel1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(935, 630);
			this->Name = L"MainForm";
			this->Text = L"Недотрога: Расчет заряда";
			this->SizeChanged += gcnew System::EventHandler(this, &MainForm::MainForm_SizeChanged);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	
		private:
			IZNT::Wood1^ Wood1;
			IZNT::Balk1^ Balk1;
			IZNT::WoodTwoBalk^ WoodTwoBalk;
			IZNT::WoodNoncontact^ WoodNoncontact;
			IZNT::WoodStump^ WoodStump;
			IZNT::SteelSheets^ SteelSheets;
			IZNT::SteelTube^ SteelTube;
			IZNT::SteelRod^ SteelRod;
			IZNT::SteelCable^ SteelCable;
			IZNT::MonolithColumn^ MonolithColumn;
			IZNT::MonolithSpur^ MonolithSpur;
			IZNT::MonolithNoncontact^ MonolithNoncontact;
			IZNT::SteelBar^ SteelBar;
			IZNT::SteelBeam^ SteelBeam;


private: System::Void wood_group_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void steel_group_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void monolith_group_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void btnWood_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnWoodBalk_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnWoodTwoBalk_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnWoodNoncontact_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnWoodStump_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void btnSteelPlate_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnSteelTube_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnSteelRod_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnSteelCable_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnSteelBar_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnSteelBalk_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void btnMonolithColumn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnMonolithSpur_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnMonolithNoncontact_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void MainForm_SizeChanged(System::Object^ sender, System::EventArgs^ e);
};
}
