#include <cstdio>
#include <cstring>


bool judge(char str[]){
	int len = strlen(str); //�ַ�������
	for(int i=0; i<len/2;i++){
		if(str[i]!=str[len-1-i]){
			return false;
		}
	} 
	return true;
}

int main(){
	char str[256];
	while(gets(str)){//�����ַ���
		//�ж��ַ���str�Ƿ��ǡ����Ĵ���
		bool flag=judge(str);
		if(flag==true)//�����Ĵ���
			printf("YES\n");//���YES}
		else{//���ǡ����Ĵ���
			printf("No\n");//���NO
			}
	}
	return 0;
}
