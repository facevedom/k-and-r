#include <stdio.h>

/* print Celsius-Fahrenheit table
    for celsius = 0, 5, ..., 100; floating-point version */
main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 100;
    step = 5;
    
    printf("%6s %4s\n-----------\n", "C", "F");

    while(celsius <= upper) {
        fahr = ((9.0/5.0) * celsius) + 32.0;
        printf("%5.1f %5.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
