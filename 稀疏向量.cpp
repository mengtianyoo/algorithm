#include<iostream>
#include<map> 
using namespace std;
map<int , long long > mp;
long long n, a, b, index, value, ans = 0;
int main(){
	
	cin >> n >> a >> b;
	
	for(long long i = 1; i <= a; i++){
		cin >> index >> value;
		mp[index] = value;
	}
	for(long long i = 1; i <= b; i++){
		cin >> index >> value;
		ans += mp[index] * value;
	}
	cout << ans;
	return 0;
}
