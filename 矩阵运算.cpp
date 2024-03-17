#include<iostream>

#include<math.h>

using namespace std;

long long q[10001][21], k[10001][21], v[10001][21], w[10001], tmp[10001][10001], ans[10001][21];

int main(){
	int n, d;
	cin >> n >> d;
	for(int i = 1; i <= n; i++) for(int j = 1; j <= d; j++) cin >> q[i][j];
	for(int i = 1; i <= n; i++) for(int j = 1; j <= d; j++) cin >> k[i][j];
	for(int i = 1; i <= n; i++) for(int j = 1; j <= d; j++) cin >> v[i][j];
	for(int i = 1; i <= n; i++) cin >> w[i];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			tmp[10001][10001] = 0;
		}
	}
	for(int i = 1; i <= n; i++){
		for(int k1 = 1; k1 <= n; k1++){
			for(int j = 1; j <= d; j++){
				tmp[i][k1] += q[i][j] * k[k1][j];
			}
			tmp[i][k1] *= w[i];
		}
		for(int k1 = 1; k1 <= d; k1++){
			for(int j = 1; j <= n; j++){
				ans[i][k1] += tmp[i][j] * v[j][k1];
			}
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= d; j++){
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
} 
