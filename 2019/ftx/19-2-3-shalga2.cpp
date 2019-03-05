#include<iostream>
#include<cmath>
using namespace std;
int fac(int n){
	if(n > 0) return n * fac(n-1);
	else return 1;
}
int facsum(int n){
	if(n > 0) return fac(n) + facsum(n-1);
	else return 0;
}
int main(){
	int p,x;
	cin >> p;
	cout << fac(p)<<endl;
	cout << facsum(p)<<endl;
	cin >> x;
	cout << pow(x,p)<<endl; 
}
