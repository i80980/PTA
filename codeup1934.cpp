#include <cstdio>
int main(){
	int shu[200];
	int n,x;
	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&shu[i]);
	}
	
	int num;//об╠Й 
	scanf("%d",&x);
	for(int i=0;i<n;i++){
		if(shu[i]==x){
			num=i; 
			break;
		}
		num = -1;
	}
	printf("%d",num);
	return 0;
}
