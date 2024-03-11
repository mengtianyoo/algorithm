#include<iostream>
using namespace std;

struct info{
	string name;
	int ch;
	int en;
	int math;
	int sum;
};
info stu[1024];
int main(){
	int cnt,i = 0;
	cin>>cnt;
	while(i < cnt){
		cin >> stu[i].name >> stu[i].ch >> stu[i].en >> stu[i].math;
		stu[i].sum = stu[i].ch + stu[i].en + stu[i].math;
		i++;
	}
	//如 果 某 对 学 生 <i,j> 的每一科成绩的分差都不大于 5，且总分分差不大于 10
	for(int i = 0; i < cnt - 1; i++){
		for(int j = i+1; j < cnt; j++){
			if( ((stu[i].en - stu[j].en) <= 5) && (stu[i].en - stu[j].en >= -5) && 
				((stu[i].ch - stu[j].ch) <= 5) && ((stu[i].ch - stu[j].ch) >= -5) && 
				((stu[i].math - stu[j].math) <= 5) && ((stu[i].math - stu[j].math) >= -5) && 
				((stu[i].sum - stu[j].sum) <= 10) && ((stu[i].sum - stu[j].sum) >= -10)){
				cout << stu[i].name << " " << stu[j].name << "\n";
			}
		}
	}
}
