//mur bagana ni buhel toogoor dugaarlagdsan husnegtin neg nudend 
//shatriin bers nguduhud ymr ng durskoordinataar ugugdunu bers ugugdsun dursiig ideh bol yes idehgui bol no
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int x1,x2,y1,y2,l,m;
	cin >> x1;
	cin >> y1;
	cin >> x2;
	cin >> y2;
	if(x1 == x2 || y1 == y2)cout << "Yes";
	l = abs(x1-x2);
	m = abs(y1-y2);
	if(l == m)cout << "Yes";
	else cout << "No";
} 
