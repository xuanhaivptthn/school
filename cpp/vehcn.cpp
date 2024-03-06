#include<iostream>
using namespace std;
int main(){
	int d,r;
	cin>>d>>r;
	for(int i=0;i<d;i++){
		for(int j=0;j<r;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}