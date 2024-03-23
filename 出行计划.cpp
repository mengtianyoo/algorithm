#include<iostream>
#include<algorithm>
using namespace std;

struct huo{
	long long r;
	long long l;
}dongs[100002];

long long  n, m, k, q, t, c;
bool cmp(huo a, huo b){
	return a.l < b.l;
}

int main(){
	cin >> n >> m >> k;
	for(int i = 1; i <= n; i++){
		cin >> t >> c;	
		dongs[i].r = t - k;
		dongs[i].l = t - k - c + 1;
	}
	sort(dongs + 1, dongs + n +1, cmp);
	//for(int i = 1; i <= n; i++) cout << dongs[i].l << " "<< dongs[i].r << " ";
	for(int i = 1; i <= m; i++){
		cin >> q;
		long long ans = 0;
		for(int j = 1; j <= n; j++){
			if(dongs[j].l <= q && dongs[j].r >= q ){
				//cout << dongs[j].l << " "<< dongs[j].r << " "<<endl;
				ans++;
			} 
			else if(dongs[j].l > q) break;
		}
		cout << ans<<endl;
	}
	
	
	return 0;
}
