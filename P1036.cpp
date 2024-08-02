#include<iostream>

using namespace std;

bool isprime(long long num){
	if (num <= 3){
		return num > 1;
	}
	if (num % 6 != 1 && num % 6 != 5){
		return false;
	}
	for (int i = 5; i <= sqrt(num); i += 6){
		if (num % i == 0 || num % (i + 2) == 0){
			return false;
		}
	}
	return true;
}

int main(){
	int n, k, num[21], con = 0;
	
	cin >> n >> k;
	
	for(int i = 0; i < n; i++){
		cin >> num[i];
	}
	for(int j = 1; j <= k; j++){
		
	} 
	
	
	
} 
