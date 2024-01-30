#include <iostream>
#include <iomanip>
using namespace std;

struct sinhvien{
	char msv[30];
	char ht[30];
	char qq[30];
	float dlt;
	float dth; 
}; 
void nhap(sinhvien a[], int n){
	for (int i=0; i<n; i++){
		cout<<"Nhap vao thong tin sinh vien thu: "<<i+1<<endl;
		cin.ignore(); 
		cout<<"Nhap vao ma sinh vien: "; cin.getline(a[i].msv,10);
		fflush(stdin);
		cout<<"Nhap vao ten sinh vien: "; cin.getline(a[i].ht,30);
		fflush(stdin);
		cout<<"Nhap vao que quan sinh vien: "; cin.getline(a[i].qq,30);
		fflush(stdin);
		cout<<"Nhap vao diem ly thuyet: "; cin>>a[i].dlt;
		cout<<"Nhap vao diem thuc hanh: "; cin>>a[i].dth;
		cout<<endl;    
	} 
} 
void tieude(){
		cout<<setw(20)<<"MA SINH VIEN";
		cout<<setw(15)<<"HO TEN";	 
		cout<<setw(15)<<"QUE QUAN";
		cout<<setw(15)<<"DIEM LY THUYET";
		cout<<setw(15)<<"DIEM THUC HANH";
		cout<<endl; 
} 
void xuat(sinhvien a[], int n){
	tieude();
	for (int i=0; i<n ;i++){
		cout<<setw(20)<<a[i].msv; 
		cout<<setw(15)<<a[i].ht; 
		cout<<setw(15)<<a[i].qq; 
		cout<<setw(15)<<a[i].dlt; 
		cout<<setw(15)<<a[i].dth;
		cout<<endl; 
	} 
} 
void sapxep(sinhvien a[], int n){
	double max=a[0].dth, min=a[0].dth;
	for (int i=1; i<n;i++){
		if (min>a[i].dth)
			min=a[i].dth; 
	}
	int j=0;
	cout<<"Diem thuc hanh thap nhat lop: "<<endl; 
	for (int i=0; i<n; i++){
		if (a[i].dth==min){
			cout<<"#"<<j+1<<endl;
			cout<<a[i].ht<<" "<<endl;
			cout<<"Ma sinh vien: "<<a[i].msv<<endl; 
			j++; 
		} 
	}
} 
void truot(sinhvien a[], int n){
	for (int i=0; i<n; i++){
	if (a[i].dlt<5){
		cout<<"Sinh vien truot mon"; 
		cout<<a[i].ht<<endl;
		cout<<"Ma sinh vien: "<<a[i].msv<<" truot mon roi :333 "; 
	} 
} 
}
int main(){
	sinhvien a[100];
	int n;
	cout<<"Nhap vao so luong sinh vien: "; cin>>n;
	cout<<"--------------------------NHAP THONG TIN-------------------"<<endl;
	nhap(a,n);
	cout<<"--------------------------XUAT THONG TIN-------------------"<<endl; 
	xuat(a,n); 
	sapxep(a,n);
	truot(a,n); 
}