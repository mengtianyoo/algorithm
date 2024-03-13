#include<iostream>

using namespace std;

int main(){
	int n, m;
	long long  ans1 = 0, ans2 = 0;
	cin >> n >> m;
//	for(int i = 0; i < n; i++){
//		for(int j = 0; j <m; j++){
			for(int k = 1; k <= n; k++){
				for(int o = 1; o <= m; o++){
					if (k == o) ans1 += ((n + 1) - k) * ((m + 1) - o);
					else ans2 += ((n + 1) - k) * ((m + 1) - o);
				}
			}
//		}
//	}
	cout << ans1 << " " <<ans2;
	
	return 0;
}
