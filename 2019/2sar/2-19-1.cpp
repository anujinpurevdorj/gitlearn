//2 hemjeest massive iin gol digonali ni sondgoi too bol busdiig ni tegsh toogorr duurge;
#include<iostream>
using namespace std;

int main(){
	int n,k=1,l=2;
	cin >> n;
	for(int i = 0; i < n; i ++){
		for(int j = 0; j < n; j ++){
			if(j == i || j == n-i-1){
				cout << k << "   ";
				k += 2; 	
			}else{
				cout << l << "   ";
				l += 2;
			}
		}
		cout << endl;
	}
}
