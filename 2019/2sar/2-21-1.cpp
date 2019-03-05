#include<iostream>
using namespace std;

int main(){
	int n,m=0;
	cin >> n;
	n = n * 3;
	int l=n/3-1,k=n-(n/3);
	cout << l << endl;
	for(int i = 0; i < n-1; i++){
		for(int j = 0; j < n; j ++){
			if(i < n/3){
				if(j != i && j < n/3)cout << 0;
				else if(j == i && j < n/3)cout << 1;
				else if(j >= n/3 && j < n-(n/3))cout << "*";
				else if(j >= n-(n/3) && j != n-i-1)cout << 0;
				else if(j >= n-(n/3) && j == n-i-1)cout << 1;
			}else if(i >= n/3-1 && i < n-(n/3)-1){
				cout << "*";
			}else{
				if(j != l && j < n/3)cout<< 0;
				else if(j == l && j < n/3)cout << 1,l--;
				else if(j >= n/3 && j < n-(n/3))cout << "*";
				else if(j >= n-(n/3) && j != k)cout << 0;
				else if(j >= n-(n/3) && j == k)cout << 1;
			}
		}
		if(i >= n-(n/3)-1)k ++;
		cout << endl;
	}
}
