#include<iostream>
#include<math.h>
using namespace std;

int main(){
	double i, ans=0;
	int n, x;
	cin >> n >> i;
	for(int j = 0; j <= n; j++){
		cin >> x;
		ans += x * (1 / pow(1 + i, j));
	}
	printf("%.3f", ans);
	
	return 0;
}
