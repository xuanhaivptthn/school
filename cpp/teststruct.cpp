#include <iostream>
#include <iomanip>
#include <algorithm> // goi ham swap
using namespace std;

typedef struct
{
	int ma_nv;
	char ten_nv[20];
	float he_so_luong;
	float luong_co_ban;
	float phu_cap;
	float tong_luong;
}Nhan_vien;

void nhapds(Nhan_vien nv[], int n)
{
	for (int i =0; i < n; i++)
	{
		cin.ignore();
		cout <<"Nhap nhan vien thu " << i+1 <<" \n";
		cout <<"Nhap ma nhan vien: "; cin >> nv[i].ma_nv;
		cin.ignore();
		cout <<"Nhap ten nhan vien: "; cin.getline(nv[i].ten_nv, 20);
		cout <<"Nhap he so luong: "; cin >> nv[i].he_so_luong;	
		cout <<endl;
	}
}

void tinh_luong(Nhan_vien &nv)
{
	nv.luong_co_ban = nv.he_so_luong * 27500;
	nv.phu_cap = nv.luong_co_ban * 0.25;
	nv.tong_luong = nv.luong_co_ban + nv.phu_cap;
}
void tieu_de()
{
	cout <<"------------------------------DANH SACH NHAN VIEN----------------------------\n";
	cout << setw(15)<<"Ma nhan vien";
	cout << setw(20)<<"Ten nhan vien";
	cout << setw(15)<<"He so luong";
	cout << setw(15)<<"Luong co ban";
	cout << setw(15)<<"Phu cap";
	cout << setw(15)<<"Tong luong";
	cout << endl;
}

void inds(Nhan_vien nv[], int n)
{
	tieu_de();
	for (int i = 0; i < n; i++)
	{
		cout << setw(15)<< nv[i].ma_nv;
		cout <<	setw(20)<< nv[i].ten_nv;
		cout << setw(15)<< nv[i].he_so_luong;
		cout << setw(15)<< nv[i].luong_co_ban;
		cout << setw(15)<< nv[i].phu_cap;
		cout << setw(15)<< nv[i].tong_luong;
		cout << endl;
	}
}

void sap_xep(Nhan_vien nv[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i+1; j < n; j++)
		
			if (nv[i].tong_luong < nv[j].tong_luong)
			swap (nv[i], nv[j]);
		
	}
	
}
int main()
{
	Nhan_vien nv[100];
	int n;
	cout <<"Nhap so nhan vien: "; cin >> n;
	cout <<endl;
	nhapds(nv, n);
	for (int i = 0; i < n; i++)
	{
		tinh_luong (nv[i]);
	}
	sap_xep (nv, n);
	inds(nv, n);
}
