#include<iostream>
#include<string>
using namespace std;
/*
insert(pos, str)/insert(it, it2, it3)
substr(pos, len)
find(str) true return it or return npos.
replace(pos, len, str)/replace(it1, it2, str)
*/

int main(){
	string::iterator it;
	string s = "qqqqqqqqqqqwww";
	
	for(it = s.begin(); it != s.end(); it++) cout << *it <<endl;
	cout << s;
	return 0;
}
