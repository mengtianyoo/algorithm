#include<iostream>
#include<cctype>
#include<string>
#include<algorithm>
using namespace std;
/*
#include<string>
s.erase(x,y)表示将字符串s从x位置起删除y个字符
s.insert(x,y)表示将字符串y（或字符y）插入到s的x位置处
s.push_back(x)表示在s的末尾插入字符x
reverse(s.begin(),s.end()) 将字符串s翻转
……
#include<cctype>
isalpha(x):Determine whether x is a letter
isdigit(x):determine whether x is a digital
islower(x):
isupper(x):
isalnum(x):
isspace(x):
*/
int main(){
	int p1, p2, p3;
	string s;
	cin >> p1 >> p2 >> p3;
	cin >> s;
	for(int i = 1; i < s.length() - 1; i++){
		//if(s[i] == '-'&&(s[i - 1] < s[i  1])&&((islower(s[i + 1])&&islower(s[i + 1]))||(isdigit(s[i - 1])&&isdigit(i + 1)))){
		if(s[i] == '-'&&((islower(s[i - 1])&&islower(s[i + 1])&&(s[i - 1] < s[i + 1]))||(isdigit(s[i - 1])&&isdigit(s[i + 1])&&(s[i - 1] < s[i + 1])))){
			string tmp = "";
			for(int k = s[i - 1] + 1; k < s[i + 1]; k++){
				char ch = k;
				if(p1 == 1){
					for(int c = 0; c < p2; c++) tmp.push_back(ch);
				}
				else if(p1 == 2){
					ch=toupper(ch);
					for(int c = 0; c < p2; c++) tmp.push_back(ch);
				} 
				else if(p1 == 3) for(int c = 0; c < p2; c++) tmp.push_back('*');
			}
			if(p3 == 2){
				reverse(tmp.begin(), tmp.end());
			} 
			s.erase(i, 1);
			s.insert(i, tmp);
		}
	}
	cout << s;
	return 0;
}
