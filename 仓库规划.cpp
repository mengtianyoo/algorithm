#include<iostream>

using namespace std;

int biao[1001][11];

int main(){
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> biao[i][j];
		}
	}
	for(int i = 1; i <= n; i++){
		bool f;
		for(int j = 1; j <= n; j++){
			f = true;
			for(int k = 1; k <= m; k++){
				if(biao[j][k] <= biao[i][k]){
					f = false;
					break;
				}
			}
			if(f){
				cout << j <<endl;
				break;
			}
		}
		if(!f) cout << 0 <<endl;
	}	
	return 0;
}
