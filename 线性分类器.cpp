#include<iostream>
#include<set>  
using namespace std;

set< string > a1, a2;

struct info{
	long long x;
	long long y;
	string type;
} num[1002];

int main(){
	long long  n, m, t0, t1, t2;
	
	cin >> n >> m;
	
	for(long long i = 1; i <= n; i++) cin >> num[i].x >> num[i].y >> num[i].type;
	
	for(long long i = 1; i <= m; i++) {
		cin >> t0 >> t1 >> t2;
		bool f = 1;
		for(long long j = 1; j <= n; j++) {
			if(t0 + t1 * num[j].x + t2 * num[j].y < 0) {
				a1.insert(num[j].type);
			} else {
				a2.insert(num[j].type);
			}
			if(a1.size() > 1 || a2.size() > 1 ) {
				cout << "No" <<endl;
				f = 0;
				break;
			}
		}
		if(f) cout << "Yes" << endl;
		a1.clear(), a2.clear();
	}
	return 0;
}
