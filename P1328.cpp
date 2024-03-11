#include<iostream>

using namespace std;
static const bool win[5][5] = {0,0,1,1,0, 1,0,0,1,0, 0,1,0,0,1, 0,0,1,0,1, 1,1,0,0,0};
int main(){
	int n, a, b,suma = 0, sumb = 0;
	int A[201], B[201];
	cin >> n >> a >> b;
	for(int i = 0; i < a; i++){
		cin >> A[i];
	}
	for(int i = 0; i < b; i++){
		cin >> B[i];
	}
	for(int i = 0; i < n; i++){
		int ca = A[i % a], cb = B[i % b];
		if(ca == cb) continue;
		else{
			suma += win[ca][cb];
			sumb += (1 - win[ca][cb]);
		}
		cout << suma << " " << sumb <<endl;
	}
	
	cout << suma << " " << sumb;
	return 0;
}
