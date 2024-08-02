#include<iostream>
#include<algorithm>
using namespace std;
int t, m, ans = 0, c[101], w[101], dp[1001];
int main(){
	cin >> t >> m;
	for(int i = 0; i < m; i++) cin >> c[i] >> w[i];
	
	for(int i = 0; i < 1001; i++) dp[i] = 0;
	
	for(int i = 0; i < m; i++)
		for(int j = t; j >= c[i]; j--)
			dp[j] = max(dp[j], dp[j - c[i]] + w[i]);
			
	for(int i = 0; i < 1001; i++) ans = max(ans, dp[i]);
	
	cout << ans;
	
	return 0;
}
//struct dps{
//	int cost;
//	int weight;
//};
//
//int main(){
//	dps dp[101];
//	
//	cin >> t >> m;
//	for(int i = 0; i <= m; i++){
//		dp[i].cost = 0, dp[i].weight = 0;
//	}
//	for(int i = 1; i <= m; i++){
//		cin >> c[i] >> w[i];
//	}
//	for(int i = 1; i <= m; i++){
//		for(int j = 0; j < i; j++){
//			if(c[i] + dp[j].cost <= t && w[i] + dp[j].weight > dp[i].weight){
//				dp[i].cost = c[i] + dp[j].cost;
//				dp[i].weight = w[i] + dp[j].weight;
//				cout << "***:"<< i << "| |" << j << "---" <<  dp[i].cost << "::"<< dp[i].weight <<endl;
//			}
//		}
//	}
//	for(int i = 1; i <= m; i++){
//		ans = max(dp[i].weight, ans);
//	}
//	cout << ans;
//	return 0;
//}
