#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n,invalid = 0;
  if(scanf("%d",&n)!=1 || n<=0){
  	invalid = 1;
  	fflush(stdin);
  }
  int a[n],i;
  for (i=0;i<n;i++){
  	while (scanf("%d",&a[i])!=1){
  		fflush(stdin);
	  }
  }
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  int counter;
  if(invalid==1){
  	printf("Invalid input.");
  	return 0;
  }
  for (i=0;i<n;i++){
  	if (a[i]%2==0)
  		printf("%d ",a[i]);
  		counter=1;
  }
  if (counter==0){
  	printf("Not found");
  }
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
