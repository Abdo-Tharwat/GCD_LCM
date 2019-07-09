/******************************************************************************
 * Copyright (C) 2019 by Abdulrahman Tharwat - University of Zagazig
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright.
 *
 *****************************************************************************/
/**
 * @file: <GCD_LCM.h>
 * @brief: header file for getting great common multiplier and least common divider
 * @author: Abdulrahman Tharwat
 * @date: 9/7/2019
 *
 */


/*
This function take an array of integer and return least common multiplier for them
parameter:
    int *arr: array which wanted to get least common multiplier for it
    int a: length of this array
return:
    int : least common multiplier of passed array
*/
int LeastCommonMultiplier(int *arr , int a);



/*
This function take an array of integer and return great common divider for them
parameter:
    int *arr: array which wanted to get great common divider for it
    int a: length of this array
return:
    int : great common divider of passed array
*/
int GreatCommonDivider(int *arr , int a);




/*
This function take two integer return least common multiplier for them
parameter:
    int x: first number 
    int y: second number
return:
    int : least common multiplier of passed numbers
*/
int LCM( int x ,  int y);


/*
This function take two integer return great common divider for them
parameter:
    int x: first number 
    int y: second number
return:
    int : great common divider of passed numbers
*/
int GCD( int x ,  int y);

