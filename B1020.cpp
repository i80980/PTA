//input
//���� �г��������
//���1 ���2...
//���ۼ�1 ���ۼ�2...
//output
//������� С�������λ 
#include <cstdio>
#include <algorithm>
using namespace std;

struct mooncake{
	double store;//��� 
	double allprice;
	double price; //���� 
}cake[1010];

bool cmp(mooncake a,mooncake b){
	return a.price > b.price;
}

int main(){
	int n;
	double D;//������ 
	scanf("%d %lf",&n,&D);
	for(int i=0;i<n;i++){
		scanf("%lf",&cake[i].store);
	}
	for(int i=0;i<n;i++){
		scanf("%lf",&cake[i].allprice);
		cake[i].price = cake[i].allprice/cake[i].store; 
	}
	sort(cake,cake+n,cmp);//���۴Ӵ�С����
	double maxsell=0; 
	for(int i=0;i<n;i++){
		if(cake[i].store<=D){
			D = D-cake[i].store;
			maxsell = maxsell + cake[i].allprice;}
		else
			{maxsell = maxsell + cake[i].price*D; 
			break;	
		}
	}
	printf("%0.2f\n",maxsell);
	return 0;
}

//3 20
//18 15 10
//75 72 45

