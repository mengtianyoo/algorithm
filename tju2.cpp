#include<iostream>

using namespace std;

double toiou(double a){
	return a /(2 - a); 
}

double todice(double a){
	return (a * 2) / (a + 1);
}

int main(){
	int n;
	string s;
	double num;
	cin >> n;
	while(n--){
		cin >> s >> num;
		if(s == "dice") printf("%.2lf\n", toiou(num));
		else{
			printf("%.2lf\n", todice(num));
		}
	}
	return 0;
}
