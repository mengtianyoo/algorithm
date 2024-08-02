#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	if(n <= 2) cout << "NO";
	else {
		for(int i = 2; i <= n; i++){
			if(i % 2 == 0 && (n - i) % 2 == 0){
				cout << "YES";
				return 0;
			}
			
		}
		
		cout << "NO";
		
		return 0;
	} 
	

} 
