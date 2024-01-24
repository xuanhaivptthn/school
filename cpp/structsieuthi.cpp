#include<iostream>
#include<iomanip>
#include<string.h>
#include<fstream>

using namespace std;
struct sieuthi{
	int mahang;
	char ten[20];
	char dvtinh[20];
	int dongia;
	int soluong;
};
void nhap(sieuthi a[] , int n){
	for (int i=0 ; i<n ; i++){
    	cout << "[?]SIEU THI THU: "<< i+1 <<endl;
        fflush(stdin);
        cout << "Nhap ma hang: ";
        cin >> a[i].mahang;
        fflush(stdin);
        cout << "Ten hang: ";
        cin.getline(a[i].ten,20);
        fflush(stdin);
        cout << "Don vi tinh: ";
        cin.getline(a[i].dvtinh,20);
        fflush(stdin);
        cout << "Nhap don gia";
        cin >> a[i].dongia;
        cout << "Nhap so luong: ";
        cin >> a[i].soluong;

   }
}
long long thanhtien(sieuthi &a){
	return a.dongia * a.soluong;
	
}
void tieude(){
	cout << left << setw(20) << "MA HANG"
	     << setw(30) << "TEN HANG"
	     << setw(15) << "DON VI TINH"
	     << setw(15) << "DON GIA"
	     << setw(15) << "SO LUONG" 
		 <<setw(15) << "THANH TIEN" <<endl;
} 
void xuat(sieuthi a[] , int n ){
	for(int i=0; i<n ; i++){
	cout << left << setw(20) << a[i].mahang
	     << setw(30) << a[i].ten
	     << setw(15) << a[i].dvtinh
	     << setw(15) << a[i].dongia
	     << setw(15) << a[i].soluong 
		 << setw(15) << thanhtien(a[i])<<endl;
	}
}
void MAX(sieuthi a[] , int n){
	int max = thanhtien(a[0]);
	for(int i=0 ; i<n ; i++){
		if(max < thanhtien(a[i]))
		   max = thanhtien(a[i]);
	}
	for(int i=0 ; i<n ; i++){
		if(max == thanhtien(a[i])){
			cout << left << setw(20) << a[i].mahang
	             << setw(30) << a[i].ten
	             << setw(15) << a[i].dvtinh
	     		 << setw(15) << a[i].dongia
	    		 << setw(15) << a[i].soluong 
				 << setw(15) << thanhtien(a[i])<<endl;
		}
	}
	
}
void inds(sieuthi a[] , int n){
	ofstream output; // goi 1 bien onput
	output.open("sieuthi.txt" , ios::out ); //ios::out do la mo tep de ghi
	if(!output){
		cout << " Khong the luu tep!!!!!" << endl;
	}
	output << left << setw(20) << "MA HANG"
	      << setw(30) << "TEN HANG"
	      << setw(15) << "DON VI TINH"
	      << setw(15) << "DON GIA"
	      << setw(15) << "SO LUONG" 
		  <<setw(15) << "THANH TIEN" <<endl;
		 for ( int i = 0 ; i < n ; i++){ //su dung for de ghi tep do vao
		 	output << left << setw(20) << a[i].mahang
	              << setw(30) << a[i].ten
	              << setw(15) << a[i].dvtinh
	     		  << setw(15) << a[i].dongia
	    		  << setw(15) << a[i].soluong 
				  << setw(15) << thanhtien(a[i])<<endl;
 		}
 		output.close(); // dong tep
 		cout << " ---- TEP DA LUU THANH CONG------" << endl;
}
int main (){
	int luachon,n;
	sieuthi a[100];
    do{
    	cout << "------------THONG TIN CUA HANG--------------"<<endl;
    	cout <<"\n----------------MENU----------------------"<<endl;
    	cout << "\n 1. Nhap thong tin             "<<endl;
    	cout << "\n 2. Xuat thong tin             "<<endl;
    	cout << "\n 3. Tien lon nhat             "<<endl;
    	cout << "\n 4. in danh sach vao tep       "<<endl;
    	cout << "\n 5. in danh sach vao tep       "<<endl;
    	cout << "\n 6. Sap xep                    "<<endl;
    	cout << "\n 7. Thoat                      "<<endl;
    	cout <<endl;
    	cout << "Nhap lua chon cua ban: ";
    	cin >> luachon;
    	switch(luachon){
	    	case 0:break;
	    	case 1:{
	    		cout << "Nhap so mat hang: ";
				cin >> n;
				nhap(a,n);
	    		break;
	    	}
	    	case 2:{
	    		tieude();
	    		xuat(a,n);
	    		break;
	    	}
	    	case 3:{
	    		tieude();
	    		MAX(a,n);
	    		
	    		break;
	    	}
	    	case 4:{
	    		tieude();
	    		inds(a,n);
	    		break;
	    	}
	    	case 5:{
	    		break;
	    	}
	    	case 6:{
	    		break;
	    	}
	    	default : cout << "Khong co lua chon" <<endl;
	    }
    }
    while(luachon !=0);
	return 0;
}
