#include<iostream>
using namespace std;

int main(){
	int n,m=1;
	cin >> n;
	int a[n][n];
	for(int i = 0; i < n; i ++){
		for(int j = 0; j < n; j ++){
			a[i][j]=m;
			m ++;
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for(int i = 0; i < n; i ++){
		for(int j = n-1; j >= 0; j --){
			cout << a[j][i] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for(int i = n-1; i >= 0; i --){
		for(int j = 0; j < n; j ++){
			cout << a[j][i] << " ";
		}
		cout << endl;
	}
}
