#include<iostream>
#include<math.h>

using namespace std;

int main(){
	long long n, N, ans = 0, a, tmp = 0;
	cin >> n >> N;
	long long r = N / (n + 1);
	for(long long  i = 1; i <= n; i++){
		cin >> a;
		int b = a;
		while( a > tmp ){
			a-- ;
			ans += abs(i - 1 - a / r);
		}
		tmp = b;
	}
	while(N > tmp) {
		N--;
		ans += abs(n - N / r);
	}
	
	cout << ans;
	
	
	return 0;
}
