#include<iostream>
#include <math.h>
//80·Ö 
using namespace std;

double op[100001][2];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	double x, y;
	int s, e;
	int n, m;
	cin >> n  >> m;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 2; j++){
			cin >> op[i][j];
		}
	}
	for(int i = 0; i < m; i++){
		cin >> s >> e >> x >> y;
		double xt = x,yt = y;
		for(int j = s - 1; j < e; j++){
			if(op[j][0] == 1){
				x *= op[j][1];
				y *= op[j][1];
			} else if(op[j][0] == 2) {
				double xt = x,yt = y;
				x = xt * cos(op[j][1]) - yt * sin(op[j][1]);
				y = xt * sin(op[j][1]) + yt * cos(op[j][1]);
			}
		}
		printf("%.3f %.3f\n", x, y);
	}
	return 0;
}
