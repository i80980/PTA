#include <cstdio>
int main(){
    int n; //学校数量
    int id,score; //学校ID 与 个人分数
    int school[]={0}; //学校的分数
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d",&id,&score);
        school[id] = school[id] + score;
    }
    
    int max=0,k=0;
    for(int i=1;i<=n;i++){
        if(school[i]>max){
            max=school[i];
            k=i;}
    }
    printf("%d %d",k,max);
}


