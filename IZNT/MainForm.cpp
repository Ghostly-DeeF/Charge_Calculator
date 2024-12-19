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
        btnSteelBar->Visible = false;
    }

    if (btnMonolithColumn->Visible == true) {
        btnMonolithColumn->Visible = false;
        btnMonolithSpur->Visible = false;
        btnMonolithNoncontact->Visible = false;
    }

}

inline System::Void IZNT::MainForm::steel_group_Click(System::Object^ sender, System::EventArgs^ e) {
    if (btnSteelPlate->Visible == false) {
        btnSteelPlate->Visible = true;
        btnSteelBalk->Visible = true;
        btnSteelTube->Visible = true;
        btnSteelRod->Visible = true;
        btnSteelCable->Visible = true;
        btnSteelBar->Visible = true;
    }
    else {
        btnSteelPlate->Visible = false;
        btnSteelBalk->Visible = false;
        btnSteelTube->Visible = false;
        btnSteelRod->Visible = false;
        btnSteelCable->Visible = false;
        btnSteelBar->Visible = false;
    }

    if (btnWood->Visible == true) {
        btnWood->Visible = false;
        btnWoodBalk->Visible = false;
        btnWoodTwoBalk->Visible = false;
        btnWoodStump->Visible = false;
        btnWoodNoncontact->Visible = false;
    }

    if (btnMonolithColumn->Visible == true) {
        btnMonolithColumn->Visible = false;
        btnMonolithSpur->Visible = false;
        btnMonolithNoncontact->Visible = false;
    }

}

inline System::Void IZNT::MainForm::monolith_group_Click(System::Object^ sender, System::EventArgs^ e) {
    if (btnMonolithColumn->Visible == false) {
        btnMonolithColumn->Visible = true;
        btnMonolithSpur->Visible = true;
        btnMonolithNoncontact->Visible = true;
    }
    else {
        btnMonolithColumn->Visible = false;
        btnMonolithSpur->Visible = false;
        btnMonolithNoncontact->Visible = false;
    }

    if (btnSteelPlate->Visible == true) {
        btnSteelBalk->Visible = false;
        btnSteelPlate->Visible = false;
        btnSteelTube->Visible = false;
        btnSteelRod->Visible = false;
        btnSteelCable->Visible = false;
        btnSteelBar->Visible = false;
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
    Wood1 = gcnew IZNT::Wood1();
    Wood1->Size = this->panel1->Size - System::Drawing::Size(199, 0);
    SetForm(panel1, Wood1);
    selected_panel = 1;
}

inline System::Void IZNT::MainForm::btnWoodBalk_Click(System::Object^ sender, System::EventArgs^ e) {
    Balk1 = gcnew IZNT::Balk1();
    Balk1->Size = this->panel1->Size - System::Drawing::Size(199, 0);
    SetForm(panel1, Balk1);
    selected_panel = 2;
}

inline System::Void IZNT::MainForm::btnWoodTwoBalk_Click(System::Object^ sender, System::EventArgs^ e) {
    WoodTwoBalk = gcnew IZNT::WoodTwoBalk();
    WoodTwoBalk->Size = this->panel1->Size - System::Drawing::Size(199, 0);
    SetForm(panel1, WoodTwoBalk);
    selected_panel = 3;
}

inline System::Void IZNT::MainForm::btnWoodNoncontact_Click(System::Object^ sender, System::EventArgs^ e) {
    WoodNoncontact = gcnew IZNT::WoodNoncontact();
    WoodNoncontact->Size = this->panel1->Size - System::Drawing::Size(199, 0);
    SetForm(panel1, WoodNoncontact);
    selected_panel = 4;
}

inline System::Void IZNT::MainForm::btnWoodStump_Click(System::Object^ sender, System::EventArgs^ e) {
    WoodStump = gcnew IZNT::WoodStump();
    WoodStump->Size = this->panel1->Size - System::Drawing::Size(199, 0);
    SetForm(panel1, WoodStump);
    selected_panel = 5;
}

inline System::Void IZNT::MainForm::btnSteelPlate_Click(System::Object^ sender, System::EventArgs^ e) {
    SteelSheets = gcnew IZNT::SteelSheets();
    SteelSheets->Size = this->panel1->Size - System::Drawing::Size(199, 0);
    SetForm(panel1, SteelSheets);
    selected_panel = 6;
}

inline System::Void IZNT::MainForm::btnSteelTube_Click(System::Object^ sender, System::EventArgs^ e) {
    SteelTube = gcnew IZNT::SteelTube();
    SteelTube->Size = this->panel1->Size - System::Drawing::Size(199, 0);
    SetForm(panel1, SteelTube);
    selected_panel = 7;
}

inline System::Void IZNT::MainForm::btnSteelRod_Click(System::Object^ sender, System::EventArgs^ e) {
    SteelRod = gcnew IZNT::SteelRod();
    SteelRod->Size = this->panel1->Size - System::Drawing::Size(199, 0);
    SetForm(panel1, SteelRod);
    selected_panel = 8;
}

inline System::Void IZNT::MainForm::btnSteelCable_Click(System::Object^ sender, System::EventArgs^ e) {
    SteelCable = gcnew IZNT::SteelCable();
    SteelCable->Size = this->panel1->Size - System::Drawing::Size(199, 0);
    SetForm(panel1, SteelCable);
    selected_panel = 9;
}

inline System::Void IZNT::MainForm::btnMonolithColumn_Click(System::Object^ sender, System::EventArgs^ e) {
    MonolithColumn = gcnew IZNT::MonolithColumn();
    MonolithColumn->Size = this->panel1->Size - System::Drawing::Size(199, 0);
    SetForm(panel1, MonolithColumn);
    selected_panel = 10;
}

inline System::Void IZNT::MainForm::btnMonolithSpur_Click(System::Object^ sender, System::EventArgs^ e) {
    MonolithSpur = gcnew IZNT::MonolithSpur();
    MonolithSpur->Size = this->panel1->Size - System::Drawing::Size(199, 0);
    SetForm(panel1, MonolithSpur);
    selected_panel = 11;
}

inline System::Void IZNT::MainForm::btnMonolithNoncontact_Click(System::Object^ sender, System::EventArgs^ e) {
    MonolithNoncontact = gcnew IZNT::MonolithNoncontact();
    MonolithNoncontact->Size = this->panel1->Size - System::Drawing::Size(199, 0);
    SetForm(panel1, MonolithNoncontact);
    selected_panel = 12;
}

inline System::Void IZNT::MainForm::btnSteelBar_Click(System::Object^ sender, System::EventArgs^ e) {
    SteelBar = gcnew IZNT::SteelBar();
    SteelBar->Size = this->panel1->Size - System::Drawing::Size(199, 0);
    SetForm(panel1, SteelBar);
    selected_panel = 13;
}

inline System::Void IZNT::MainForm::btnSteelBalk_Click(System::Object^ sender, System::EventArgs^ e) {
    SteelBeam = gcnew IZNT::SteelBeam();
    SteelBeam->Size = this->panel1->Size - System::Drawing::Size(199, 0);
    SetForm(panel1, SteelBeam);
    selected_panel = 14;
}

inline System::Void IZNT::MainForm::MainForm_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
    switch (selected_panel)
    {
    case 1:
        Wood1->Size = this->panel1->Size - System::Drawing::Size(199, 0);
        break;

    case 2:
        Balk1->Size = this->panel1->Size - System::Drawing::Size(199, 0);
        break;

    case 3:
        WoodTwoBalk->Size = this->panel1->Size - System::Drawing::Size(199, 0);
        break;

    case 4:
        WoodNoncontact->Size = this->panel1->Size - System::Drawing::Size(199, 0);
        break;

    case 5:
        WoodStump->Size = this->panel1->Size - System::Drawing::Size(199, 0);
        break;

    case 6:
        SteelSheets->Size = this->panel1->Size - System::Drawing::Size(199, 0);
        break;

    case 7:
        SteelTube->Size = this->panel1->Size - System::Drawing::Size(199, 0);
        break;

    case 8:
        SteelRod->Size = this->panel1->Size - System::Drawing::Size(199, 0);
        break;

    case 9:
        SteelCable->Size = this->panel1->Size - System::Drawing::Size(199, 0);
        break;
    case 10:
        MonolithColumn->Size = this->panel1->Size - System::Drawing::Size(199, 0);
        break;

    case 11:
        MonolithSpur->Size = this->panel1->Size - System::Drawing::Size(199, 0);
        break;

    case 12:
        MonolithNoncontact->Size = this->panel1->Size - System::Drawing::Size(199, 0);
        break;
    case 13:
        SteelBar->Size = this->panel1->Size - System::Drawing::Size(199, 0);
        break;

    case 14:
        SteelBeam->Size = this->panel1->Size - System::Drawing::Size(199, 0);
        break;


    default:
        break;
    }
}
