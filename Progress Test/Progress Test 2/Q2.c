#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

// Function to check if a number is a prime number
int isPrime(int n) {
    //@STUDENT: WRITE YOUR CODE HERE
   if(n<2){
   	return 0;
   }
   for (int i=2;i<=sqrt(n);i++)
   	if(n%i==0) return 0;
   return 1;
}

// Function to count prime number numbers in an array
int countPrimes(int arr[], int size) {
    //@STUDENT: WRITE YOUR CODE HERE
   int count = 0;
   for (int i=0;i<size;i++){
   	if (isPrime(arr[i])==1) count++;
   }
   return count;
}

int main() {
  system("cls");
  
  // Fixed Do not edit anything here.
  printf("INPUT:\n");
  //@STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int size;
  int invalid = 0;
  if(scanf("%d",&size)!=1 || size<=0){
  	invalid = 1;
  	size=0;
  }
  int a[size];
  if(a[size]>0){
	  for (int i=0;i<size;i++){
	  	while (scanf("%d",&a[i])!=1){
	  		fflush(stdin);
		  }
	  }
  }
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  if(invalid==1){
  	printf("Invalid input.");
  	return 0;
  }
  int result = countPrimes(a,size);
  printf("%d",result);

  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}