#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

//msameer1

int main(){
    char *argv[1]={"-1"};

    int pid = fork ();

    if (pid==0){
   
        printf("The PID of process executing the child process is %d \n", getpid());
         execv("sum.out", argv);
    }
    
    printf("The PID of process executing the parent process is %d \n", getpid());

    wait();
}