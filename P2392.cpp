#include<iostream>
#include<algorithm>
using namespace std;

int doublep(int *cost, int len, int p1, int p2, int chazhi){
	if(len < 0){
		
	}
	doublep(cost, len - 1, p1, p2 + cost[len], max());
	doublep(cost, len - 1, p1 + cost[len], p2);
}

int main(){
	int s[4], cost[21], ans = 0;
	for(int i = 0; i < 4; i++) cin >> s[i];
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < s[i]; j++){
			cin >> cost[j];
		}
//		sort(cost, cost + s[i]);
//		int tmp = doublep(cost, s[i] - 1, 0, 0);

	}
	cout << ans;
	return 0;
} 
