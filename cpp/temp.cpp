#include <iostream>
using namespace std;
int main() {
	int n;
	long s;
	cin>>n;
	cout<<"so hoan hao trong pham vi: ";
	for(int i = 2;i<=n;i++) {
		s = 0;
		for(int j = 1;j<i;j++){
			if(i%j==0) s+=j;
		}
		if(s==i) cout<<i<<" ";
	}
}
