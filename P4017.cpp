#include<iostream>
#include<algorithm>
using namespace std;

int n, m, rel[5001][5001], dp[5001], ans = 0;

int dpf(int i){
	if(dp[i] > 0) return dp[i];
	for(int j = 1; j <= n; j++){
		if(rel[i][j] == 1){
			dp[i] = max(dp[i], dpf(j) + rel[i][j]);
		}
	}
	return dp[i];
}

int main(){
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <=n; j++){
			rel[i][j] = 0, dp[i] = 0;
		}
	}
	cin >> n >> m;
	
	for(int i = 1; i <= m; i++){
		int a, b;
		cin >> a >> b;
		rel[a][b] = 1;
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <=n; j++){
			cout << rel[i][j] << "";
		}
		cout << endl;
	}
	for(int i = 1; i <=n; i++){
		dp[i] = dpf(i);
	}
	for(int i = 1; i <=n; i++){
		cout << dp[i] << " ";
	}
	cout <<endl;
	for(int i = 1; i <= n; i++){
		ans = max(ans, dp[i]);
	}
	
	cout << ans + 1;
	
	return 0;
} 



//	for(int i = 1; i <= n; i++){
//		for(int j = 1; j <=n; j++){
//			cout << rel[i][j] << " ";
//		}
//		cout << endl;
//	}
