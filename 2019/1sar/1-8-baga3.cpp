#include<iostream>
using namespace std;

int main(){
	int n,s=0;
	cin >> n;
	for(int i = n; i > 0; i --){
		s += i * 2 + i-1;
	}
	cout << s;
}
