#include "ExRecalc.h"

float recalculation(System::Windows::Forms::ComboBox^ explosive_material_comboBox, System::Windows::Forms::TextBox^ answer_textBox, float answer) {
    answer /= ExCoef[explosive_material_comboBox->SelectedIndex];
    answer = ceil(answer);
    return answer;
}
