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
	char s[100], extra;

scanf("%s", s);
if (sscanf(s, "%d%c", &n, &extra) != 1 || n < 2) {
    invalid = 1;
}
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  if(invalid==1){
  	printf("Invalid input");
  	return 0;
  }
  	for(int i=1;i<=n;i++){
  		for(int j=n;j>n-(n-i);j--){
  			printf(" ");
		  }
		for(int k=1;k<=2*i-1;k++){
			printf("*");
		}
		printf("\n");
	  }
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
