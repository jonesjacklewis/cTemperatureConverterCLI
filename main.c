#include <stdio.h>
#include <ctype.h>

int main(){
    printf("Welcome to the Temperature Covnerter!\n");

    printf("Would you like to convert [C]elsius to Fahrenehit or [F]ahrenehit to Celsius? ");

    char unit[64];
    scanf("%s", unit);

    if(unit[0] == '\0'){
        printf("Invalid Selection. Exiting.");
        return 1;
    }

    char first_char = tolower(unit[0]);

    if(first_char != 'c' && first_char != 'f'){
        printf("Invalid Selection %c. Exiting.\n", first_char);
        return 1;
    }

    printf("Enter the value in %c: ", toupper(first_char));

    float input_value;
    scanf("%f", &input_value);

    float output_value;
    char output_unit;

    if(first_char == 'c'){
        output_value = (input_value * (9.0/5.0)) + 32;
        output_unit = 'F';
    }else{
        output_value = (input_value - 32) * (5.0/9.0);
        output_unit = 'C';
    }

    printf("%f degrees %c is approximately equal to %f degrees %c\n", input_value, toupper(first_char), output_value, output_unit);
    return 0;
}