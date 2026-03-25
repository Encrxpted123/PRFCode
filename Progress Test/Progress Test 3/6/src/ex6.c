#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("INPUT:\n");
  int n,invalid=0;
  if(scanf("%d",&n)!=1 || n<0){
  	invalid=1;
  }
  int a[n];
  for(int i=0;i<n;i++){
  	if(scanf("%d",&a[i])!=1){
  		invalid =1;
  		break;
	  }
  }
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
    if(invalid!=0){
  	printf("Invalid input");
  	return 0;
  }
  int result,min=a[0],max=a[0],minLoc=0,maxLoc=0;
  for (int i=0;i<n;i++){
  	if(a[i]>max){
  		max=a[i];
  		maxLoc=i;
	  }
	if(a[i]<min){
		min=a[i];
		minLoc=i;
	}
  }
  int temp;
  temp = a[minLoc];
  a[minLoc]=a[maxLoc];
  a[maxLoc]=temp;
  for(int i=0;i<n;i++){
  	printf("%d ",a[i]);
  }
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
