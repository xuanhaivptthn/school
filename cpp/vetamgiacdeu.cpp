// #include <iostream>
// using namespace std;

// int main () {
//     int n;
//     cout << "Nhap canh cua tam giac deu: "; cin >> n;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < 2*n-1; j++) {
//             if (j >= n-i-1 && j <= n+i-1) cout << "*";
//             else cout << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Moi nhap vao do dai canh tam giac:";cin>>n;
	int a = (n-1)/2;
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			(i+j>=n-1)?cout<<"* ":cout<<" ";
		}
		cout<<endl;
	}
}