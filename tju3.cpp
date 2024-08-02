#include<iostream>

using namespace std;

int output(long long n, int k,long long con){
	for(long long i = 1; i <= n; i++){
		long long tmp = i;
		while(tmp > 0){
			if(k <= tmp % 10 && tmp % 10 <= 9){
				//cout << tmp%10 << "****\n";
				con++;
				break;
			}
			tmp = (tmp - tmp % 10) / 10;
		}
	}
	return con;

}

int main(){
	int t, k;
	long long con = 0;
	long long n;
	cin >> t;
	while(t--){
		cin >> n >> k;
		cout << n - output(n , k, con)<< "\n";
	}
	
	return 0;
}
