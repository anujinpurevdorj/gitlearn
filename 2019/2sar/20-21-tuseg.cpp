#include<iostream>
using namespace std;
/*
//a//
a///a
aaaaa
a///a
a///a*/
int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i ++){
		for(int j=0; j < n; j ++){
			if(i == 0 && j <= n-2 && j >= n-(n-2+1))cout << "A";
			else if(j == 0 && i!= 0 || j == n-1 && i!=0)cout << "A";
			else if(i == n/2)cout << "A";
			else cout << " ";
			
		}
		cout << endl;
	}
}
