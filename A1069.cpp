#include <cstdio>
#include <algorithm>
using namespace std;

bool cpm(int a,int b){
	return a>b;
}

void to_array(int n,int num[]){
	for(int i=0;i<4;i++){
		num[i] = n%10;
		n = n/10;
	}
}
int to_num(int num[]){//将数组转换成数字
	int n = 0;
	for(int i=0;i<4;i++){
		n = n*10 + num[i];
	}
	return n;
}
int main(){
	int num[4]={0};
	int n,MAX,MIN;
	scanf("%d",&n);
	while(1){
		to_array(n,num);
		sort(num,num+4);//从小到大排列  
		MIN = to_num(num);
		to_array(n,num);
		sort(num,num+4,cpm);//从大到小排列
		MAX = to_num(num);
		int cha=0;
		cha = MAX - MIN;
		n = cha;
		printf("%04d - %04d = %04d\n",MAX,MIN,cha);
		if(cha==6174||cha==0000)
			break;
	}
	return 0;
}
