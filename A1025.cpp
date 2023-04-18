#include <cstdio> 
#include <cstring> 
#include <algorithm>
using namespace std;

struct Student{
	char id[15];
	int score;
	int location_number;//������ 
	int local_rank;//���������� 
}stu[30010];

bool cmp(Student a,Student b){
	if(a.score!=b.score)
		return a.score>b.score;//�Ȱ������Ӹߵ�������
	else
		return strcmp(a.id,b.id)<0;//��������ͬ����׼��֤�Ŵ�С��������
	}
	


int main(){
	int n,k;
	scanf("%d",&n);
	int num=0;//ѧ�������� 
	
	for(int i=1;i<=n;i++){
		scanf("%d",&k);
		for(int j=0;j<k;j++){
			scanf("%s %d",&stu[num].id,&stu[num].score);
			stu[num].location_number=i; 
			num++;
		}
		sort(stu+num-k,stu+num,cmp);
		
		stu[num-k].local_rank=1; //���һ������Ϊ1  ���������� 
		for(int j=num-k+1;j<num;j++){
			if(stu[j].score==stu[j-1].score)
				stu[j].local_rank =stu[j-1].local_rank;
			else
				stu[j].local_rank=1+j-num+k; 
		}
	}
	printf("%d\n",num);
	sort(stu,stu+num,cmp);
	int all=1;//ȫУ���� 
	
	for(int j=0;j<num;j++){
		if(j>0&&stu[j].score!=stu[j-1].score)
			all= j+1;
//		printf("%s",stu[j].id)
		printf("%s %d %d %d\n",stu[j].id,all,
			stu[j].location_number,stu[j].local_rank);

	}
	
	return 0;
} 


//2
//5
//1234567890001 95
//1234567890005 100
//1234567890003 95
//1234567890002 77
//1234567890004 85
//4
//1234567890013 65
//1234567890011 25
//1234567890014 100
//1234567890012 85
