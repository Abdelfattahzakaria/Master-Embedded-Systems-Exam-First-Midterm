/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                   First_Midterm_Q4

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


void get_display_reverse(signed char number[]){
	signed char number_reverse[100];
	short signed int rows= strlen(number) - 1;
	for(short signed int i= rows; i >= 0; i--) number_reverse[rows - i]= number[i];
	number_reverse[rows + 1]= '\0';

	printf("Original entered number digits: %s\n" , number);
	printf("Reverse entered number digits: %s\n" , number_reverse);

	return;
}

int main(void){

	signed char number[100];
	get_number(number);

	get_display_reverse(number);

	return 0;

}

