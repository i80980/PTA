//input 十个数字
//output 最小数字
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int geshu[11]={0};
	int num[11]={0};
	for(int i=0;i<10;i++)
		scanf("%d",&geshu[i]);//个数 

//	int dept=0;
//	for(int j=0;j<10;j++){	//j是数组num的下标	 
//		for(int i=0;i<geshu[j];i++)//循环个数次  i是应该循环的个数 
//		{
//			num[dept+i] = j;
//		}
//		dept = dept+geshu[j];
//	}
	

 
	

//	sort(num,num+10);//sort默认从小到大
//	int j=0;
//	int ling=0;//记录0的个数 
//	for(int i=0;i<10;i++)
//		if(num[i]!=0){
////			newnum[j]=num[i];直接输出不存储
//			printf("%d ",num[i]);
//			ling++; 
//			break; 
//		}
//	for(int j=0;j<=ling;j++) 
//		printf("0 ");
//	for(int i=ling+1;i<10;i++)
//		printf("%d ",num[i]);

	for(int i=1;i<=10;i++){
		if(geshu[i]!=0){
			printf("%d",i);
			geshu[i]--;
			break;
		}
	}
	for(int i=0;i<10;i++){
		for(int j=0;j<geshu[i];j++){
			printf("%d",i);
		}
	}
	return 0;
}
//2 2 0 0 0 3 0 0 1 0
