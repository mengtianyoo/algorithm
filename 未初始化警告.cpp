#include<iostream>

using namespace std;

struct fuzhi{
	long long l;
	long long r; 
}a[100002];

bool num[100002] = {0};

int main(){
	long long  n, k, ans = 0;

	cin >> n >> k;
	
	for(long long i = 1; i <= k; i++){
		
		cin >> a[i].r >> a[i].l;
		if(!num[a[i].l] && a[i].l != 0) ans++;
		num[a[i].r] = 1;
	}
	cout << ans;
	
	
	
	return 0;
}
