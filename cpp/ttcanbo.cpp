#include <iostream>
using namespace std;
 
void nhap(){
	char macb[100];
	char tencb[100];
	float hsl;
	char chucvu[100];
	float phucap;
	float luong;
	bool gt; 
	cout<<"Nhap ma can bo: ";cin.getline(macb,100);
	cout<<"Nhap ten can bo: ";cin.getline(tencb,100);
	cout<<"Nhap he so luong: ";cin>>hsl;
	fflush(stdin);
	cout<<"Nhap chuc vu: ";cin.getline(chucvu,100);
	cout<<"Nhap phu cap: ";cin>>phucap; 
	cout<<"Nhap luong: ";cin>>luong; 
	cout<<"Gioi tinh(1.Nam || 2.Nu)";
	cin>>gt; 
} 

void xuat(){
		char macb[100];
	char tencb[100];
	float hsl;
	char chucvu[100];
	float phucap;
	float luong;
	bool gt; 
	cout<<"MA CAN BO: "<<macb<<endl;
	cout<<"TEN CAN BO: "<<tencb<<endl;
	cout<<"HE SO LUONG: "<<hsl<<endl;
	cout<<"CHUC VU: "<<chucvu<<endl;
	cout<<"PHU CAP: "<<phucap<<endl;
	cout<<"LUONG: "<<luong<<endl; 
	cout<<"Gioi tinh: ";
	if(gt==1){
		cout <<"Nam";
	}
	else
	{
		cout <<"Nu";
	}
}

int main(){
		
	nhap();
	xuat(); 
	cout<<endl;
	return 0; 
}
