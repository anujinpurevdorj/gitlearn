#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n],m = n,b[n];
	for(int i = 0; i < n; i ++){
		cin >> a[i];
	}
	for(int i = n-1; i >= 0; i --){
		if(i < a[i]){
			cout << "selegsen too tani buruu baina";
			return 0;
		}
		   if(a[i] == 0 && i > 0){
		   	b[i] = m;
		   	m--;
		   }else if(i == 0){
		   	b[i] = m;
		   }else{
		   	b[i] = m-a[i];
		   }	
	}
	for(int i = 0; i < n; i ++){
		cout << b[i] << " ";
	}
}
