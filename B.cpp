#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n,a,min,res;
	cin >> n;
	min=1e9
	res=-322;
	for(int i=0; i<n; i++) {
		cin >> a;
		a-=i;
		if (min>(a+n-1)/n) {
			min=(a+n-1)/n;
			res=i+1;
		}
	}
	cout << res;
	return 0;
}