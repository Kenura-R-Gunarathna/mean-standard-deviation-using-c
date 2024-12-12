/*
    Program: Calculate Mean and SD
    Version: 1.0
    Author: Kenura R. Gunarathna
    Date: 2024/12/12
    Compile Command: gcc mean_sd.c -o mean_sd -l m 
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char * argv[]){
    
    float sd = 0;
    float mean = 0;
    float current = 0;
    int n = argc - 1;

    for(int i = 1; i < argc; i++){
        current = atof(argv[i]); 
        mean += current;
        sd += current * current;
    }
    
    mean = mean / n;
    sd = sqrt(sd / n - mean * mean);
    
    printf("Mean: %.2f\n", mean);
    printf("SD: %.2f\n", sd);
    
    return 0;
    
}
