#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	int i,l,flag=0;
	printf("Enter a string: ");
	scanf("%s",&s);
	l = strlen(s);
	printf("%c",s[0]);
	if (s[0] == '1' || s[l-1] == '1'){
		flag = 1;
	}
	for (i=1;i<l-1;i++){
		if (s[i] == '0'){
			flag = 1;
		}
	}
	if (flag == 0){
		printf("Given string is accepted.");
	}
	else{
		printf("Given string is not accepted.");
	}
	return 0;
}
