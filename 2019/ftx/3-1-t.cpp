#include<iostream>
using namespace std;

int main(){
	int n,a,b;
	cin >> n;
	a =n / 1000 * 10 + n / 100 % 10;
	b = n % 10 * 10 + n / 10 % 10;
	cout << a % b +1
	;
}
