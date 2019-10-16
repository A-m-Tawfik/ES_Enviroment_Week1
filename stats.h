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
 * @file  stats.h 
 * @brief this file holds the interfaces of the stats SWC
 *
 * 
 * @author Ahmed Tawfik
 * @date   16/10/2019
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief <Print the array elements with index number each element in sperate line>
 *
 * @param <arr> <Pointer to unsigned char to pass the array base address>
 * @param <size> <array size>
 *
 * @return <void>
 */
void print_array(unsigned char* arr, unsigned int size);

/**
 * @brief <Sort the array first and check if the size odd or even to find the median proprly>
 *
 * @param <arr> <Pointer to unsigned char to pass the array base address>
 * @param <size> <array size>
 *
 * @return <unsigned char>
 */
 unsigned char find_median(unsigned char* arr, unsigned int size);

/**
 * @brief <Get the average value of the all of the array elements>
 *
 * @param <arr> <Pointer to unsigned char to pass the array base address>
 * @param <size> <array size>
 *
 * @return <unsigned char>
 */
 unsigned char find_mean(unsigned char* arr, unsigned int size);

 /**
 * @brief <Get max element value of the givien array>
 *
 * @param <arr> <Pointer to unsigned char to pass the array base address>
 * @param <size> <array size>
 *
 * @return <unsigned char>
 */
 unsigned char find_maximum(unsigned char* arr, unsigned int size);

 /**
 * @brief <Get min element value of the givien array>
 *
 * @param <arr> <Pointer to unsigned char to pass the array base address>
 * @param <size> <array size>
 *
 * @return <unsigned char>
 */
 unsigned char find_minimum(unsigned char* arr, unsigned int size);

 /**
 * @brief <Use the bubble sort algrithm to sort the givien array>
 *
 * @param <arr> <Pointer to unsigned char to pass the array base address>
 * @param <size> <array size>
 *
 * @return <void>
 */
 void sort_array(unsigned char* arr, unsigned int size);



#endif /* __STATS_H__ */