#include<iostream>
using namespace std;

int main(){
	int n,k,m;
	cin >> k;
	cin >> m;
	cin >> n;
	if(k >= n)cout << 2 * m;
	if(2*n % k == 0)cout << 2 * n / k * m;
	else cout << 2 * n / k * m + 1;
}
