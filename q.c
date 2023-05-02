/*!
@file        q.c
@author      Timothy Lee (timothykexin.lee@digipen.edu.sg)
@course      RSE 1201
@section     Assignment
@assignment  3
@date        24/09/2021
@brief       This file contains code for function temperature_convertor. The 
             purpose is to use in the assigned value from the main source 
             code using the variable Fahrenheit, and to convert the temperature 
             to Celsius and Kelvin scales and print the output on the screen.

             E.g.
             Fahrenheit     Celsius        Kelvin         
             ---------------------------------------------
             0              -17.78         255.37         
*//*___________________________________________________________________________*/

#include <stdio.h>  // printf

/*!
@brief      This function, temperature_convertor, converts the temperature 
            scale from Fahrenheit to Celsius and Kelvin, and displays it to 
            the output stream.
            
            To perform conversion of temperatures from Fahrenheit to Celsius
            - Subtract 32 from the Fahrenheit temperature
            - Multiply this number by 5
            - Divide the result by 9
            To convert Celsius to Kelvin
            - Add 273.15 to the Celsius temperature.
            
@para       int fahrenheit - receives assigned int input from main to be used 
                             in this function.
@return     This function returns nothing.
*//*___________________________________________________________________________*/

void temperature_convertor(int fahrenheit)
{
    double celsius = 0, kelvin = 0;

	celsius = ((double)fahrenheit-32)*5 /9;
    kelvin = celsius + 273.15;

    printf("Fahrenheit     Celsius        Kelvin         \n");
    printf("---------------------------------------------\n");
    //%-15d for justified left with empty spaces as padding 
    printf("%-15d%-15.2lf%-13.2lf\n", fahrenheit, celsius, kelvin); 

//diff --strip-trailing-cr -y --suppress-common-lines myout.txt out.txt
}