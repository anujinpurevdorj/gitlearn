#include<iostream>
using namespace std;

int main(){
	int n,m,s=0,q=1,l=1;
	cin >> n;
	m = n;
	while(m != 0){
		s += m % 10;
		q *= m % 10;
		l *=10;
		m /= 10;
	}
	cout << "Tsifr niilber: " << s << endl;
	cout << "Tsifr urjwer: "<< q << endl;
	s = n % 10;
	q = n / (l/10);
	if(q <= 5)cout << "ehnii tsifr 5s ihgui";
	else cout << "ehnii tsifr 5s ih";
	cout << endl;
	if(q == s)cout << "ehnii ba etssiin tsifr ijil";
	else cout << "ehnii bas etssiin tsifr uur";
	cout << endl;
	if(s > q)cout << "etssin tsifr ih";
	else cout << "ehnii tsifr ih";
}
