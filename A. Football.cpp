#include<iostream>
using namespace std;
int main (){
	int con = 1;
	string s;
	cin >> s;
	for(int i = 0; i < s.length() - 1; i++){
		if(s[i] == s[i + 1]){
			con++;
		}else{
			con = 1;
		}
		if(con >= 7){
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}
