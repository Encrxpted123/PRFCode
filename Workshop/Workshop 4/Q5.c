#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

// Define matrix dimensions
#define ROWS 2
#define COLS 3

/**
 * TODO: Implement the function to calculate the sum of each row.
 * @param matrix: Input 2D integer array.
 * @param result: Output 1D int array to store the sum of each row.
 */
void findRowSum(int matrix[ROWS][COLS], int result[ROWS]) {
	int sum=0;
    for(int i = 0; i < ROWS; i++) {
        	for(int j=0;j<COLS;j++){
        		sum += matrix[i][j];
            }
            result[i]=sum;
            sum=0;
        }
}

/**
 * TODO: Implement the function to display the result array.
 */
void displayResults(int result[ROWS]) {
    for(int i = 0; i < ROWS; i++) {
        printf("%d\n", result[i]);
    }
}

int main() {
    system("cls");
    printf("INPUT:\n");	
    //INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
    int a[ROWS][COLS],result[ROWS],invalid=0;
   for (int i=0;i<ROWS;i++){
	   for (int j=0;j<COLS;j++){
	   	if(invalid==0){
   		if(scanf("%d",&a[i][j])!=1){
   			invalid =1;
   			break;
		   }
	   }
     }
	}
    // OUTPUT: Hiển thị kết quả ra màn hình
    printf("OUTPUT:\n");
    if(invalid!=0){
    	printf("Invalid input");
    	return 0;
	}
	findRowSum(a,result);
	displayResults(result);
    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}