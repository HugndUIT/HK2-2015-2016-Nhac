#include <map>
#include <set>
#include <cmath>
#include <string>
#include <vector>
#include <climits>
#include <iomanip>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

#pragma once

class TruongDo {
    private:
        string Phach, HinhNot;
    public:
        void Nhap();
        string GetHinhNot();
        string GetPhach();
};