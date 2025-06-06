#include "BanNhac.h"

void BanNhac::SoanNhac() {
	cout << "Nhap so luong ky hieu: ";
	cin >> SoLuong;
	for (int i = 0; i < SoLuong; i++) {
		cout << "Nhap loai ky hieu: ";
		int Loai; cin >> Loai;
		if (Loai == 1)
			DanhSach[i] = new NotNhac;
		else
			DanhSach[i] = new DauLang;
		DanhSach[i]->Nhap();
	}
}

void BanNhac::NotNhacCaoNhat() {
	int Max = -1;
	KyHieu* Temp = nullptr;
	for (int i = 0; i < SoLuong; i++) {
		if (DanhSach[i]->GetCaoDo() > Max) {
			Max = DanhSach[i]->GetCaoDo();
			Temp = DanhSach[i];
		}
	}
	Temp->Xuat();
}

double BanNhac::SoDauLangDen() {
	int SoLuongDauLangDen = 0;
	for (int i = 0; i < SoLuong; i++) {
		if (DanhSach[i]->IsDauLangDen()) {
			SoLuongDauLangDen++;
		}
	}
	return SoLuongDauLangDen;
}