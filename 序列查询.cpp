#include<iostream>

using namespace std;

struct chafen{
	long long sum;
	long long a;
}num[202];

int main(){
	int n, N, ans = 0;
	cin >> n >> N;
	for(int i = 0; i <= n; i++){
		num[i].a = 0;
		num[i].sum = 0; 
	} 
	for(int i = 1; i <= n; i++){
		cin >> num[i].a;
		if(num[i].a >= N){
			ans += (i - 1) * (N - num[i - 1].a);
			//cout << "##############" <<i <<" " << (i - 1) * (N - num[i - 1].a) << endl;
			break;
		} 
		else{
			ans += (i - 1) * (num[i].a - num[i - 1].a);
			//cout << "*************" <<i <<" " << (i - 1) * (num[i].a - num[i - 1].a) << endl;
		} 
	}
	if(num[n].a < N) ans += (N - num[n].a) * n;
	cout << ans;
	return 0;
} 
