#include "TruongDo.hpp"

#pragma once

class CaoDo {
    private:
        string KyHieu, Not;
        double DoCao;
    public:
        void Nhap();
        string GetNot();
        double GetDoCao();
};