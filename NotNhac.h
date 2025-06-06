#include "KyHieu.h"

#pragma once

class NotNhac : public KyHieu
{
private:
	char CaoDo;
public:
	void Nhap();
	void Xuat();
	int GetCaoDo();
};

int QuyDoi(char);

string CharToString(char);