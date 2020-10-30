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
 * @brief Report statistics header
 *
 * analyze an array of unsigned char data items
 * report analytics on the maximum, minimum, ? mean, and median of the data set
 *
 * @author Mahima Sunny
 * @date 10-29-2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
/**
 * @brief print_statistics
 *
 * print_statistics the input array
 *
  * @param char array input *arr
 * @param array size n
 *
 */
void print_statistics(unsigned char *arr, int n);

/**
 * @brief print_array
 *
 * print the input array
 *
  * @param char array input *arr
 * @param array size n
 *
 */
void print_array(unsigned char *arr, int n);

/**
 * @brief find_median
 *
 * finds and returns the median of an input array
 *
 * @param <Add InputName> char array input *arr
 * @param <Add InputName> array size n
 *
 * @return return int value equal to median
 */
double find_median(unsigned char *arr, int n);

/**
 * @brief find_mean
 *
 * finds and returns the mean of an input array
 *
  * @param <Add InputName> char array input *arr
 * @param <Add InputName> array size n
 *
 * @return return int value equal to mean
 */
int find_mean(unsigned char *arr, int n);


/**
 * @brief find_maximum
 *
 * finds and returns the maximum of an input array
 *
  * @param char array input *arr
 * @param array size n
 *
 * @return return int value equal to maximum
 */
int find_maximum(unsigned char *arr, int n);

/**
 * @brief find_minimum
 *
 * finds and returns the minimum of an input array
 *
  * @param char array input *arr
 * @param array size n
 *
 * @return return int value equal to minimum
 */
int find_minimum(unsigned char *arr, int n);

/**
 * @brief sort
 *
 * sorts the input array
 *
  * @param char array input *arr
 * @param array size n
 *
 */
void sort(unsigned char *arr, int n);

#endif /* __STATS_H__ */
