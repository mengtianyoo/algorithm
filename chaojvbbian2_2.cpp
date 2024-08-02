#include<iostream>

using namespace std;

int md[1001][1001];
int maxq[1001][1001];

int main(){
	int n, ans = 0, l = 1, m;
	cin >> n;
	string s;
	for(int i = 1; i <= n; i++){
		cin >> s;
		m = s.size();
		for(int j = 1; j <= m; j++){
			if(s[j - 1] == '1') md[i][j] = 1;
			else md[i][j] = 0;
			
			maxq[i][j] = maxq[i - 1][j] + maxq[i][j - 1] -maxq[i - 1][j - 1] + md[i][j];
		}
	}
	
	while(l <= min(n, m)){
		for(int i = l; i <= n; i++){
			for(int j = l; j <= m; j++){
				if(maxq[i][j] - maxq[i - l][j] - maxq[i][j - l] + maxq[i - l][j - l] == l * l) ans = max(ans, l *l);
			}
		}
		l++;
	}
	
	cout << ans;
//	for(int i = 1; i <= n; i++){
//		for(int j = 1; j <= s.size(); j++){
//			cout<<  maxq[i][j] << " ";
//		}
//		cout << endl;
//	}
	
	
	
	
	return 0;
}
