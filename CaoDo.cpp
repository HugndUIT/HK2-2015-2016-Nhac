#include "CaoDo.hpp"

#pragma once

void CaoDo::Nhap() {
    getline(cin, KyHieu);
    if (KyHieu == "C") {
        Not = "Do";
        DoCao = 1;
    } else if (KyHieu == "D") {
        Not = "Re";
        DoCao = 2;
    } else if (KyHieu == "E") {
        Not = "Mi";
        DoCao = 3;
    } else if (KyHieu == "F") {
        Not = "Fa";
        DoCao = 4;
    } else if (KyHieu == "G") {
        Not = "Sol";
        DoCao = 5;
    } else if (KyHieu == "A") {
        Not = "La";
        DoCao = 6;
    } else if (KyHieu == "B") {
        Not = "Si";
        DoCao = 7;
    } else {
        Not = "Dau lang";
        DoCao = 0;
    }
}

string CaoDo::GetNot() {
    return Not;
}

double CaoDo::GetDoCao() {
    return DoCao;
}