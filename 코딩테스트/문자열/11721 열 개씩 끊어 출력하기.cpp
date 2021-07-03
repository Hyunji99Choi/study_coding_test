#include<iostream>

int main(){
	char ch[101];
	scanf("%s",ch);
	for(int i=0;ch[i]!='\0';i++){
		if(i!=0&&i%10==0)
			printf("\n");
		printf("%c",ch[i]);
	}
}
