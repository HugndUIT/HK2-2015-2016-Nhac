#include "NotNhac.hpp"

#pragma once

void NotNhac::Nhap() {
    Pitch.Nhap();
    Length.Nhap();
    Not = Pitch.GetNot() + " " + Length.GetHinhNot();
}

void NotNhac::Xuat() {
    cout << Not;
}

string NotNhac::GetNot() {
    return Not;
}

double NotNhac::GetDoCao() {
    return Pitch.GetDoCao();
}