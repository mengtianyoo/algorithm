#include<iostream>

using namespace std;

int main(){
	int n, L, r, t, num[605][605] = {0}, ans = 0;
	cin >> n >> L >> r >> t;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> num[i][j];
			num[i][j] += num[i - 1][j] + num[i][j - 1] - num[i - 1][j - 1];
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			int a = i + r, b = j + r, c = i - r - 1, d = j - r - 1;
			if(i + r > n) a = n;
			if(j + r > n) b = n;
			if(i - r - 1 < 0) c = 0;
			if(j - r - 1 < 0) d = 0;
			if(num[a][b] + num[c][d] - num[a][d] - num[c][b] <= t * (a - c ) * (b - d)){
				ans++;
			}
		}
	}
	cout << ans;
	return 0;
}
