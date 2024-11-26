/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                   First_Midterm_Q10

 ***********************************************************************************/


#include <stdio.h>
#include <string.h>
#include <math.h>

void get_string(signed char string[]){
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(string);

	return;
}

void get_display_ones_count(signed char string[]){
	short signed int strlength= strlen(string) , beg= -1 , max_count= -1;
	for(short signed int i= 0; i < strlength; i++){
		if(string[i] == '0' && beg != -1){
			if((i - beg -1) > max_count) max_count= i - beg - 1;
			beg= -1;
		}

		if(string[i] == '0') beg= i;
	}
	printf("maximum number of one's within: %s are: %hd\n" , string ,  max_count);

	return;
}

int main(void){

	signed char string[100];
	get_string(string);

	get_display_ones_count(string);

	return 0;

}

