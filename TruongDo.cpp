#include "TruongDo.hpp"

#pragma once

void TruongDo::Nhap() {
    getline(cin, Phach);
    if (Phach == "1") {
        HinhNot = "Den";
    } else if (Phach == "1/2") {
        HinhNot = "Moc Don";
    } else if (Phach == "1/4") {
        HinhNot = "Moc Doi";
    } else if (Phach == "1/8") {
        HinhNot = "Moc Tam";
    } else if (Phach == "1/16") {
        HinhNot = "Moc Tu";
    } else if (Phach == "4") {
        HinhNot = "Tron";
    } else {
        HinhNot = "Trang";
    }
}

string TruongDo::GetHinhNot() {
    return HinhNot;
}

string TruongDo::GetPhach() {
    return Phach;
}