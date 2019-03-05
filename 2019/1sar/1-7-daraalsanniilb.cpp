#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 1; i < n; i ++){
		int s = i;
		for(int j = i + 1; j < n; j ++){
			s += j;
			if(s == n){
				cout << i << " "<< j-i + 1;
				return 0;
			}
		}
	}
}
