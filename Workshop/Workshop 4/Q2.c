#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	float a[2],b[2];
	int MAX=2,invalid=0;
	for(int i=0;i<MAX;i++){
		if(scanf("%f",&a[i])!=1){
			invalid=1;
			break;
		}
	}
	for(int j=0;j<MAX;j++){
		if(scanf("%f",&b[j])!=1){
			invalid=1;
			break;
		}
	}
  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
  float temp;
  if(invalid!=0){
  	printf("Invalid input");
  	return 0;
  }
  printf("%.4f\n",sqrt( (a[0]-b[0])*(a[0]-b[0]) + (a[1]-b[1])*(a[1]-b[1]) ) );
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  return(0);
}
