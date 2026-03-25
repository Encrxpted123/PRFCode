#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n,invalid=0;
  if(scanf("%d",&n)!=1){
  	invalid=1;
  }
  if(n<0){
  	n=-n;
  }
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  if(invalid!=0){
  	printf("Invalid input");
  	return 0;
  }
  int result;
  while(n>0){
  	result+=n%10;
  	n=n/10;
  }
  printf("%d",result);
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
