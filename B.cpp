#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n,min = 1e9,res=-1;
	cin >> n;
	for(int i=0; i<n; i++) {
		long long int a;
		cin >> a;
		a-=i;
		if(min>(a+n-1)/n) {
			min=(a+n-1)/n;
			res=i+1;
		}
	}
	cout << res;
	return 0;
}