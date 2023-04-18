#include <cstdio>
int main(){
	int a,b,d,sum;
	scanf("%d %d %d",&a,&b,&d);
	sum = a+b;
	int ans[31],num=0;
	do{
		ans[num++] = sum%d;
		sum = sum / d;
	} while(sum!=0);
	//从高位到地位输出
	for(int i=num-1;i>=0;i--){
		printf("%d",ans[i]); 
	} 
	return 0;
}
