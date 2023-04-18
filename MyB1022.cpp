#include <cstdio>

int main(){
    int a, b ,d;
    int sum,ans[31];
    scanf("%d %d %d",&a, &b,&d);
    sum = a+b;
    int i=0;
    do{
        ans[i++]=sum%d;
        sum = sum/d;
    }while(sum!=0);
    
    for(int j=i-1;j>=0;j--){
		printf("%d",ans[j]);
    }
    return 0;
}
