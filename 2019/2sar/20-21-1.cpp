#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int>a;
	a.push_back(n);
	a.push_back(10);
	a.pop_back();
	cout << a[0] << a[1];
}
