#include<iostream>
#include<cstring>
#include<cctype>
#include<sstream>
#include<cstdlib>
using namespace std;

int main(){
	string str;
	cin >> str;
	int a=0,b=0,c=0,count=1,i,j;
	for(int i = 0; i < str.length(); i ++){
		if(isdigit(str[i]) && count == 1){
			i = atoi (str[i]);
			a = a * 10 + i;
		}else if(isdigit(str[i]) && count == 2){
			i = atoi (str[i]);
			b = b * 10 + i;   
		}else if(isdigit(str[i]) && count == 3){
			i = atoi (str[i]);
			c = c * 10 + i;
		}else if(isdigit(str[i]) == 0 && count == 1){
			j = i;
			cout << j << endl;
		}else{
			count ++;
		}
	}
	if(str[j] == '+'){
		count = a + b;
	}else if(str[j] == '-'){
		count = a - b;
	}else if(str[j] == '*'){
		count = a * b;
	}else if(str[j] == '/'){
		count == a / b;
	}
	if(count == c){
		cout << "Yes";
	}else{
		cout << "No";
	}
}
