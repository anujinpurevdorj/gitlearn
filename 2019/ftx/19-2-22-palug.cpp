#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char a[100];
	cin >> a;
	int c= 0;
	for(int i = 0; i <= strlen(a)/2; i ++){
		if(a[i] != a[strlen(a)-i-1])c++;
	}
	if(c != 0)cout << "NO";
	else cout << "Yes";
}
