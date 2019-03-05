#include<iostream>
using namespace std;

int main(){
	int n,m=1,b=0,l=n-1,k=0;
	cin >> n;
	int a[n][n];
	while(m <= m * m){
		for(int i = b; i <= l; i ++){
			if(i < l){
			a[b][i] = m;
			}else if(i == l && b < n){
				a[b][i] = m;
				i = l-1;
				b ++;
			}
			m ++;
		}
		b --;
		for(int i = b; i >= 0; i --){
			if(i > k){
				a[b][i]=m;
			}else if(i == k && b >= 0){
				a[b][i] = m;
				b --;
				i = k+1;
			}
			m ++;
		}
		k ++;
		b += 2;
		l --;
	}
	for(int i = 0; i < n; i ++){
		for(int j = 0; j < n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
