#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
// Function to find the largest even number in an array
int findLargestEvenNumber(int arr[], int n){
	//@STUDENT: WRITE YOUR CODE HERE:
	int result=arr[0];
	for(int i=0;i<n;i++){
		if(0==arr[i]%2){
			if(arr[i]>result){
				result = arr[i];
			}
		}
	}
	return result;
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("INPUT:\n");
  int n,invalid=0;
  if(scanf("%d",&n)!=1 || n<1){
  	invalid=1;
  }
  int arr[n];
  if(invalid==0){
    for(int i=0;i<n;i++){
    	if(scanf("%d",&arr[i])!=1){
    		invalid =1;
    		break;
		}
	}
  }
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  sai:
	if(invalid!=0){
 		printf("Invalid input");
 		return 0;
 	 }
  int result = findLargestEvenNumber(arr,n);
  printf("%d",result);
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
