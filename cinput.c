#include <stdio.h>
int main(){
	char str [16];
	int i;
	printf("Enter a number: ");
	scanf("%15s",str);
	printf("Enter a hexadecimal number: ");
	scanf("%x",&i);
	printf("Hexadecimal %#x ( %d). \n",i,i);
	return 0
