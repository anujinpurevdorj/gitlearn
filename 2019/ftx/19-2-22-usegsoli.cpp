#include<iostream>
using namespace std;

int main(){
	char a[100],b;
	int k;
	cin >> a;
	cin >> k;
	cin >> b;
	a[k-1]=b;
	cout << a;
}
