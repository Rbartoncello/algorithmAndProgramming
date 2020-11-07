#include<stdio.h>

int main(void){

    float first_exp, second_exp, third_exp, fourth_exp, amount=6;
    double  date1_exp1=23.2, date2_exp1=31.0, date3_exp1=16.9, date4_exp1=27.0, date5_exp1=28.0, date6_exp1=6.0,
            date1_exp2=34.8, date2_exp2=45.5, date3_exp2=27.9, date4_exp2=36.0, date5_exp2=33.0, date6_exp2=39.0,
            date1_exp3=19.2, date2_exp3=16.0, date3_exp3=10.9, date4_exp3=20.0, date5_exp3=25.0, date6_exp3=16.0,
            date1_exp4=75.2, date2_exp4=58.0, date3_exp4=58.9, date4_exp4=45.0, date5_exp4=52.0, date6_exp4=21.0;

    first_exp = (date1_exp1 + date2_exp1 + date3_exp1 + date4_exp1 + date5_exp1 + date6_exp1)/amount;
    second_exp = (date1_exp2 + date2_exp2 + date3_exp2 + date4_exp2 + date5_exp2 + date6_exp2)/amount,
    third_exp = (date1_exp3 + date2_exp3 + date3_exp3 + date4_exp3 + date5_exp3 + date6_exp3)/amount;
    fourth_exp = (date1_exp4 + date2_exp4 + date3_exp4 + date4_exp4 + date5_exp4 + date6_exp4)/amount;

    printf("El promedio de los resultados del ensayo para:\n\tPrimer experimento: %.2f\n\tSegundo experimento: %.2f\n\tTercer experimento: %.2f\n\tCuarto experimento: %.2f\n", 
        first_exp,second_exp, third_exp, fourth_exp);

    return 0;
}