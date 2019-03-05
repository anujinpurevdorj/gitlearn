#include<iostream>
using namespace std;
int hold,pivot;
int sort(int a[], int i, int j){
	pivot = a[j];
	int k = i - 1,m = i;
	for(m; m <= j; m ++){
		if(a[m] <= pivot){
			k ++;
			hold = a[m];
			a[m] = a[k];
			a[k] = hold;
		}
	}
	return k;
}
void huwaalt(int a[], int i, int j,int n){
	if(i < j){
		int pivothayg = sort(a,i,j);
		for(int k = 0; k <= j; k ++){
			cout << a[k] << " ";
		}
		cout << endl;
		huwaalt(a,i,pivothayg - 1,n);
		huwaalt(a,pivothayg + 1, j,n);
	}
}
int main(){
	double long n,i=0,m;
	cin >> n;
	m = n;
	while(m > 0){
		i ++;
		m /= 10;
	}
	m = n;
	int a[i], b[i];
	for(int j = 0; j < i; j ++){
		a[j] = m % 10;
		b[j] = m % 10;
		m /= 10;
	}
	
}
