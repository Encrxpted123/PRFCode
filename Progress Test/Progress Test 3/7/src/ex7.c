#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
// Function to find the largest even number in an array
int findPrime(int a){
	//@STUDENT: WRITE YOUR CODE HERE:
	if(a==2){
		return 1;
	}
	if(a<2){
		return -1;
	}
	for(int i=3;i<a;i++){
		if(0==a%i){
			return -1;
		}
	}
	return 1;
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("INPUT:\n");
  int n,invalid=0;
  if(scanf("%d",&n)!=1 || n<0 || n>=100){
  	invalid=1;
  }
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  if(invalid!=0){
  	printf("Invalid input");
  	return 0;
  }
  int primeCount=0,a=n+1;
  while(primeCount<4){
  	if(findPrime(a)==1){
  		printf("%d\n",a);
  		primeCount++;
  		fflush(stdin);
	  }
	a++;
	fflush(stdin);
  }
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
