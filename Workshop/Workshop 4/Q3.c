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
	if(scanf("%d",&n)!=1 || n<=0){
		invalid =1;
	}
	int a[n];
	for(int i=0;i<n;i++){
		if(scanf("%d",&a[i])!=1 || invalid==1){
			invalid =1;
			break;
		}
	}
  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
  if(invalid !=0){
  	printf("Invalid input");
  	return 0;
  }
  int temp=a[0];
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){

        if(a[i] < a[j]){

            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;

        }

    }
}
	int found=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			printf("%d\n",a[i]);
			found=1;
		}
	}
  if(found!=1){
  	printf("Not found\n");
  }
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  return(0);
}
