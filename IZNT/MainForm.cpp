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
        btnWoodPack->Visible = true;
        btnWoodUnderwater->Visible = true;
        btnWoodNoncontact->Visible = true;
        btnWoodNoncontactUnderwater->Visible = true;
    }
    else {
        btnWood->Visible = false;
        btnWoodBalk->Visible = false;
        btnWoodTwoBalk->Visible = false;
        btnWoodPack->Visible = false;
        btnWoodUnderwater->Visible = false;
        btnWoodNoncontact->Visible = false;
        btnWoodNoncontactUnderwater->Visible = false;
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
        btnWoodPack->Visible = false;
        btnWoodUnderwater->Visible = false;
        btnWoodNoncontact->Visible = false;
        btnWoodNoncontactUnderwater->Visible = false;
    }

}

inline System::Void IZNT::MainForm::btnWood_Click(System::Object^ sender, System::EventArgs^ e) {
    SetForm(panel1, gcnew IZNT::Wood1());

}

inline System::Void IZNT::MainForm::btnWoodBalk_Click(System::Object^ sender, System::EventArgs^ e) {
    SetForm(panel1, gcnew IZNT::Balk1());
}


