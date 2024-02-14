/*
Q.2 Write a Program to find the length of the String by passing a string as an argument using UDF.
*/
#include<stdio.h>
#include<string.h>

int len(){
	
	char a[100];
	int i,c=0;
	
	printf("enter value :-");
	gets(a);
	
	for(i=0; i<a[i]; i++){
		
		c++;
	}
	printf("%d",c);
}
void main(){

	
	len();
}
