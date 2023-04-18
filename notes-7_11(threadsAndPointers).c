 
 /* to compile any code with threads
  gcc -o threastestname.c /pthread
  have to include    **** include<pthread.h>    ****
third argument is the function call for the thread to invoke execution
if you need the thread to return a value you must include a pthreadexit() to a pointer
 
 arguments for pthread create
 pthread_t name ,  thread attributes or how they are schdulled or null,    function call (name of function) to where the concurrencty needs to be
 4th arg is if you need ot send any data/varibles to the function. *** ( &name ) ***    sending the loction


 argument to thread fuction calls should alway be a pointer and can only send 1 pointer 

 has to be void * varible which can be cast to int...

 *((int *)result) = 42;   updating result instead of the pointer


 to inatilize a pointer use data type of location pointing to or void if dont know at first


int x =42;
 int * pointer name = &x; 
 print f = x             =42
 print f ("%d=\n", *pointername)    prints 42   but pointername only without star print memory location of x

 a pointer can alwys be 8 bites long because the size of memory address is the same

 void * pointer =...
 has to type cast to retrive the value or update it

                                                      7/13/2022
                                                                                                                .
    
C treats arrays as pointers
can inatilize pointers to NULL
int *p= NULL;

*******
                      has to #include <stdlib.h>
malloc();  
       gives a pointer to the fist byte of the memory requested in bytes    continous memory
       type *p;   types such as int
       p = (type*) malloc (byte_size);
       can then acess that location via pointer, memory is allocated int the heap but is uninatlizied
       can uses size of operator 
       ******************************** 10* sizeof(int)****************=40bytes/*/*/**/*///*/*//*/*/*////*/*/*/*/*/*/*//*//*/*
       /*
        dptr=(double*)malloc(10*sizeof(double));
        to check if memory was actually allocated
        see if pointer points to null, if pointer = null memory was not allocated
free();
        free(pointer); at the end of using the pointer and that memory
calloc();
       will inatilize the requested memory and return a pointer to the first block of memory    continous memory

       pointer= (int*) calloc(10(10 is multiplited to size to calculate byte) , sizeof(int));
        return void data type 

      maclloc and calloc are dynamic in allocation by static after allocation

realloc();
       tries to extend the previous allocated memory or find a new location with (prevous + new ) continous memory location using the same pointer
        copies old content to new location but does not inatilized the memory
        can alos be used as invoking malloc if its not used before hand
       
        pointer = realloc (pointer, n2(previously 10^^^^) * sizeof(int));

stack
      user define functions are stored on the stact such as local variables  
      discared after uses
Heap
     no structure of how the data is accessed
     so must use pointers
     dynaamic memory is allocated in the heap  usually during the run time because size of memory is not known beforehand

  

                                                7/18/22                                        
                                                                                                        .


Structure
        User defined varibles 
        example is an array that can store different data types
        can be thought of as a collection of varibles
        can't uses == to see if 2 structures are the same
        but can comparte individual members
        also cant use printf or scant for the whole structure but can print or scan individual memebers
        struckName.memberName
        can use same members in different structures to define the structue
        but can't use the same members more than once in the same structure 
        natureal use case of structures is to keep records such as student records

                ptr className ;
        ptr++ goes to the next member
        
        when not using typedef to define structure, must use struc before stuc variableNAme
 
 only multiple choice is comprehencive 60 points
 can take the exam from home
 open ended questions are non comprehencive 40 points
 no class on monday 

                                                        FINAL REVIEW
                                                                                                                                .
                        Wednesday 10:45 Remotely Lockdown

                not much definations possibley some in MC
            free responser  only on questions after mid point 
                less than 10 questions
                        code analysis
                        fork  find how many functions after



          multiple c
                        processes
                         thread

                10 questions prior to mid point 
                                   VVVVVVVVVVVVV  Posible coding questions and notes  VVVVVVVVVVVV

                                                        Processes
        Each process has its own process controll block

        fork  process can be measured by  2^n   n being number of fork calls
                What process is execution what binary or process
                How many processes are running within a process

        Pointers are necerrary for threads because after a thread is finished the data is lost
        which is why we pass pointers

        Write function to make it pthread complient 
        use pthread to return value back to the main

        Data size of pointers is always 8 bites because they store memory address not variables


        * derference, the actual value 
        & memory address

        to use pointers for arrays  int numbers[10];
                                 int *pointer= numbers; dont need & sign
        Use pointer arathmetic to change array variable x or dereferance it

        any changes made to pointers are global even in other functions when the pointer is passed to that function
        when you pass an array you are passing pointers not copies of values, so any changes made to array in another function is global 
        but it does not work for variables


        Structure 
        define a  structure that can hold that type of data
        A collection of records
        Structures are precursers to classses
        code a structure and dynamicly allocate memory
        send record to function and return value

        Must have }; semicolen at the end of structure

                