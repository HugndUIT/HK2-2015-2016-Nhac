#include <iostream>
#include <string>
using namespace std;

#pragma once

class KyHieu
{
protected:
	string TruongDo;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual int GetCaoDo();
	virtual bool IsDauLangDen();
};