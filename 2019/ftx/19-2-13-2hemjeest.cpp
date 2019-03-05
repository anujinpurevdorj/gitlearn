// an 2 hemjest massive ugugdsun bol daraah muchid orshih elementig soli
#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	int n,m = 1,k;
	cin >> n;
	k = n - 2;
	int a[n][n];
	for(int i = 0; i < n; i ++){
		for(int j = 0; j < n; j ++){
			a[i][j] = rand() % 90 + 10;
			cout << a[i][j] <<" ";
		}
		cout << endl;
	}
	cout << endl;
	for(int i = 0; i < n; i ++){
		for(int j = 0; j < n; j ++){
			if(i == n/2){
				cout << a[i][n-j-1] << " ";
			}else if(i < n/2){
				if(j < m || j > k)cout << a[i][n-j-1] << " ";
				else cout << a[i][j] << " ";
			}else{
				cout << a[i][j] << " ";
			}
			
		}
		cout << endl;
		m ++;
		k --;
	}
}
