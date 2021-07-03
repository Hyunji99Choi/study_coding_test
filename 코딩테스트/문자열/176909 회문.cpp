#include<iostream>
#include<string.h>
int main(){
	int t;
	scanf("%d",&t);
	
	while(t-->0){
		char ch[100001];
		scanf("%s",ch);
	
		int state=0;
		int start=-1; 
		int end=strlen(ch);
		while(start<end){
			start++;
			end--;
			if(ch[start]==ch[end]){
				continue;
			}else if(state==0){
				if(ch[start]==ch[end-1]){
					end--; 
					state=1;
					continue;
				}else if(ch[start+1]==ch[end]){
					start++;
					state=1;
					continue;
				}else{
					state=2;
					break;
				}
			}else{
				state=2;
				break;
			}	
		}
		printf("%d\n",state);
	}
}
