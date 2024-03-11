#include <iostream>
#include <vector>

using namespace std;
#参考 brealid 创建时间：2019-01-24 20:53:21的题解 
struct info{
	int machine;
	int time;
} info[21][21];

int step[21] = {0};

int lastime[21] = {0};

int mac[21][100001] = {0};

int main() {
	int n, m, ans = 0, gj[401];
	cin >> m >> n;
	for(int i = 1; i <= n * m; i++) cin >> gj[i];

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> info[i][j].machine;
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> info[i][j].time;
		}
	}
	for(int i = 1; i <= n * m; i++){
		int now = gj[i];
		step[now]++;
		int id = info[now][step[now]].machine, cost = info[now][step[now]].time;
		for(int j = lastime[now] + 1, s = 0; ; j++){
			if(mac[id][j] == 0) s++;
			else s = 0;
			if(s == cost) {
				for (int k = j - cost + 1; k <= j; k++) mac[id][k] = 1;
				if( j > ans) ans = j;
				lastime[now] = j;
				break;
			}
		}
	}
	cout << ans << endl;



    return 0;
    //////////////真难搞，好难啊！！！ 
}

