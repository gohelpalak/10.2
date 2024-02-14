/*
Q.1 Write a Program to find the sum of all 1D Array elements by passing an array as an argument using UDF.
*/
#include<stdio.h>
 void sum(){
	int a[10],sum=0;
	 int n,i;
	 
 		printf("enter count array size :");
 		scanf("%d",&n);
 		
 	for(i=0; i<n; i++){
 		printf("enter count array size :");
  		scanf("%d",&a[i]);
 	}
 	
 	for(i=0; i<n; i++){
  		printf(" %d",a[i]);
   		sum +=a[i];
 	}
 		printf("\n\nsum = %d",sum);

}
main()
{
	sum();
}
