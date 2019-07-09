/******************************************************************************
 * Copyright (C) 2019 by Abdulrahman Tharwat - University of Zagazig
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright.
 *
 *****************************************************************************/
/**
 * @file: <GCD_LCM.c>
 * @brief: source code for getting great common multiplier and least common divider
 * @author: Abdulrahman Tharwat
 * @date: 9/7/2019
 *
 */


#include"GCD_LCM.h"

int LCM_N_Num(  int arr[] ,  int num ,  int a );
int GCD_N_Num(  int arr[] , int num,  int a) ;


int LCM( int x ,  int y){
return ((y*x)/GCD(x,y));
}
int LCM_N_Num(  int arr[] ,  int num ,  int a ){
    if(a == 1){
        return LCM(num,arr[0]);
    }
    num = LCM(num,arr[a-2]);
    return LCM_N_Num( arr , num , a - 1);
}
int LeastCommonMultiplier(int arr[] , int a){
    int num = arr[a-1] ;
    return LCM_N_Num( arr ,   num ,  a);
}




int GCD( int x ,  int y){
    if(x%y == 0)
        return y ;
    return GCD( y , x%y ) ;
}

int GCD_N_Num( int arr[] ,  int num ,  int a){
    if (a == 1){ 
       return GCD(num , arr[0]);
    }
    num = GCD( num , arr[a-1] );
    return GCD_N_Num( arr , num , a-1 );
}

int GreatCommonDivider(int arr[] , int a){
    int num = 0 ;
    return GCD_N_Num( arr ,   num ,  a);
}

