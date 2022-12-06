
#include <stdio.h>
#include <string.h>
#define ARRAY_LENGHT 4096*180
char palindrome[ARRAY_LENGHT];
//char big_array_2[ARRAY_LENGHT];
unsigned long long i;

int main(void)
{

	
    int flag = 0;
	for (i = 5; i < ARRAY_LENGHT ; i += 4096) {
		if(flag){
			palindrome[i] = 'a';
			//big_array_2[i] = 'a';
			flag = 0;
		} else {
			flag = 1;
			palindrome[i] = 'b';
			//big_array_2[i] = 'b';
		}
		
		
	}
	flag = 0; 
	int error = 0;
	
	for (i = 5; i < ARRAY_LENGHT ; i+= 4096) {
		
	//	palindrome[i] = palindrome[i] + 1;
		if(flag){
		
			if(palindrome[i] != 'a'){
				error++;
		
			}
			flag = 0;
		} else {
			flag = 1;
	
			if(palindrome[i] != 'b'){
				error++;
			}
		}
	}
	
	if(error>0){
		printf("ERROR IN TEST 1 BIGARRAY\n");
	} else{
		printf("BIG ARRAY TEST 1 PASSED\n");
	}
	flag = 0; 
	for (i = 5; i < ARRAY_LENGHT ; i += 4096) {
		if(flag){
			palindrome[i] = 'c';
			//big_array_2[i] = 'a';
			flag = 0;
		} else {
			flag = 1;
			palindrome[i] = 'd';
			//big_array_2[i] = 'b';
		}
		
		
	}
	
	flag = 0; 
	
	for (i = 5; i < ARRAY_LENGHT ; i+= 4096) {
		
	//	palindrome[i] = palindrome[i] + 1;
		if(flag){
		
			if(palindrome[i] != 'c'){
				error++;
		
			}
			flag = 0;
		} else {
			flag = 1;
	
			if(palindrome[i] != 'd'){
				error++;
			}
		}
	}
	
	if(error>0){
		printf("ERROR IN TEST 2 BIGARRAY\n");
	} else{
		printf("BIG ARRAY TEST 2 PASSED\n");
	}
	
	/*for (i = 5; i < ARRAY_LENGHT ; i+= 4096) {
		
		if(flag){
			printf("i = %llu \n",i);
			if(palindrome[i] != 'a' || big_array_2[i] != 'a'){
				printf("ERROR\n");
			}
			flag = 0;
		} else {
			flag = 1;
			printf("i = %llu \n",i);
			if(palindrome[i] != 'b' || big_array_2[i] != 'b'){
				printf("ERROR\n");
			}
		}
	}*/
	//printf("##################### BIGARRAY ENDS #########################\n");
	return 0;
}
