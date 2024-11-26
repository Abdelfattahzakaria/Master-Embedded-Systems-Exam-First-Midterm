/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                   First_Midterm_Q8

 ***********************************************************************************/


#include <stdio.h>
#include <string.h>
#include <math.h>

void get_array_size(short unsigned int *array_size){
	printf("Enter then size of array: ");
	fflush(stdin); fflush(stdout);
	scanf("%hu" , array_size);

	return;
}

void get_array_data(short unsigned int *array_size, short unsigned int numbers[]){
    for(short unsigned int i= 0; i < *array_size; i++){
    	printf("Enter element a%hu: " , i + 1);
    	fflush(stdin); fflush(stdout);
    	scanf("%hu" , &numbers[i]);
    }

	return;
}

void display_data(short unsigned int *array_size, short unsigned int reverse_array[]){
	printf("\nReverse array: ");
	for(short unsigned int i= 0; i < *array_size; i++) printf("%hu\t" , reverse_array[i]);

	return;
}

void get_reverse_array(short unsigned int *array_size, short unsigned int numbers[]){
	short unsigned int reverse_array[*array_size];
	printf("Original array: ");
    for(short unsigned int i= 0; i < *array_size; i++){
    	reverse_array[*array_size - i -1]= numbers[i];
    	printf("%hu\t" , numbers[i]);
    }
    display_data(array_size , reverse_array);

	return;
}

int main(void){

	short unsigned int array_size;
	get_array_size(&array_size);

	short unsigned int numbers[array_size];
	get_array_data(&array_size , numbers);

	get_reverse_array(&array_size , numbers);

	return 0;

}

