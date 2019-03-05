#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n,m=2,i=0;
	cin >> n;
	while(n > m){
		m = pow(m,i);
		i ++;
	}
	cout << i-1;
	int a[i-1];
	for(int j = i-1; j >= 0; j --){
		if(pow(2,j) < n){
			cout << 1;
			n -= pow(2,j);
		}else{
			cout << 0;
		}
		
	}																																
	
}
