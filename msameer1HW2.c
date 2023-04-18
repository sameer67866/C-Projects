#include <math.h>
#include <stdio.h>


    double PI = 3.14;

    double area(double PI){
        double h;
        double r;

        FILE* ToRead;

        ToRead = fopen ("dataHW2.txt","r");
        fscanf(ToRead,"%lf \n",&r);
        fscanf(ToRead,"%lf \n ",&h);


      //printf("testing radius= %lf\n height %lf \n", r,h );
        fclose(ToRead);

    
        double Area = (PI*r *(r +(sqrt((pow(r,2))+pow(h,2))))) ;
       


        return Area;
           
            //return results

    }

    int main (void){
    
    double Area;
    double height;
    double radius;

     printf("Enter the radius of the cone: \n " ); 
        scanf ("%lf", &radius);

    printf("Enter the height of the cone: \n ");
        scanf ("%lf", &height);
    
    FILE* data;

    data = fopen ("dataHW2.txt","w+");
    fprintf(data,"%lf \n", radius );
    fprintf(data,"%lf \n" , height);

    //fprintf(data,"%lf", height);
    fclose(data);

    Area = area(PI);
    printf("print area %f:\n", Area);

    
    // call area function
    // print the area




  }