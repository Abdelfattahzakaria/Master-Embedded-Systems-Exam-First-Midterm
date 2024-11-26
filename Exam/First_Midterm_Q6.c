/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                   First_Midterm_Q6

 ***********************************************************************************/


#include <stdio.h>
#include <string.h>
#include <math.h>

void get_array_size(short unsigned int *array_size)
{
	printf("Enter the size of array: ");
	fflush(stdin); fflush(stdout);
	scanf("%hu" , array_size);

	return;
}

void get_array_data(short unsigned int *array_size , short unsigned int numbers[])
{
	for(short unsigned int i= 0; i < *array_size; i++){
		printf("Enter a%hu: " , i+1);
		fflush(stdin); fflush(stdout);
		scanf("%hu" , &numbers[i]);
	}

	return;
}

short unsigned int get_unique_number(short unsigned int *array_size , short unsigned int numbers[])
{
	short unsigned int res= 0;
	for(short unsigned int i= 0; i < *array_size; i++) res^= numbers[i];
	return res;
}

void display_info(short unsigned int unique_value ,
		short unsigned int *array_size , short unsigned int numbers[])
{
	printf("For your entered array numbers: ");
	for(short unsigned int i= 0; i < *array_size; i++) printf("%hu\t" , numbers[i]);

	printf("\nUnique value is: %hu\n" , unique_value);

	return;
}

int main(void){

	short unsigned int array_size;
	get_array_size(&array_size);

	short unsigned int numbers[array_size];
	get_array_data(&array_size , numbers);

	display_info(get_unique_number(&array_size , numbers) , &array_size , numbers);

	return 0;

}

