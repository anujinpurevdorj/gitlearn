//ii baival 1 r hesgiin niilber 2r hesgin arfmetik 3 r hesgiin hamgiin ih 4 r hesgiin hamgiin 1 4 mujiinn 
#include<iostream>
using namespace std;

int main(){
	int n,s=0,q=0,l=0,max=0;
	cin >> n;
	int a[n][n];
	int b=0,k=n-1,min;
	for(int i = 0; i < n; i ++){
		for(int j = 0; j < n; j ++){
			cin >> a[i][j];		
		}
	}
	min = a[n/2][n/2];
	for(int i = 0; i < n; i ++){
		for(int j = 0; j < n; j ++){
			if(j >= i && j <= n-i-1){
				s += a[i][j];
				cout << a[n-i-1][j];
			}else if(j >= n-i-1 && j <= i){
				if(min > a[i][j]){
					min = a[i][j];
				}
				cout << a[n-i-1][j];
			}else{
				cout << a[i][j];
			}
			if(j <= b){
				q += a[i][j];
				l ++;
			}
			if(j >= k){
				if(max < a[i][j]){
					max = a[i][j];
				}
			}
		}
		if(i >= n/2){
			b--;
			k++;
		}else if(i < n/2){
			b ++; 
			k--;
		}
		cout << endl;
	}
		cout << "1r hsgiin niilber: " << s << endl;
	cout << "2r hesgiin arfimetik dundaj: " << q / l<< endl;
	cout << "3r hesgiin hamgiinn ih: " << max << endl;
	cout << "4r hesgiin hamgiin baga: " << min << endl;
}
