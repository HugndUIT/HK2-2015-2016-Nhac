#include "TruongDo.cpp"
#include "CaoDo.cpp"

#pragma once

class NotNhac {
    protected:
        TruongDo Length;
        CaoDo Pitch;
        string Not;
    public:
        void Nhap();
        void Xuat();
        string GetNot();
        double GetDoCao();
};  