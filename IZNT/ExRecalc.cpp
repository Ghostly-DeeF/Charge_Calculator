#include "ExRecalc.h"

inline float ExRecalc::recalc(System::Windows::Forms::ComboBox^ explosive_material_comboBox, System::Windows::Forms::TextBox^ answer_textBox, float answer) {
    answer /= ExCoef[explosive_material_comboBox->SelectedIndex];
    answer = ceil(answer);
    return answer;
}

float recalculation(System::Windows::Forms::ComboBox^ explosive_material_comboBox, System::Windows::Forms::TextBox^ answer_textBox, float answer) {
    ExRecalc obj;
    return obj.recalc(explosive_material_comboBox, answer_textBox, answer);
}
