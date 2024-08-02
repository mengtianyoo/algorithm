#include <bits/stdc++.h>
using namespace std;

bool hefama(string str){
	int f = 1;
	for(int j = 0; j < str.size(); j++){
		if((str[j] >= '0' && str[j] <= '9') || (str[j] >= 'a' && str[j] <= 'z') || (str[j] >= 'A' && str[j] <= 'Z')){
			continue;
		}else{
			f = 0;
			break;
		}
	}
	if(f) return true;
	else return false;
}

int main(){
	string strs[102];
	
	int n1 = 0, n2 = 0;
	
	string temp;

	string hefa[102], feifa[102];

	while(cin >> temp){
		if(hefama(temp)){
			hefa[n1++] = temp;
			for(int i = 0; i < n1 - 1; i++){
				if(hefa[i] == temp){
					n1--;
				}
			}
		}else{
			feifa[n2++] = temp;
		}
	}
	for(int i = 0; i < n1 - 1; i++){
		cout << hefa[i] << " ";
	}
	cout << hefa[n1 - 1] << endl;
	for(int i = 0; i < n2 - 1; i++){
		cout << feifa[i] << " ";
	}
	cout << feifa[n2 - 1];

	return 0;
}
