#include <iostream>
using namespace std;
 
int main(){
	int n;
	cin>>n;
	for(int i=0;i<=n;i++){
		for(int j=0;j<i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}

    for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			if(i+j>=n-1) cout<<"*";
			else cout<<" ";
		}
		cout<<endl;
	}

    for (int i = n; i >=1; i--) {
        for (int j = n-i; j >=1; j--) {
            cout << "  ";
        }
        for (int k = i; k >=1; k--) {
            cout << "* ";
        }
        cout << endl;
    }

	return 0;
}