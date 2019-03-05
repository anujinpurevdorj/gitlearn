#include<iostream>
#include<cmath>
using namespace std;

inline char hexchar(int x) {
	if (x < 10) return '0' + x;
	return 'A' + x - 10;
}

int main(){
	int n,m=2,i=1;
	cin >> n;
	while(n > m){
		m = pow(2,i);
		i ++;
	}
	i -=2;
	int l = (i+1)/4;
	if((i+1) % 2 != 0){
		l ++;
	}
	int a[i+1],k=0;
	char b[l];
	for(int j = i; j >= 0; j --){
		if(pow(2,j) <= n){
			cout << 1;
			a[k] = 1;
			n -= pow(2,j);
		}else{
			cout << 0;
			a[k]=0;
		}
		k ++;	
}
	cout << endl;
	m = 0;
	n = 0;
	k = l-1;
	for(int j = i; j >= 0 ; j --){
		if(m < 4){
			if(a[j] == 1){
				n += pow(2,m);
			}
			m ++;
		}else{
			b[k] = hexchar(n);
			m = 0;
			n = 0;
			k --;
			j ++;
		}
	}
	b[k] = hexchar(n);
	for(k = 0; k < l; k ++){
		cout << b[k] << " ";
	}
	
}
