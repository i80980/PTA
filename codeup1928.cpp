#include <cstdio>


int month[13][2] = {//平年和闰年的天数 
	{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},
	{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};
	
//判断是否是闰年
bool isLeap(int year){
	return(year %4==0&&year%100 !=0)||(year%400==0);}

int main(){
	int time1,y1,m1,d1;
	int time2,y2,m2,d2;
	while(scanf("%d%d",&time1,&time2) !=EOF){
		//第一个日期晚于第二个日期，则交换
		if(time1>time2){
			int temp=time1;
			time1=time2;
			time2=time1;
			}
		y1 = time1/10000;
		m1=time1%10000/100;
		d1=time1%100;
		
		y2=time2/10000;
		m2=time2%10000/100;
		d2=time2%100;
		int ans=1;//记录结果
		//第一个日期没有达到第二个日期时进行循环
		//即!((y1==y2)&&(m1==m2)&&(d1==d2))
		while(y1<y2||m1<m2||d1<d2){
			d1++;//天数加1
			if(d1==month[m1][isLeap(y1)]+1){//满当月天数
				m1++;//日期变为下个月的1号
				d1=1;
				}
			if(m1==13){//月份满12个月
				y1++;//日期变为下一年的1号
				m1=1;
				}
				
				//累计
				ans++;
			}
			printf("%d\n",ans);//输出结果
		}
		return 0;
	}

