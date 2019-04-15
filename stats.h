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
 * @file stats.h 
 * @brief Function declarations for stats.c
 *
 * @author RESHMA KOTAMSETTY
 * @date April 14, 2019
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief A function that prints the statistics of an array including minimum, 
 * maximum, mean, and median
 *
 * @param array: The given array for which the statistics need to be printed
 * @param length: Length of the given array
 * @return none
 */
void print_statistics(unsigned char * a, unsigned int len);

/**
 * @brief Given an array of data and a length, prints the array to the screen
 *
 * @param array: The given array to be printed
 * @param length: Length of the given array
 * @return none
 */
void print_array(unsigned char * a, unsigned int len);

/**
 * @brief Given an array of data and a length, returns its median value
 *
 * @param array: The given array for which the median need to be computed
 * @param length: Length of the given array
 * @return The median of given array
 */
unsigned char find_median(unsigned char * a, unsigned int len);

/**
 * @brief Given an array of data and a length, returns its mean value
 *
 * @param array: The given array for which the mean needs to be computed
 * @param length: Length of the given array
 * @return The mean of given array
 */
unsigned char find_mean(unsigned char * a, unsigned int len);

/**
 * @brief Given an array of data and a length, returns the maximum
 *
 * @param array: The given array
 * @param length: Length of the given array
 * @return The maximum of given array
 */
unsigned char find_maximum(unsigned char * a, unsigned int len);

/**
 * @brief Given an array of data and a length, returns its minimum
 *
 * @param array: The given array
 * @param length: Length of the given array
 * @return The minimum of given array
 */
unsigned char find_minimum(unsigned char * a, unsigned int len);

/**
 * Given an array of data and a length, sorts the array from largest to smallest
 *
 * @param array: The given array 
 * @param length: Length of the given array
 * @return none
 */
void sort_array(unsigned char * a, unsigned int len);

#endif /* __STATS_H__ */
