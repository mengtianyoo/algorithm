#include <bits/stdc++.h>

using namespace std;

int main(){
	int m, s, c;
	int nums[202], mins[202];
	cin >> m >> s >> c;
	if(m  > c){
		cout << c;
		return 0;
	}
	
	nums[0] = 0;
	for(int i = 1; i <= c; i++){
		cin >> nums[i];
	} 
	
	sort(nums + 1, nums + c + 1);
	
	for(int i = 1; i < c; i++){
		mins[i] = nums[i + 1] - nums[i] - 1;
	}
	
	sort(mins + 1, mins + c);
//	for(int i = 1; i < c; i++){
//		cout << mins[i] <<endl;
//	} 
	int ans = nums[c] - nums[1] + 1;

	for(int i = c - 1; i > c - m; i--){
		ans -= mins[i];
		//cout << mins[i]<< endl;
	}
	cout << ans;
	return 0;
} 
