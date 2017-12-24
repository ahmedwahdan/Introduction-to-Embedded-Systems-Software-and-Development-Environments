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
 * @file stat.h 
 * @brief This file contains the declaration of the functions and the description of each one 
 *
 *
 * @author Ahmed Wahdan
 * @date 24/12/2017
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief The function recieves the array staticis to be printed 
 *
 * The function recieves the min, max, mean, and median value of an array
 *  and print them on the screen
 *
 * @param unsigned char min 		The minimum value in the array
 * @param unsigned char max 		The maximum value in the array
 * @param unsigned char mean 		The mean value of the array elements
 * @param unsigned char median 		The median element of the array
 *
 * @return void
 */

void print_statistics(unsigned char min, unsigned char max, unsigned char mean, unsigned char median);

/**
 * @brief The function prints the array elements on the screen
 *
 * The function recieves the array pointers and the array size and print the array elements to the screen
 *
 * @param unsigned char arr[] 		The array pinter
 * @param unsigned char arr_size 	The array size
 *
 * @return void
 */

void print_array(unsigned char arr[], unsigned char arr_size);

/**
 * @brief The function return the median element in the array
 *
 * The function recieves the array pointers and the array size and return the median element in the array
 *
 * @param unsigned char arr[] 		The array pinter
 * @param unsigned char arr_size 	The array size
 *
 * @return unsigned char median
 */

unsigned char find_median(unsigned char arr[], unsigned char arr_size);

/**
 * @brief The function return the mean value of the array
 *
 * The function recieves the array pointers and the array size and return the mean value of the array
 *
 * @param unsigned char arr[] 		The array pinter
 * @param unsigned char arr_size 	The array size
 *
 * @return unsigned char mean
 */

unsigned char find_mean(unsigned char arr[], unsigned char arr_size);

/**
 * @brief The function return the maximum value in the array
 *
 * The function recieves the array pointers and the array size and return the maximum value in the array
 *
 * @param unsigned char arr[] 		The array pinter
 * @param unsigned char arr_size 	The array size
 *
 * @return unsigned char maximum
 */

unsigned char find_maximum(unsigned char arr[], unsigned char arr_size);

/**
 * @brief The function return the minimum value in the array
 *
 * The function recieves the array pointers and the array size and return the minimum value in the array
 *
 * @param unsigned char arr[] 		The array pinter
 * @param unsigned char arr_size 	The array size
 *
 * @return unsigned char minimum
 */

unsigned char find_minimum(unsigned char arr[], unsigned char arr_size);

/**
 * @brief The function sort the array form largest ro smallest
 *
 * The function recieves the array pointers and the array size and sort the array form largest ro smallest
 *
 * @param unsigned char arr[] 		The array pinter
 * @param unsigned char arr_size 	The array size
 *
 * @return void
 */

void sort_array(unsigned char arr[], unsigned char arr_size);

#endif /* __STATS_H__ */
