#include <bits/stdc++.h>
using namespace std;
int a[202];
int main() {
	int n,res;
	cin >> n;
	res=0;
	for(int i=1; i<=n*2; i++) {
		cin >> a[i];
	}
	for(int i=1; i<=n*2; i+=2) {
		if (a[i]==a[i+1]) {
			continue;
		}
		for(int j=i+1; j<=n*2; j++){
			if (a[i]==a[j]) {
				for (int k=j-1; k>=i+1; k--){
					swap(a[k],a[k+1]);
					res++;
				}
			}
		}
	}
	cout << res;
}