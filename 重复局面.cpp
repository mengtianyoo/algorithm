#include<iostream>
#include<algorithm>
using namespace std;

char qipan[801][9];
int ans[101];
int main(){
	int n;
	cin >> n;
	fill(ans, ans + n, 1); 
	for(int i = 1; i <= n * 8; i++){
		for(int j = 1; j <= 8; j++){
			string s;
			cin >> qipan[i][j];	
		}
	}
	for(int i = 1; i <= n * 8; i+=8){
		for(int j = 1; j < i; j+=8){
			bool f1 = 1;
			for(int k = 0; k <= 7; k++){    // 1 7
				for(int m = 1; m <= 8; m++){
					if(qipan[i + k][m] != qipan[j + k][m]) {
						f1 = 0;
						break;
					}	
				}
				if (!f1) break;
			}
			if(f1) ans[i/8]++;
		}
	}
	for(int i = 0; i < n; i++){
		cout << ans[i] <<endl;
	}

	
	return 0;
} 
