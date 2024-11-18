#include "MainForm.h"


IZNT::MainForm::MainForm(void)
{
    InitializeComponent();

    SetForm(panel1, gcnew IZNT::HelloPanel());

}

void IZNT::MainForm::SetForm(System::Windows::Forms::Panel^ panel, System::Windows::Forms::Control^ form)
{
    panel->Controls->Clear();
    panel->Controls->Add(form);
}



IZNT::MainForm::~MainForm()
{
    if (components)
    {
        delete components;
    }
}

inline System::Void IZNT::MainForm::wood_group_Click(System::Object^ sender, System::EventArgs^ e) {
    if (btnWood->Visible == false) {
        btnWood->Visible = true;
        btnWoodBalk->Visible = true;
        btnWoodTwoBalk->Visible = true;
        btnWoodStump->Visible = true;
        btnWoodNoncontact->Visible = true;
    }
    else {
        btnWood->Visible = false;
        btnWoodBalk->Visible = false;
        btnWoodTwoBalk->Visible = false;
        btnWoodStump->Visible = false;
        btnWoodNoncontact->Visible = false;
    }

    if (btnSteelPlate->Visible == true) {
        btnSteelBalk->Visible = false;
        btnSteelPlate->Visible = false;
        btnSteelTube->Visible = false;
        btnSteelRod->Visible = false;
        btnSteelCable->Visible = false;
    }

}

inline System::Void IZNT::MainForm::steel_group_Click(System::Object^ sender, System::EventArgs^ e) {
    if (btnSteelPlate->Visible == false) {
        btnSteelPlate->Visible = true;
        btnSteelBalk->Visible = true;
        btnSteelTube->Visible = true;
        btnSteelRod->Visible = true;
        btnSteelCable->Visible = true;
    }
    else {
        btnSteelPlate->Visible = false;
        btnSteelBalk->Visible = false;
        btnSteelTube->Visible = false;
        btnSteelRod->Visible = false;
        btnSteelCable->Visible = false;
    }

    if (btnWood->Visible == true) {
        btnWood->Visible = false;
        btnWoodBalk->Visible = false;
        btnWoodTwoBalk->Visible = false;
        btnWoodStump->Visible = false;
        btnWoodNoncontact->Visible = false;
    }

}

inline System::Void IZNT::MainForm::btnWood_Click(System::Object^ sender, System::EventArgs^ e) {
    SetForm(panel1, gcnew IZNT::Wood1());

}

inline System::Void IZNT::MainForm::btnWoodBalk_Click(System::Object^ sender, System::EventArgs^ e) {
    SetForm(panel1, gcnew IZNT::Balk1());
}

inline System::Void IZNT::MainForm::btnWoodTwoBalk_Click(System::Object^ sender, System::EventArgs^ e) {
    SetForm(panel1, gcnew IZNT::WoodTwoBalk());
}

inline System::Void IZNT::MainForm::btnWoodNoncontact_Click(System::Object^ sender, System::EventArgs^ e) {
    SetForm(panel1, gcnew IZNT::WoodNoncontact());
}

inline System::Void IZNT::MainForm::btnWoodStump_Click(System::Object^ sender, System::EventArgs^ e) {
    SetForm(panel1, gcnew IZNT::WoodStump());
}

inline System::Void IZNT::MainForm::btnSteelTube_Click(System::Object^ sender, System::EventArgs^ e) {
    SetForm(panel1, gcnew IZNT::SteelTube());
}

inline System::Void IZNT::MainForm::btnSteelRod_Click(System::Object^ sender, System::EventArgs^ e) {
    SetForm(panel1, gcnew IZNT::SteelRod());
}

inline System::Void IZNT::MainForm::btnSteelCable_Click(System::Object^ sender, System::EventArgs^ e) {
    SetForm(panel1, gcnew IZNT::SteelCable());
}

