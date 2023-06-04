#include<stdio.h>
int main() {
    float temperature;
    printf("Enter the current temperature in degrees Celsius: ");
    scanf("%f", &temperature);

    float threshold = 30.0; 

    if (temperature > 30.0) 
	{
        printf("Temperature exceeds safe limits.\n");
    }  
	else
	 {
        printf("Temperature is within safe limits.\n");
    }

    return 0;
}
