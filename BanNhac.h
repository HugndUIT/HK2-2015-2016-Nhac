#include "KyHieu.h"
#include "NotNhac.h"
#include "DauLang.h"

#pragma once

class BanNhac
{
private:
	int SoLuong;
	KyHieu* DanhSach[100];
public:
	void SoanNhac();
	void NotNhacCaoNhat();
	double SoDauLangDen();
};