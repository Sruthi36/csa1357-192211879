#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char s[100];
	int l,i=0,a,b,flag=0;
	printf("enter a string to check:");
	scanf("%s",s);
	l=strlen(s);
	for (int i=0;i<(floor(l/2));i++){
		if (s[i] == s[l-1-i]){
			flag = 0;
		}
		else{
			flag = 1;
		}
	}
	if (flag == 0){
		printf("The string is accepted \nGiven String is Palindrome");
	}
	else{
		printf("The string is not accepted \nGiven String is Not a Palindrome");
	}
	return 0;
}
