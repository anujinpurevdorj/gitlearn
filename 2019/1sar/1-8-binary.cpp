#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n,m=2,i=1;
	cin >> n;
	while(n > m){
		m = pow(2,i);
		i ++;
	}
	i -=2;
	cout << i << endl;
	for(int j = i; j >= 0; j --){
		if(pow(2,j) <= n){
			cout << 1;
			n -= pow(2,j);
		}else{
			cout << 0;
		}	
	}
}
