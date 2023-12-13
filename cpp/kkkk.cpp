#include<iostream>
#include<string.h>
#include<cstring>
#include<iomanip>
using namespace std;
 struct san_pham
 {
  char masp[15];
  char tensp[30];
  int sl;
  float dongia; 
 };
 void nhapthongtin(san_pham sp[] , int n){
  for ( int i = 0 ;i < n ; i++){
  cout << " Nhap san pham thu " << i + 1 << endl;
  fflush(stdin);
  cout << " Nhap ma san pham :";
  cin.getline(sp[i].masp,15);
  cout << " Nhap ten san pham :";
  cin.getline(sp[i].tensp,30);
  fflush(stdin);
  cout << " Nhap so luong :";
  cin >>sp[i].sl;
  cout << " Nhap don gia :";
  cin >>sp[i].dongia;
  }
 }
 void xuatthongtin(san_pham sp[] , int n){
  cout << left << setw(15) << "MA SAN PHAM";
  cout << setw(30) << "TEN SAN PHAM";
  cout << setw(15) << "SO LUONG";
  cout << setw(15) << "DON GIA" << endl;
  for ( int i = 0 ; i < n ; i++){
  cout<< left << setw(15) << sp[i].masp;
  cout << setw(30) << sp[i].tensp;
  cout << setw(15) << sp[i].sl;
  cout << setw(15) << sp[i].dongia<< endl;
  }
 }
//
// char <ten_xau>[kich_thuoc_cua_xau];
// char <ten_xau>[kich_thuoc_cua_xau]= " xau_khoi_tao";
// char <ten_xau>[]="xau_khoi_tao";
//+) strlen : do dai cua xau
//+) strcpy : sao chep 1 phan cua xau
//+) strlwr/strupr : bien chu thuong thanh chu hoa
//+) strcmp : so sanh hai xau
//+) strcat : noi hai xau vs nhau
//+) strstr : tim vi tri cua xau nay trong xau kia
//+) strdup : tao ban sao 
//+) strrev : dao nguoc xau


int main(){
 
 int n;
 cout << " Nhap so luong n la :";
 cin >> n;
 san_pham sp[n];
 cout << "-------------------NHAP THONG TIN-----------------------" << endl;
 nhapthongtin(sp,n);
 cout << " ------------------XUAT THONG TIN----------------------" << endl;
 xuatthongtin(sp,n);
 //ham tinh do dai xau
 char s[] = " Tin co so A ";
 int len = strlen(s);
 size_t* strlen ( const char *s);

//ham so chep xau
 char s[100];
 strcpy(s," tin co so ben a");
 char *strcpy( char dest[] , const char src[]);
 
 
//ham dao nguoc xau
 char s[] = " tin co so a ";
 strrev(s);
 puts(s); // a os oc nit
 char *strrev( char *s); 

//ham so sanh hai xau 
 char s1[] = " Mot ";
 char s2[] = " 1 ";
 < 0 neu s1 < s2
 ==0 neu s1 == s2
 > 0 neu s1 > s2
 if ( strcmp(s1 ,s2) < 0){
  cout << " xau 1 nho hon xau 2"<<endl;
 }else if ( strcmp(s1 ,s2)>0){
  cout << " Xau 1 lon hon xau 2"<< endl;
 }else{
  cout <<" Hai xau bang nhau " << endl;
 }


//ham noi hai xau 
 char *strcat ( char *dest , const char *src)
 char s1[100] = " Tin hoc";
 char s2[] = " co so a";
 strcat(s1," "); //Tin hoc
 strcat(s2, " "); //co so A
 strcat(s1,s2); // Tin hoc co so A


//ham tim xau trong xau
 const char *s1 = "Tin hoc hheehe";
 const char *s2 = "hoc";
 const char *found = strstr(s1,s2);
 if ( found != NULL){
  cout << " Xau tim thay tai vi tri :" << found  << endl;
 }else{
  cout << " Xau khong tim thay " << endl;
 }

 char str[] = "tin hoc heheh";
   char substr[] = "hoc";

  
  char* pos = strstr(str, substr);

  if (pos != NULL) {
   cout << "Xau con world dc tim thay o vi tri : " << pos << endl;
  } else {
    cout << "Xau con ko dc tim thay!!!" << endl;
  }
  
  //bai 1
  char s[50];
  int n;
  cout << " Nhap xau :";
  cin.getline(s,50);
  n = strlen(s);
  cout << " Xau da nhap la :" << s << endl;
  cout << " Xau dao nguoc la :" << endl;
  for ( int i = n - 1 ; i >= 0 ; i--){
   cout << s[i];
   cout << endl;
  }

 return 0;
}
