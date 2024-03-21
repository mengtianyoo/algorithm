#include<iostream>

using namespace std;
struct tree{
	long long x;
	long long y; 
}trees[1010];

long long  n, l, s, x, y, B[55][55], ans = 0; 

bool isexist(long long tx, long long ty){
	for(int i = 1; i <= n; i++){
		if(trees[i].x == tx && trees[i].y == ty) return 1;
	}
	return 0;
}



int main(){
	cin >> n >> l >> s;
	for(int i = 1; i <= n; i++){
		cin >> trees[i].x >> trees[i].y;
	} 
	for(int i = s; i >= 0; i--) {
		for(int j = 0; j <= s; j++){
			cin >> B[i][j];
		}
	}
	for(int k = 1; k <= n; k++){
		bool f = 1;
		for(int i = 0; i <= s; i++){
			for(int j = 0; j <= s; j++){
				if(trees[k].x + i > l || trees[k].y + j > l || (B[i][j] == 1 && !isexist(trees[k].x + i, trees[k].y + j)) || (B[i][j] == 0 && isexist(trees[k].x + i, trees[k].y + j))){
					//cout << "\n*****" << k << "\n*****" << B[i][j] << "\n*****" << i << j << "\n*****" << trees[k].x + i << trees[k].y + j << "\n*****" << isexist(trees[k].x + i, trees[k].y + j)<<endl;
					f = 0;
					break;
				}
			}
			if (!f) break;
		}
		if(f) ans++;
	}
	cout << ans;
	return 0;
}
