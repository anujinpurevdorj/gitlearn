#include<iostream>
using namespace std;

int main(){
	string str[10] = {"3C","64A","21F","20B","1A","65B","15F","4E","55G","44j"};
	string str1[10] = {"edge","window","middle","edge","window","middle","window","edge","edge","middle"};
	string str2;
	cin >> str2;
	for(int i = 0;i < 10; i ++){
		if(str2 == str[i]){
			cout << str1[i];
			break;
		}
	}
}
