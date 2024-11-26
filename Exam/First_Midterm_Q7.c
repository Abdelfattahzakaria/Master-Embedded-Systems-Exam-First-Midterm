/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                   First_Midterm_Q7

 ***********************************************************************************/


#include <stdio.h>
#include <string.h>
#include <math.h>

short signed int get_sum(short signed int number){
	static short signed int sum= 0;
	if(number > 0){
		get_sum(number - 1);
		sum+= number;
	}

	return sum;
}

void display_result(short signed int summation){
	printf("Summation of numbers 1 : 100= %hd\n" , summation);

	return;
}

int main(void){
	short signed int interval_end= 100;
	display_result(get_sum(interval_end));

	return 0;

}

