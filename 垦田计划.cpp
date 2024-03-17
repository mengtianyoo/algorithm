#include<iostream>
#include<algorithm>
using namespace std;

struct di{
	int t, c;
} num[100001];

bool cmp(di a, di b){
	return a.t > b.t;
}
int main(){
	int n, m, k;
	cin >> n >> m >> k; 
	for(int i = 1; i <= n; i++){
		cin >> num[i].t >> num[i].c;
	}
	sort(num + 1, num + n + 1, cmp);
//	for(int i = 1; i <= n; i++){
//		cout <<  num[i].t << num[i].c;
//	}
	num[n+1].t = 2;
	int ans;
	for(int i = 1; i <= n;){
		if(num[i].t > num[i + 1].t && m > 0 && num[i].t >= 2){
			for(int j = 1; j <= i; j++){
				if(m > 0 && num[i].t >= 2){
					num[j].t--;
					m -= num[j].c;
				}
				ans = num[j].t;
			}
		} else {
			i++;
		}
	}
	cout << ans;
	return 0;
}
