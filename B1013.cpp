#include <cstdio> 
const int maxn=10000001;
bool issu[maxn]={0};//��¼�Ƿ������� 
int sunum[maxn]={0};//������� 
int count=0;


//����ֵ��ע�����������¼n�������������Ǽ�¼С��n��������
//����ѭ������������i<maxn,������i<n 
void issunum(int n){
	for(int i=2;i<maxn;i++)
		if(issu[i]==false){
			sunum[count]=i;
			count++;
			if(count>n)
				break;
				//����Ѿ���¼��n������,�Ϳ��Խ����� 
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
