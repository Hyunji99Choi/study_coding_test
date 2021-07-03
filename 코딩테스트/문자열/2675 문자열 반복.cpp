#include<iostream>

int main(){
	int t,r;
	scanf("%d",&t);
	while(t-->0){
		char ch[21];
		scanf("%d",&r);
		scanf("%s",ch);
	
		for(int i=0;ch[i]!='\0';i++){
			for(int j=0;j<r;j++)
				printf("%c",ch[i]);
		}printf("\n");
	}
}
