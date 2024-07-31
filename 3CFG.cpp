#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	int i,flag;
	printf("Enter a string to check:");
	scanf("%s",s);
	int l=strlen(s);
	flag=0;
	for(i=0;i<l;i++){
		if(s[i]!='0' && s[i]!='1'){
			flag=1;
		}
	}
	if(flag!=0){
		printf("string is Not Valid\n");
	}
	if(flag==0){
		if (s[0]=='0'&&s[l-1]=='1'){
		printf("string is accepted\n");
		}
		else{
			printf("string is Not accepted\n");
		}
	}
	return 0;
}
