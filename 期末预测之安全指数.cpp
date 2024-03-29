#include<iostream>

using namespace std;

int main(){
	int n, w, s, ans = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> w >> s;
		ans += w * s;
	}
	if(ans < 0) cout << 0;
	else cout << ans;
	
	
	return 0;
}
