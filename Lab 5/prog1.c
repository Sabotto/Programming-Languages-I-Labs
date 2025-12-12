#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(){
    
    const double totalPointsSteps[]={7,70,700,7000,70000};
    int stepNumber = sizeof(totalPointsSteps)/sizeof(totalPointsSteps[0]);
    
    srand(time(NULL));

    for(int step = 0; step<stepNumber; step++){
        double totalPoints = totalPointsSteps[step];
        double circlePoints = 0;
        double x,y,piEst;

        for(double i=0; i<totalPoints; i++){
            x=2.0*((double)rand()/RAND_MAX)-1.0;
            y=2.0*((double)rand()/RAND_MAX)-1.0;

            if((x*x)+(y*y)<=1.0){
            circlePoints++;
            }
        }
        piEst = 4.0*(circlePoints/totalPoints);

        printf("Estimation of Pi (Number Generation: %f) = %f\n", totalPointsSteps[step], piEst);   
    }

    return 0;

    //THIS FILE CONTAINS QUESTIONS 1 AND 2
}