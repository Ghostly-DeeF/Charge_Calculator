#include "SteelSheets1.h"
#include <corecrt_math.h>

float answer = 0.0f;
float thickness_steel_sheets = 0.0f;
float width_steel_sheets = 0.0f;

float CalculateF() {
    return thickness_steel_sheets * width_steel_sheets;
}

int RoundThickness(float thickness) {
    return (int)ceil(thickness);
}

double CalculateTntChargeWeight() {
    float F = CalculateF();
    int rounded_thickness = RoundThickness(thickness_steel_sheets); // ��������� �������

    if (rounded_thickness <= 2) {
        return 20.0 * rounded_thickness * width_steel_sheets;
    }
    else {
        return 10.0 * rounded_thickness * width_steel_sheets; // ���������� ����������� ��������
    }
}

int CalculateTntRows()
{
    if (thickness_steel_sheets <= 2.0)
    {
        return 1;
    }
    else
    {
        return (int)ceil(thickness_steel_sheets / 2.0);
    }
}

int CalculatePlastiteThreads()
{
    if (thickness_steel_sheets <= 1.0) return 1;
    if (thickness_steel_sheets <= 1.5) return 1;
    if (thickness_steel_sheets <= 2.5) return 2;
    if (thickness_steel_sheets <= 3.5) return 3;
    if (thickness_steel_sheets <= 4.0) return 4;
    if (thickness_steel_sheets <= 4.5) return 5;
    if (thickness_steel_sheets <= 5.0) return 6;
    return -1;
}

double CalculateExtendedCumChargeWeight()
{
    return CalculateTntChargeWeight() / 2.0;
}

double CalculateConcentratedCumChargeWeight()
{
    return 2.5 * pow(thickness_steel_sheets, 3);
}

inline System::Void IZNT::SteelSheets1::calc_button_Click(System::Object^ sender, System::EventArgs^ e) {

    if (!float::TryParse(width_steel_sheets_textBox->Text, width_steel_sheets) || width_steel_sheets <= 0) {
        answer_textBox->Text = "������: �� ����������� ����� ������\r\n����� ������ ���� ������ 0\r\n������� ����� �������� ����� �������";
        return;
    }

    if (!float::TryParse(thickness_steel_sheets_textBox->Text, thickness_steel_sheets) || thickness_steel_sheets <= 0) {
        answer_textBox->Text = "������: �� ����������� ����� �������\r\n����� ������ ���� ������ 0\r\n������� ����� �������� ����� �������";
        return;
    }

    // ������������ ��� ����������� ������
    answer = CalculateTntChargeWeight();
    answer = round(answer);
    answer_textBox->Text = "������ ��� ���������� ������: " + (answer / 1000).ToString() + " ��\r\n\r\n";

    // ������������ ��� �����
    answer = ceil(answer / 200) * 200;
    answer_textBox->Text += "��� ���������� �����: " + (answer / 1000).ToString() + " ��\r\n";

    // ������������ ���������� �����
    if (((int)answer % 400 == 0)) {
        answer_textBox->Text += "��������� �����:\r\n" + floor(answer / 400).ToString() + " �� 0,4 ��\r\n\r\n���\r\n" + (floor(answer / 400) * 2).ToString() + " �� 0,2 ��";
    }
    else if ((int)answer % 400 >= 1) {
        answer_textBox->Text += "��������� �����:\r\n" + floor(answer / 400).ToString() + " �� 0,4 ��\r\n1 �� 0,2 ��\r\n\r\n���\r\n" + (floor(answer / 400) * 2).ToString() + " �� 0,2 ��";
    }
    else {
        answer_textBox->Text += "��������� �����:\r\n1 �� 0,2 ��";
    }
}
