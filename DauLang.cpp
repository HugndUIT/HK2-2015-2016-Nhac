#include "DauLang.h"

bool DauLang::IsDauLangDen() {
	if (TruongDo == "1")
		return true;
	return false;
}

void DauLang::Xuat() {
	cout << "Dau lang ";
	KyHieu::Xuat();
}