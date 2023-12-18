#include <iostream>
#include <string.h>
#include<iomanip>
#define max 100
using namespace std;

void kitu(char str1[])
{
		int dem1 = 0, dem2 = 0;
    for (int i = 0; i<strlen(str1); i++) {
        if (str1[i] !=' ') dem1+=1;
    }
     cout<<"so ki tu cua xau 1: "<<dem1<<endl;
}

void dao(char str1[]){
	cout<<strrev(str1)<<endl;
}

bool doixung(char str1[]){
    for (int i= 0; i <= strlen(str1)/2; i++) // chay tu 0 den mot nua do dai cua xau 1
        if (str1[i] != str1[strlen(str1)-i-1]) // kiem tra xem nua xau trc co giong nua xau sau ko
            return 0; // tra ve sai 
    return 1; // tra ve dung
}

void noixau(char str1[], char str2[])
{
		strcat(str1, " "); 
	cout<<strcat(str1, str2);
}

void timvt(char str1[], char str2[])
{
	 char *pos = strstr(str1, str2);
	  if( pos != NULL)
	  {
	  	cout<<" DA TIM THAY: "<<str2;
	  }
	  else
	   cout<<" khum tim thay:333";
	   cout<<endl;
}
int main() {
	char str1[max];
	char str2[max];
    cout << "Nhap xau 1: ";
	cin.getline(str1, max);
	cout<<"moi nhap xau 2: "; 
	cin.getline(str2, max); char chon;
	do
	{
	cout<<endl;
    cout << "---------------MENU---------------" << endl;
	cout << "a. So ky tu khong tinh khoang trang trong xau" << endl;
	cout << "b. Dao nguoc xau" << endl; 
	cout << "c. Kiem tra xau doi xung" << endl;
	cout << "d. Noi hai xau"<<endl;
	cout << "e. Tim vi tri cua xau nay trong xau truoc"<<endl;
	cout << "" << endl; 
	cout << "----------------------------------" << endl; 
  
    cout<<"Nhap vao y ban muon chon: ";cin>>chon; 
	 system("cls");
    switch (chon)
    {
    	
		case 'a': 
			cout<<"Ban da chon tinh so ki tu co trong xau!"<<endl;
    		kitu(str1); 
		break;
		
		case 'b': 
			cout<<"Ban da chon dao nguoc xau!"<<endl;
			dao(str1);
			break;
		
		case 'c':
			cout<<"Ban da chon kiem tra xau doi xung!"<<endl;
			if(doixung(str1))
			cout<<"la xau doi xung"<<endl;
			else 
			cout<<"khong la xau doi xung"<<endl;
			break;
		case 'd': 
			cout<<"Ban da chon noi hai xau!"<<endl;
			noixau(str1,str2);
			break;
		case 'e':
			cout<<"Ban da chon tim vi tri cua xau nay trong xau truoc!"<<endl;
			timvt(str1, str2);
			break;
		default: cout<<"DA NHAP SAI MOI NHAP LAI!"<<endl;
		break;
	}
}
 while (chon != 0); 
    return 0;
}
