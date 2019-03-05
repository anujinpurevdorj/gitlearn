#include<iostream>
using namespace std;

int main(){
	int j[4],t[4],m=1,max_x=0,max_y=0;
	for(int i = 0; i < 4; i ++){
		if(i % 2 == 0){
			cout << "j x" << m << ":";
			cin >> j[i]; 
		}else{
			cout << "j y" << m << ":";
			cin >> j[i];
			m ++;
		}
	}
	m =1;
	for(int i = 0; i < 4; i ++){
		if(i % 2 == 0){
			cout << "t x" << m << ":";
			cin >> t[i]; 
			
		}else{
			cout << "t y" << m << ":";
			cin >> t[i];
			m ++;
		}
	}
	
}
