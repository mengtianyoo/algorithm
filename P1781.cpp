#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
struct pr{
	string s;
	int no;
	int len;
}num[21];

bool cmp(pr a, pr b){
	if(a.len > b.len) return 1;
	else if(a.len < b.len) return 0;
	else{
		if(a.s > b.s) return 1;
		else if(a.s < b.s) return 0;
		else{
			if(a.no < b.no) return 1;
		}
	}
}
int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> num[i].s;
		num[i].no = i+1;
		num[i].len = num[i].s.size();
	}
	sort(num, num + n, cmp);
	cout << num[0].no << "\n" << num[0].s;
	return 0;
	
}

