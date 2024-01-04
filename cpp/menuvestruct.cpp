#include<iostream>
#include<iomanip>
#include<string.h>

using namespace std;

struct PhanSo 
{
    int tu;
    int mau;
};

int UCLN(int a, int b) 
{
    if (b == 0)
        return a;
    return UCLN(b, a % b);
}

PhanSo RutGon(PhanSo ps) 
{
    int ucln = UCLN(ps.tu, ps.mau);
    ps.tu /= ucln;
    ps.mau /= ucln;
    return ps;
}

PhanSo Cong(PhanSo ps1, PhanSo ps2) 
{
    PhanSo ketqua;
    ketqua.tu = ps1.tu * ps2.mau + ps1.tu * ps2.mau;
    ketqua.mau = ps1.mau * ps2.mau;
    return RutGon(ketqua);
}

PhanSo Tru(PhanSo ps1, PhanSo ps2) 
{
    PhanSo ketqua;
    ketqua.tu = ps1.tu * ps2.mau - ps2.tu * ps1.mau;
    ketqua.mau = ps1.mau * ps2.mau;
    return RutGon(ketqua);
}

PhanSo Nhan(PhanSo ps1, PhanSo ps2)
{
    PhanSo ketqua;
    ketqua.tu = ps1.tu * ps2.tu;
    ketqua.mau = ps1.mau * ps2.mau;
    return RutGon(ketqua);
}

PhanSo Chia(PhanSo ps1, PhanSo ps2) 
{
    PhanSo ketqua;
    ketqua.tu = ps1.tu * ps2.mau;
    ketqua.mau = ps1.mau * ps2.tu;
    return RutGon(ketqua);
}

int SoSanhPhanSo(PhanSo ps1, PhanSo ps2) {
    ps1 = RutGon(ps1);
    ps2 = RutGon(ps2);

    int tich1 = ps1.tu * ps2.mau;
    int tich2 = ps2.tu * ps1.mau;

    if (tich1 > tich2)
        return 1;
    else if (tich1 < tich2)
        return -1;
    else
        return 0;
}

int main() 
{
    PhanSo ps1, ps2;
    cout << "Nhap tu so cua phan so a: ";
    cin >> ps1.tu;
    cout << "Nhap mau so cua phan so a: ";
    cin >> ps1.mau;
    cout << "Nhap tu so cua phan so b: ";
    cin >> ps2.tu;
    cout << "Nhap mau so cua phan so b: ";
    cin >> ps2.mau;
    int ketQua = SoSanhPhanSo(ps1, ps2);
    char chon;
   cout<<"Phan so da nhap: "<<ps1.tu<<" / "<<ps1.mau << " va " << ps2.tu << " / " << ps2.mau<<endl;
      do
    {

    PhanSo tong = Cong(ps1, ps2);
    PhanSo hieu = Tru(ps1, ps2);
    PhanSo tich = Nhan(ps1, ps2);
    PhanSo thuong = Chia(ps1, ps2);
    cout<<endl;
    cout<<"1.Tong"<<endl;
    cout<<"2.Hieu"<<endl;
    cout<<"3.Tich"<<endl;
    cout<<"4.Thuong"<<endl;	
    cout<<"5.So sanh phan so"<<endl;
	cout<<"Moi nhap lua chon: "; cin>>chon; 
	system("cls");
    switch(chon)
    {
    case '1':
    cout << "Tong hai phan so: " << tong.tu << "/" << tong.mau << endl;
    break;
    case '2':
    cout << "Hieu hai phan so: " << hieu.tu << "/" << hieu.mau << endl;
    break;
    case '3':
    cout << "Tich hai phan so: " << tich.tu << "/" << tich.mau << endl;
    break;
    case '4':
    cout << "Thuong hai phan so: " << thuong.tu << "/" << thuong.mau << endl;
    break;
    case '5':
    {
    if (ketQua == 1)
        cout << ps1.tu << "/" << ps1.mau << " > " << ps2.tu << "/" << ps2.mau;
    else if (ketQua == -1)
        cout << ps1.tu << "/" << ps1.mau << " < " << ps2.tu << "/" << ps2.mau;
    else
        cout << ps1.tu << "/" << ps1.mau << " = " << ps2.tu << "/" << ps2.mau;
    break;
    } default: cout<<"Moi chon lai: ";
}
  

} while (chon!=0);
    return 0;
}
