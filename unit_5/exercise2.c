#include <stdio.h>

typedef enum {
    TEMP_CELSIUS,
    TEMP_FAHRENHEIT
} scale_t;

double calculete_temperature(double, int);

int main (void){
    double temperature = 30, result = 0;

    scale_t scale = TEMP_FAHRENHEIT;

    result = calculete_temperature(temperature, scale);

    printf("%.2f\n", result);
    
    return 0;
}


double calculete_temperature(double temp, int s){

    double total;

    switch (s){
        case TEMP_CELSIUS:
            total = (temp - 32) * (float) 5/9;
            break;
        case TEMP_FAHRENHEIT:
            total = (temp * (float) 9/5) + 32;
            break;
    }
    return total;
}