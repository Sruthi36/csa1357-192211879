#include<stdio.h>
#include<string.h>
int main(){
	int trans_table[5][5] = {{2,1},{2,1}};
	int final_state = 2,i;
	int present_state = 0;
	int next_state = 0;
	int invalid = 0;
	char input_string[10];
	printf("Enter a input string: ");
	scanf("%s",&input_string);
	int l = strlen(input_string);
	for (i=0;i<l;i++){
		if (input_string[i] == 'a'){
			next_state = trans_table[present_state][0];
		}
		else if (input_string[i] == 'b'){
			next_state = trans_table[present_state][1];
		}
		else{
			invalid = 1;
		}
		present_state = next_state;
	}
	if (invalid == 1){
		printf("Invalid input");
	}
	else if (present_state == final_state){
		printf("Accept");
	}
	else{
		printf("Reject");
	}
	return 0;
}
