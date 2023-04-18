#include <stdio.h>

//msameer1

int main(){

    int nums[11];

    int i,j,k;

    int sum=0;


    // saving natural number in array using for loop 
    for (i=0; i<10;i++){
        nums[i]=i+1;
    }

    // adding all numbers in array to find the sum
    for (j=0;j<10;j++){
        sum= sum + nums[j];
    }

    printf("The sum of the first 10 integers is %d \n", sum);



}
