#include <iostream>
#define max 100
using namespace std;


void sap_xep(float a[max][max],int m, int n){
    for(int i = 0;i<n;i++){
        for(int j = 0; j<m; j++){
            int k,l;
            for(k = i; k<n; k++){
                int t = 0;
                if(k == i) t = j+1;
                for(l = t; l<m;l++){
                    if(a[i][j] > a[k][l]){
                        int temp = a[i][j];
                        a[i][j] = a[k][l];
                        a[k][l] = temp;
                    }
                }
            }
        }
	}
}

int main () {
    int m,n;
    cout << "So hang "; cin >> m;
    cout << "So cot "; cin >> n;

    int a[max][max];
    for (int i = 0; i<m; i++) {
        for (int j = 0; j<n; j++) {
            cout << "a[" << i << "][" << j << "]";
            cin >> a[i][j];
        }
    }

    int b[max];

}