#include<iostream>
#include<algorithm>
using namespace std;
int r, c, ans = 0, mon[101][101], dp[101][101];
void dfs(int i, int j) {
    if (i > 1 && mon[i][j] < mon[i - 1][j] && dp[i][j] + 1 > dp[i - 1][j] && mon[i - 1][j] != -1) {
        dp[i - 1][j] = dp[i][j] + 1;
        dfs(i - 1, j);
    }
    if (i < r && mon[i][j] < mon[i + 1][j] && dp[i][j] + 1 > dp[i + 1][j] && mon[i + 1][j] != -1) {
        dp[i + 1][j] = dp[i][j] + 1;
        dfs(i + 1, j);
    }
    if (j > 1 && mon[i][j] < mon[i][j - 1] && dp[i][j] + 1 > dp[i][j - 1] && mon[i][j - 1] != -1) {
        dp[i][j - 1] = dp[i][j] + 1;
        dfs(i, j - 1);
    }
    if (j < c && mon[i][j] < mon[i][j + 1] && dp[i][j] + 1 > dp[i][j + 1] && mon[i][j + 1] != -1) {
        dp[i][j + 1] = dp[i][j] + 1;
        dfs(i, j + 1);
    }
    return;
}
int main(){
	cin >> r >> c;
	for(int i = 1; i <= r; i++)
		for(int j = 1; j <= c; j++)
			mon[i][j] = -1,dp[i][j] = 1;
	for(int i = 1; i <= r; i++)
		for(int j = 1; j <= c; j++)
			cin >> mon[i][j];	
	for(int k = 1; k <= max(r, c); k++)
		for(int i = 1; i <= r; i++)
			for(int j = 1; j <= c; j++)
				dfs(i, j);
			
	for(int i = 1; i <= r; i++)
		for(int j = 1; j <= c; j++)
			ans = max(ans, dp[i][j]);
	cout << ans;
	return 0;
}
