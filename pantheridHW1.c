    #include <math.h>
    #include <stdio.h>

// msameer1
    double calcTime (double h, double g ){
        
        double t;
        double temp;
        temp = 2*(h/g) ;
        t =sqrt (temp);
        

        return t;

        }

        double velocitCalc (double g, double time ){
        
        
        double velocity;
        velocity =g*time;
        
       return velocity ;
       
        }
        
        double kinetic(double mass, double v){

            double e;
            e= (1/2)*(mass)*(v*v);

        return e ;

        }

    int main ( void ){

        double  t;
        double mass;
        double height;
        double gravity = 9.8;
        double e;
        double v;

        printf("Enter the Mass (m) of the object thrown (in Kilograms): " ); 
        scanf ("%lf ", &mass);

        printf("Enter the height (h) for which the object is droped in meteres: ");
        scanf ("%lf ", &height);

        t = calcTime (height, gravity);
        //printf("time is %lf\n", t );

        v=velocitCalc(gravity, t);
        //printf("the velocity is %lf\n", v);

        e=velocitCalc(mass, v);
       //printf("the velocity is %lf\n", e);

       printf("\nThe time taken by an object weighing %.2lf \n"
            "kilograms to reach the ground when dropped from a height of %.2lf meters \n"
            "=  %.2lf s The velocity of the object when it hits the ground = %.2lf m/s \n"
            " The kinetic energy of the object thrown = %.2lf Joules \n", mass, height, t, v, e );

    }
      


        

        




    