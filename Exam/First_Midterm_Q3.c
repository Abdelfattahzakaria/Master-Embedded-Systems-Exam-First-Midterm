/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                   First_Midterm_Q3

 ***********************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>


void get_intervals(short unsigned int *interval_beg , short unsigned int *interval_end){
	printf("Enter two numbers (interval):\n");
	fflush(stdin); fflush(stdout);
	scanf("%hu %hu" , interval_beg , interval_end);
}

short unsigned int check_number(short unsigned int num){
	for(short unsigned int i= 2; i < num; i++){
		if(num % i == 0) return 0;
	}

	return 1;
}

short unsigned int get_primes(short unsigned int interval_beg ,
		short unsigned interval_end , short unsigned int interval_primes[]){
	short unsigned int index= 0;
	for(short unsigned int i= interval_beg + 1; i < interval_end; i++){
		if(check_number(i)) interval_primes[index++]= i;
	}

	return index;
}

void display_primes(short signed int interval_status , short signed int interval_beg ,
		short signed int interval_end , short unsigned int interval_primes[]){
	if(interval_status == 0){
		printf("There Are No Prime Numbers Within Passing Interval %hu : %hu\n" ,
				interval_beg , interval_end);
		return;
	}

	printf("Prime numbers between %hu and %hu are: \t" , interval_beg , interval_end);
	for(short unsigned int i= 0; i < interval_status; i++) printf("%hu\t" ,
			interval_primes[i]);
	printf("\n");

    return;
}


int main(void){

	short unsigned int interval_beg , interval_end;
	get_intervals(&interval_beg , &interval_end);

	short unsigned int interval_primes[interval_end - interval_beg];
	short signed int interval_status= get_primes(interval_beg , interval_end ,
			interval_primes);


	display_primes(interval_status , interval_beg , interval_end , interval_primes);

	return 0;
}


