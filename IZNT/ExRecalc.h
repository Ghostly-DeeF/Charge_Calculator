#pragma once
#include <cmath>
const float ExCoef[6][2]{
    {0.0f, 1.0f},
    {1.0f, 1.35f},
    {2.0f, 1.1f},
    {3.0f, 1.3f},
    {4.0f, 1.4f},
    {5.0f, 0.39f}
};


ref class ExRecalc
{
public:
    float recalc(System::Windows::Forms::ComboBox^ explosive_material_comboBox, System::Windows::Forms::TextBox^ answer_textBox,  float answer);
};

float recalculation(System::Windows::Forms::ComboBox^ explosive_material_comboBox, System::Windows::Forms::TextBox^ answer_textBox, float answer);



