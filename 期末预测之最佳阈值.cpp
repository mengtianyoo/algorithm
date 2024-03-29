#include<iostream>
#include<algorithm>
using namespace std;
int num[100000002] = {0};
int main(){
	int m, y, r, maxs = -999999999, con = 0, maxcon = -99999999, ans;
	cin >> m;
	for(int i = 1; i <= m; i++){
		cin >> y >> r;
		if(r == 0) num[y]--;
		else num[y]++;
		if(maxs < y) maxs = y;
	}
	for(int i = maxs; i >= 1; i--){
		num[i - 1] += num[i];
		if(maxcon < num[i]){
			maxcon = num[i];
			ans = i;
		} 
	}
	cout << ans;
	return 0;
}
