/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                   First_Midterm_Q9

 ***********************************************************************************/


#include <stdio.h>
#include <string.h>
#include <math.h>

void get_string(unsigned char string[]){
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(string);

	return;
}

void get_display_revers_words(unsigned char string[]){
	short unsigned int end , strlength= strlen(string);
	end= strlength - 1;
	for(short signed int i= strlength - 1; i >= 0; i--){
		if(string[i] == ' '){
			for(short signed int j= i + 1; j <= end; j++) printf("%c", string[j]);
            end= i;
            printf(" ");
		}
	}

	for(short signed int i= 0; i < end; i++) printf("%c" , string[i]);

	return;
}

int main(void){

	unsigned char string[100];
	get_string(string);

	get_display_revers_words(string);

	return 0;

}

