/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief This file contains the functions definition and the main function
 *
 *
 * @author Ahmed Wahdan
 * @date 	24/12/2017
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
           
}


void print_statistics(unsigned char min, unsigned char max, unsigned char mean, unsigned char median)
{
	printf("Minimum value = %d\n", min);
	printf("Maximum value = %d\n", max);
	printf("Mean 	value = %d\n", mean);
	printf("Median 	value = %d\n", median);
}



void print_array(unsigned char arr[], unsigned char arr_size)
{
	unsigned char index = 0U;
	for (index = 0; index < arr_size; index++)
	{
		if ((index % 4 )== 0)
		{
			printf("\n");
		}
		printf("%3d ", arr[index]);

	}
	printf("\n");
}



unsigned char find_median(unsigned char arr[], unsigned char arr_size)
{
	unsigned char median_Index 	= 	0U;
	unsigned char median_value	=	0U;
	if (arr_size % 2)
	{
		median_Index	=	(arr_size / 2) + 1;
		median_value	=	arr[median_Index];

	}
	else
	{
		median_Index 	=	(arr_size / 2);
		median_value	=	((arr[median_Index] + arr[median_Index + 1]) / 2);

	}
	return median_value;
}



unsigned char find_mean(unsigned char arr[], unsigned char arr_size)
{
	unsigned char sum   = 0U;
	unsigned char index = 0U;
	for (index = 0; index < arr_size ; index++)
	{
		
		sum += arr[index];
	
	}
	return (sum / arr_size);
}


unsigned char find_maximum(unsigned char arr[], unsigned char arr_size)
{
	unsigned char max   = 0U;
	unsigned char index = 0U;
	for (index = 0; index < arr_size ; index++)
	{
		if (arr[index] > max)
		{
			max = arr[index];
		}
		else
		{
			/*	Do Nothing	*/
		}
	}
	return max;
}



unsigned char find_minimum(unsigned char arr[], unsigned char arr_size)
{
	unsigned char min   = 255U;
	unsigned char index = 0U;
	for (index = 0; index < arr_size ; index++)
	{
		if (arr[index] < min)
		{
			min = arr[index];
		}
		else
		{
			/*	Do Nothing	*/
		}
	}
	return min;
}



void sort_array(unsigned char arr[], unsigned char arr_size)
{
	unsigned char index1	=	0U;
	unsigned char index2	=	0U;
	unsigned char temp		=	0U;
	for (index1 = 0; index1 < (arr_size - 1); index1++)
	{
		for (int index2 = 0; index2 < (arr_size - index1 - 1); ++index2)
		{
				if (arr[index2] < arr[index2 + 1])
				{
					temp = arr[index2 + 1];
					arr[index2 + 1] = arr[index2];
					arr[index2]	=	temp;
				}	
		}
	}
}
