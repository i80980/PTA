#include <cstdio> 
const int maxn=10000001;
bool issu[maxn]={0};//记录是否是素数 
int sunum[maxn]={0};//存放素数 
int count=0;


//这里值得注意的是我最大记录n个素数，而不是记录小于n的素数，
//所以循环结束条件是i<maxn,而不是i<n 
void issunum(int n){
	for(int i=2;i<maxn;i++)
		if(issu[i]==false){
			sunum[count]=i;
			count++;
			if(count>n)
				break;
				//如果已经记录了n个素数,就可以结束了 
			for(int j=i+i;j<maxn;j+=i)
				issu[j]= true;
		}
}



int main(){
	int m,n; 
	int count=0;
	scanf("%d %d",&m,&n);
	issunum(n);
	for(int i=m;i<=n;i++){
		printf("%d",sunum[i-1]);
		count++;
		if(count%10!=0&&i!=n)
			printf(" ");
		if(count%10==0&&i!=n)
			printf("\n"); 
		}
}
