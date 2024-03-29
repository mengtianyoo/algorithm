#include<iostream>

using namespace std;

int main(){
	int n, m, L, ans[257] = {0}, tmp;
	
	cin >> n >> m >> L;
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> tmp;
			ans[tmp]++;
		}
	}
	for(int i = 0; i < L; i++) cout << ans[i] <<" ";
	
	
	
	
	return 0;
} 
