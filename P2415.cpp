#include<iostream>
#include<cmath>
using namespace std;
long long s[32];
int main(){
	long long sum = 0, cnt = 0;
	while(cin >> s[cnt]){
		sum += s[cnt];
		cnt++;
	}
	long long ans = (long long)sum * pow(2, cnt - 1);
	cout << ans;
	return 0;
} 
