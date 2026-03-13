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
		if(scanf("%d",&a[i])!=1){
			invalid =1;
			break;
		}
	}
  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
  if(invalid!=0){
	printf("Invalid input");
	return 0;
  }
  int count=1,countTotal=0,breakPoint=0;
	for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(a[i] < a[j]){

            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
}

for(int i=0;i<n;i++){
    if(a[i]%2==0){
  		  	countTotal=1;
 		   	for(int j=0;j<n;j++){
    			if(i>j && a[i]==a[j]){
    				breakPoint=1;
    				break;
				}
				if(i<j && a[i]==a[j]){
					count+=1;
				}
			}
			if(breakPoint==1){
				breakPoint=0;
				continue;
			}
			else{
				printf("%d - %d\n",count,a[i]);
				count=1;
			}
		}
	}
if(countTotal!=1){
	printf("Not found");
}
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  return(0);
}
