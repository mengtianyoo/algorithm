#include<iostream>

using namespace std;
struct kemu{
	int yilai = 0;
	int bei = 0;
	int time = 0;
	int early = 0;
	int xtime = 0;
}ans[101];

int main(){
	int n, m, maxtime = 0;
	cin >> n >> m;
	for(int i = 1; i <= m; i++){
		cin >> ans[i].yilai;
		if(ans[ans[ans[i].yilai].bei].time < ans[i].time)
		ans[ans[i].yilai].bei = i;
	}
	for(int i = 1; i <= m; i++){
		cin >> ans[i].time;
	}
	for(int i = 1; i <= m; i++){
		if(ans[ans[ans[i].yilai].bei].time < ans[i].time)
		ans[ans[i].yilai].bei = i;
	}
	for(int i = 1; i <= m; i++){
		if (ans[i].yilai == 0){
			ans[i].early = 1;
			cout << ans[i].early << " ";
			if(maxtime < ans[i].time + ans[i].early) maxtime = ans[i].time + ans[i].early;
		} 
		else {
			ans[i].early = ans[ans[i].yilai].time + ans[ans[i].yilai].early;
			cout << ans[i].early << " ";
			if(maxtime < ans[i].time + ans[i].early) maxtime = ans[i].time + ans[i].early;
		}
	}
	cout << endl;
	if(maxtime - 1 <= n){
		for(int i = m; i >= 1; i--){
			if(ans[i].bei == 0) ans[i].xtime = ans[i].time;
			else{
				if(ans[i].xtime < ans[ans[i].bei].xtime + ans[i].time)
				ans[i].xtime = ans[ans[i].bei].xtime + ans[i].time;
			}
		}
		for(int i = 1; i <= m; i++){
			cout << n - ans[i].xtime + 1 << " ";
		}
	}

	return 0;
}
