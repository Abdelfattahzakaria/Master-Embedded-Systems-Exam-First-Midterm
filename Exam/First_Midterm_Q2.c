/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                   First_Midterm_Q2

 ***********************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

void get_number(short unsigned int *number){
	printf("Enter a number to gett its sqrt root: ");
	fflush(stdin); fflush(stdout);
	scanf("%hu" , number);

	return;
}

void get_display_sqrt(short unsigned int *number){
	printf("Square root of %hu= %f\n" , *number , sqrt(*number));

	return;
}

int main(void){

	short unsigned int number;
	get_number(&number);
	printf("%hu\n" , number);

	get_display_sqrt(&number);

	return 0;

}


