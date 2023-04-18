#include <cstdio>
#include <cstring>

int main(){
	char s[256];
	gets(s);
	int len = strlen(s);
	int a;
	for(int i=0;i<len;i++){
		if(s[i]==s[len-1-i])
			a=1; //ÊÇ»ØÎÄ
		else{
			a=0;
			break;
		}
	}
	if(a==1)
		printf("YES");
	else
		printf("NO");
	return 0;
}
