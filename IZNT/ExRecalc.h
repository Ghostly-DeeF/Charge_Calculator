#pragma once
#include <cmath>
const float ExCoef[6]{
    {1.0f},
    {1.35f},
    {1.1f},
    {1.3f},
    {1.4f},
    {0.39f}
};


ref class ExRecalc
{
public:
    float recalc(System::Windows::Forms::ComboBox^ explosive_material_comboBox, System::Windows::Forms::TextBox^ answer_textBox,  float answer);
};

float recalculation(System::Windows::Forms::ComboBox^ explosive_material_comboBox, System::Windows::Forms::TextBox^ answer_textBox, float answer);



