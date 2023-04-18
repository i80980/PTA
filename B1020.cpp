//input
//种类 市场最大需求
//库存1 库存2...
//总售价1 总售价2...
//output
//最大收益 小数点后两位 
#include <cstdio>
#include <algorithm>
using namespace std;

struct mooncake{
	double store;//库存 
	double allprice;
	double price; //单价 
}cake[1010];

bool cmp(mooncake a,mooncake b){
	return a.price > b.price;
}

int main(){
	int n;
	double D;//需求量 
	scanf("%d %lf",&n,&D);
	for(int i=0;i<n;i++){
		scanf("%lf",&cake[i].store);
	}
	for(int i=0;i<n;i++){
		scanf("%lf",&cake[i].allprice);
		cake[i].price = cake[i].allprice/cake[i].store; 
	}
	sort(cake,cake+n,cmp);//单价从大到小排列
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

