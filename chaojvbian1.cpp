#include<iostream>
#include<math.h>
using namespace std;
long long n, l, ans = 0;
int main() {
	
   while(1){
   	cin >> n >> l;
   	if(n == 0 && l == 0) return 0;
	   	for(long long i = 1; i <= l; i++){
	   		long long temp = 1;
	   		for(int j = 1; j <= i;){
	   			if(i - j > 3) {
	   				temp *= pow(n, 3);
	   				j+=3;
				}
	   			else{
	   				temp *= n;
	   				j++;
				}
	   			temp = temp % 1000000007;
			}

		    ans += temp;
		}
	   	cout << ans % 1000000007<<endl;
	   	ans = 0;
   }
   return 0;
}
