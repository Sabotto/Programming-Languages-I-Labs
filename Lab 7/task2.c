#include <stdio.h>
#include <math.h>

int main() {

    int JulTemp[31] = {24, 19, 27, 22, 25, 28, 18, 21, 26, 23, 20, 25, 27, 19, 
    24, 22, 28, 18, 26, 21, 23, 25, 20, 27, 19, 24, 22, 28, 18, 26, 21};    
    
    //Finding mean
    int sum=0;
    double mean;
    
    for(int i=0; i<31; i++){
        sum+=JulTemp[i];
    }
    mean = (double)sum/31.0;
    printf("The mean temperature is: %.2f\n", mean);

    //Finding median
    int temp;
    for(int i=0; i<31; i++){
        for(int j=i+1; j<31; j++){
            if(JulTemp[i]>JulTemp[j]){
                temp=JulTemp[i];
                JulTemp[i]=JulTemp[j];
                JulTemp[j]=temp;
            }
        }
    }
    printf("The median temperature is: %d\n", JulTemp[15]);

    //Finding standard deviation
    double stdDev=0;
    for(int i=0; i<31; i++){
        stdDev+=pow(JulTemp[i]-mean, 2);
    }
    stdDev=sqrt(stdDev/31.0);
    printf("The standard deviation is: %.2f\n", stdDev);
    
    return 0;
}
