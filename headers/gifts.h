/*
 * gifts.h
 *
 *  Created on: 24-Feb-2017
 *      Author: slowb
 */
#include "common.h"
#ifndef GIFTS_H_
#define GIFTS_H_

class gifts {
public:
	string name;
	float price;
	int value;
	giftType type;
	gifts(){
			name="";
			price=0.0f;
			value=0;
			type=USELESS;
		}
	gifts(string n,float f,int v){
		name=n;
		price=f;
		value=v;
		type=USELESS;
	}
	void setType(giftType gt){
		type=gt;
	}
	~gifts(){

	}
	string get_tpye(){
		if(type==LUXURY){
			return "LUXURY";
		}
		else if(type==ESSENTIAL){
			return "ESSENTIAL";
		}
		else{
			return "UTILITY";
		}
	}
};

#endif /* GIFTS_H_ */
