#include <cstdio>
int main(){
    int n;
    char c;
    scanf("%d %c",&n,&c);
//	scanf("%d",&n);
//    scanf("%c",&c);

	int h;

	if(n%2==1){//���������
		h = n/2+1;
	}
	else
		h = n/2;
    
    //��һ��
    for(int i=0;i<n;i++){
        printf("%c",c);
    }
    printf("\n");
    
    //�м���
    for(int j=0;j<h-2;j++){
        printf("%c",c);
        for(int i=0;i<n-2;i++){
            printf(" ");
        }
        printf("%c\n",c);
    }
    
    //���һ��
    for(int i=0;i<n;i++){
        printf("%c",c);
    }
    return 0;
}
