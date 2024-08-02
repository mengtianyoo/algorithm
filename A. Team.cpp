#include<iostream>


using namespace std;

int main (){
	int n, a, b, c, con = 0;
	
	cin >> n;
	
	for(int i = 0; i< n; i++){
		cin >> a >> b >> c;
		if(a + b + c >= 2) con++;
	}
	cout << con;
	
	return 0;
}
