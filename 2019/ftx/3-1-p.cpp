#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int a,b,c,d;
	cin >> a >> b >> c;
	d = a * 3600 + b * 60 + c;
	cin >> a >> b >> c;
	cout << abs(d - (a*3600 + b * 60 + c));a
}
