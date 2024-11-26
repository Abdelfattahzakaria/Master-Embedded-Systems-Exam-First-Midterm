/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                   First_Midterm_Q1 

 ***********************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

void get_number(signed char number[]){
	printf("Enter a number: ");
	fflush(stdin); fflush(stdout);
	gets(number);

	return;
}


void get_display_summation(signed char number[]){
	short signed int summation= 0 , index= 0;
	while(number[index] != '\0') summation+= number[index++] - '0';

	printf("Summation of entered string digits %s = %hd\n" , number , summation);

	return;
}

int main(void){

	signed char number[100];
	get_number(number);

	get_display_summation(number);

	return 0;

}


