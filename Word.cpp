
#include "Word.h"
#include<iostream>
#include<iomanip>
#include <string>
#pragma once
using namespace std;

	void Word::VOCAInit() 
	{
		system("cls");
		int count = 0;
		ID = count++;
		cout << "Tu vung thu " << ID + 1 << "la: " << endl;
		cout << "Nhap tu nghia tieng anh: " << endl;
		cin >> ENG; 
		cout << "Nhap tu tieng viet: " << endl;
		cin >> VIET;
		cout << "Nhap loai tu theo so cho san: " << endl;
		cout << "(1): Danh tu" << setw(5) << "(2): Dong tu" << endl << "(3): Tinh tu" << setw(5) << "(4): Trang tu" << endl;
		cin >> Type;

	};


	void Word::VOCAShow()
	{
		cout << "Tu vung thu " << ID + 1 << "la: " << ENG << endl;
		cout << "Nghia tieng viet la: " << VIET << endl;
		switch (Type)
		{
		case 1:
		{
			cout << "Tu nay la Danh tu." << endl;
			break;
		}
		case 2:
		{
			cout << "Tu nay la Dong tu." << endl;
			break;
		}
		case 3:
		{
			cout << "Tu nay la Tinh tu." << endl;
			break;
		}
		case 4:
		{
			cout << "Tu nay la Trang tu." << endl;
			break;
		}
		default:
		{
			cout << "Nhap lai loai tu." << endl;
		}
		}
		cin >> Type;
	}
#pragma endregion
