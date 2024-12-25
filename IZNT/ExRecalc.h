#pragma once
#include <cmath>
const float ExCoef[3]{
    {1.00f},
    {1.30f},
    {0.99f},
};

float recalculation(System::Windows::Forms::ComboBox^ explosive_material_comboBox, System::Windows::Forms::TextBox^ answer_textBox, float answer);



