#include "NotNhac.h"

void NotNhac::Nhap() {
	KyHieu::Nhap();
	cout << "Nhap cao do: ";
	cin >> CaoDo;
}

void NotNhac::Xuat() {
	cout << CharToString(CaoDo) << " ";
	KyHieu::Xuat();
}

int NotNhac::GetCaoDo() {
	return QuyDoi(CaoDo);
}

string CharToString(char CaoDo) {
	if (CaoDo == 'A') 
		return "La";
	else if (CaoDo == 'C') 
		return "Do";
	else if (CaoDo == 'D') 
		return "Re";
	else if (CaoDo == 'E') 
		return "Mi";
	else if (CaoDo == 'F') 
		return "Fa";
	else if (CaoDo == 'G') 
		return "Sol";
	else 
		return "Si";
}

int QuyDoi(char CaoDo) {
	if (CaoDo == 'C')
		return 7;
	else if (CaoDo == 'D')
		return 6;
	else if (CaoDo == 'E')
		return 5;
	else if (CaoDo == 'F')
		return 4;
	else if (CaoDo == 'G')
		return 3;
	else if (CaoDo == 'A')
		return 2;
	else
		return 1;
}