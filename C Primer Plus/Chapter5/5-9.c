//�����¶� = 5.0 / 9.0 * (�����¶� - 32.0)
//�����¶� = �����¶� + 273.16
#include <stdio.h>
void Temperatures(double n);
int main(void){
    int x;
    double fahrenheit;
    printf("Enter a Fahrenheit degree: ");
    x = scanf("%lf", &fahrenheit);
    while (x == 1){
        Temperatures(fahrenheit);
        printf("Enter a Fahrenheit degree(press 'q' or 'not a number' to quit): ");
        x = scanf("%lf", &fahrenheit);
    }
    printf("Done.");
    return 0;
}
void Temperatures(double n){
    printf("%lf %.2lf\n", n, n+100);
    double const FAHRENHEIT_TO_CELSIUS = 5.0/9.0;
    double const FAHRENHEIT_TO_KELVIN = 273.16;
    double celsius, kelvin;
    printf("%lf %lf\n", (double)FAHRENHEIT_TO_CELSIUS, (double)FAHRENHEIT_TO_KELVIN);
    celsius = ( n - 32.0 ) * FAHRENHEIT_TO_CELSIUS;
    kelvin = n + FAHRENHEIT_TO_KELVIN;
    printf("�����¶ȣ�%.2lf�H �����¶ȣ�%.2lf�� �����¶ȣ�%.2lfK\n", n, celsius, kelvin);
}