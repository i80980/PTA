#include <cstdio>
#include <cstring>


bool judge(char str[]){
	int len = strlen(str); //字符串长度
	for(int i=0; i<len/2;i++){
		if(str[i]!=str[len-1-i]){
			return false;
		}
	} 
	return true;
}

int main(){
	char str[256];
	while(gets(str)){//输入字符串
		//判断字符串str是否是“回文串”
		bool flag=judge(str);
		if(flag==true)//“回文串”
			printf("YES\n");//输出YES}
		else{//不是“回文串”
			printf("No\n");//输出NO
			}
	}
	return 0;
}
