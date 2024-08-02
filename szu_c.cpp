#include<iostream>
#include <stack> 

using namespace std;

int main(){
	int n;
	stack <char> st;
	string str;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> str;
		for(int j = 0; j < str.size(); j++){
			if(str[j] == '#' && !st.empty()){
				st.pop();
			}else if(str[j] != '#'){
				st.push(str[j]);
			}
		}
		if(st.empty()) cout << "NULL" <<endl;
		else{
			string ans = "";
			while(!st.empty()){
				ans = st.top() + ans;
				st.pop();
			}
			cout << ans <<endl;
		}
	}
	return 0;
}
