#include<iostream>
using namespace std;

int main(){
	int a;
	cin >> a;
	cout << 9 +(a * 45 + ((a-1)/2*15 )+ (((a-(a-1)/2)-1)* 5)) / 60 % 24<< " " << (a * 45 + ((a-1)/2*15 )+ (((a-(a-1)/2)-1)* 5)) % 60;
	return 0;
}
