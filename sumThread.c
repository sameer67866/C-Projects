#include <stdio.h>
#include <pthread.h>

//msameer1

int nums[11];
int sum1,sum2 = 0;


void *sum (void *ptr){
// adding all numbers in array to find the sum
   
   int j;
   int *k;
   k= (int *) ptr;
   int x = *k;
   
   if (x<=4){
        for (j=0;j <= x;j++){
            sum1= sum1 + nums[j];
    }
        pthread_exit(NULL);

    }else if ( x > 4) {
        for (j=5; j <= x; j++){
            sum2= sum2 + nums[j];
        
    }
        pthread_exit(NULL);
    }
       
}

int main(){

    int i;

    // saving natural number in array using for loop 
    for (i=0; i<10;i++){
        nums[i]=i+1;
    }

    pthread_t thread1, thread2;

    int valsum1 = 4;
    int valsum2 = 9;
   

    //int retSum1, retSum2;

    sum1 = pthread_create(&thread1,NULL,sum, (void*) &valsum1);
    sum2 = pthread_create(&thread1,NULL,sum, (void*) &valsum2 );


    pthread_join(thread1,NULL);
    pthread_join(thread1,NULL);

    printf("The sum of the first 10 integers is %d \n", sum1+sum2);


}
