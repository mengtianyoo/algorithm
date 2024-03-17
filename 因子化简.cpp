#include<iostream>
#include<math.h>
using namespace std;

//bool isprime(int num)
//{
//	 if(num==1)
//		return 0;
//     if(num==2||num==3)
//        return 1;
//     if(num%6!=1&&num%6!=5)
//        return 0;
//     int tmp=sqrt(num);
//     for(int i=5;i<=tmp;i+=6)
//        if(num%i==0||num%(i+2)==0)
//           return 0;
//     return 1;
//}


int main(){
	int q, k;
	long long n;
	cin >> q;
	for(int i = 1; i <= q; i++){
		cin >> n >> k;
		long long  ans = 1;
		for(int j = 2; j <= n / j; j++){
			int con = 0;
			while(n % j == 0){
				n = n / j;
				con++;
			}
			if(con >= k) ans *= pow(j, con);
		}
		cout << ans <<endl;
	}
	return 0;
}
