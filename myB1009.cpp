#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

int main(){
	char a[90];
	cin.getline(a,90);
	int len = strlen(a);
	char ok[90][90];
	int x=0,y=0;
	for(int i=0;i<len;i++){
		if(a[i]!=' '){
			ok[x][y]=a[i];
			y++;
		}
		else{
//			ok[x][y]='\0';
			x++;
			y=0;
		}
	}
	for(int b=x;b>=0;b--){
		printf("%s",ok[b]);
		if(b>0)
			printf(" ");
	}
    printf(" ");
	return 0;
}

