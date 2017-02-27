/*
 * utilFunc.h
 *
 *  Created on: 26-Feb-2017
 *      Author: slowb
 */

#ifndef UTILFUNC_H_
#define UTILFUNC_H_
#include "couple.h"
#include <time.h>
/**
    * Comparator function for sort function on vector for comparing @param Boy-1 and @param Boy-2 based on their budget
    * @return A boolean data type.
    */
bool comp_function_b(Boy b1,Boy b2){
	if(b1.budget<b2.budget)
		return true;
	return false;
}
/**
    * Comparator function for sort function on vector for comparing @param Girl-1 and @param Girl-2 based on their budget
    * @return A boolean data type.
    */
bool comp_function_g(Girl b1,Girl b2){
	if(b1.budget<b2.budget)
		return true;
	return false;
}
/**
    * Comparator function for sort function on vector for comparing @param Gift-1 and @param Gift-2 based on their price
    * @return A boolean data type.
    */
bool comp_function_gf(gifts b1,gifts b2){
	if(b1.price<b2.price)
		return true;
	return false;
}
/**
    * Comparator function for sort function on vector for comparing @param couple-1 and @param couple-2 based on their happiness
    * @return A boolean data type.
    */
bool comp_function_cpl(couple c1,couple c2){
	if(c1.happiness<c2.happiness)
		return true;
	return false;
}
/**
    * Comparator function for sort function on vector for comparing @param couple-1 and @param couple-2 based on their compatiblity
    * @return A boolean data type.
    */
bool comp_function_cpl2(couple c1,couple c2){
	if(c1.compatiblity<c2.compatiblity)
		return true;
	return false;
}


#endif /* UTILFUNC_H_ */
