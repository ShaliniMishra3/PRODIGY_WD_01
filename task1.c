//Task-1
//Create a program that converts temperatures between
// Celsius,Fahrenheit,and Kelvin scales.
  #include<stdio.h>
  int main()

{
    int input_value;
    printf("Enter a value in Celcius and convert this value to Farhenheight and kelvin:");
    printf("\ninput_Value:");
    scanf("%d",&input_value);
    printf("Fahrenheit:%dF",(input_value*9/5)+32);
    printf("\nkelvin:%.2fK",(input_value+273.15));
    return 0;
}
