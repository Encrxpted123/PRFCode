#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int findDifference(int arr[], int n) {
//@STUDENT:ADD YOUR CODE
  int result=0,min=arr[0],max=arr[0];
  for(int i=0;i<n;i++){
  	if(arr[i]>max){
  		max=arr[i];
	  }
	if(arr[i]<min){
		min=arr[i];
	}
  }
  result=max-min;
  return result;
}

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
  int result = findDifference(a,n);
  printf("%d",result);
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
