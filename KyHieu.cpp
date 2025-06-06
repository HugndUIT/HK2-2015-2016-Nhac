#include "KyHieu.h"

void KyHieu::Nhap() {
	cout << "Nhap truong do: ";
	cin >> TruongDo;
}

void KyHieu::Xuat() {
	if (TruongDo == "1")
		cout << "den\n";
	else if (TruongDo == "1/2")
		cout << "moc don\n";
	else if (TruongDo == "1/4")
		cout << "moc doi\n";
	else if (TruongDo == "1/8")
		cout << "moc tam\n";
	else if (TruongDo == "1/16")
		cout << "moc tu\n";
	else if (TruongDo == "2")
		cout << "trang\n";
	else
		cout << "tron\n";
}

bool KyHieu::IsDauLangDen() {
	return false;
}

int KyHieu::GetCaoDo() {
	return 0;
}