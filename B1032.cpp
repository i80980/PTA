#include <cstdio>
int main(){
    int n; //ѧУ����
    int id,score; //ѧУID �� ���˷���
    int school[]={0}; //ѧУ�ķ���
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


