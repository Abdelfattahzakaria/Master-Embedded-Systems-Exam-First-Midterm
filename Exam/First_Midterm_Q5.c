/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                   First_Midterm_Q5

 ***********************************************************************************/


#include <stdio.h>
#include <string.h>
#include <math.h>

void get_number(short signed int *number)
{
	printf("Enter a number: ");
	fflush(stdin); fflush(stdout);
	scanf("%hu" , number);

	return;
}

void count_display_result(short unsigned int size ,
		short unsigned int number_binary_digits[])
{
	short unsigned int count= 0;
	for(short signed int i= 0; i < size; i ++){
		if (number_binary_digits[i] == 1) count++;
		printf("%hu" , number_binary_digits[i]);
	}
	printf(" so has %hu one's\n" , count);

	return;
}

void get_binary_digits(short unsigned int number ,
		short unsigned int number_binary_digits[])
{
	short unsigned int index= 0;
	if(number == 0) number_binary_digits[index++]= 0;
	else
	{
		while(number != 0){
			if(number % 2 == 0) number_binary_digits[index++]= 0 ;
			else number_binary_digits[index++]= 1;

			number= trunc(number / 2);

		}
	}

	printf("binary of %hu is " , number);
	count_display_result(index , number_binary_digits);

	return;
}
int main(void){

	short unsigned int number , number_binary_digits[100];
	get_number(&number);

	get_binary_digits(number , number_binary_digits);

	return 0;

}

