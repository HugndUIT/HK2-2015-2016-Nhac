#include "BanNhac.hpp"

#pragma once

void BanNhac::SoanNhac() {
    int SoLuongNot; cin >> SoLuongNot;
    for (int i = 0; i < SoLuongNot; i++) {
        int Type; cin >> Type;
        NotNhac* Temp = nullptr;
        if (Type == 1) {
            Temp = new DauLang;
        } else {
            Temp = new NotNhac;
        }
        Temp->Nhap();
        Music.push_back(Temp);
    }
}

void BanNhac::NotCaoNhat() {
    double Max = -1;
    for (NotNhac* Temp : Music) {
        if (Temp->GetDoCao() > Max) {
            Max = Temp->GetDoCao();
        } 
    }
    for (NotNhac* Temp : Music) {
        if (Temp->GetDoCao() == Max) {
            Temp->Xuat();
        } 
    }
}

void BanNhac::DemDauLangDen() {
    double Count = 0;
    for (NotNhac* Temp : Music) {
        if (Temp->GetNot() == "Dau lang Den") {
            Count++;
        } 
    }
    cout << Count;
}