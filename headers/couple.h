/*
 * couple.h
 *
 *  Created on: 25-Feb-2017
 *      Author: slowb
 */

#ifndef COUPLE_H_
#define COUPLE_H_
#include "Girl.h"
#include "Boy.h"
#include "gifts.h"

class couple{

	float gifts_val;
public:
	time_t  timev;
    Boy boy;
	Girl girl;
	int happiness;
	int compatiblity;
	float budget;
	couple(Boy b,Girl g){
		boy=b;
		girl=g;
		happiness=boy.getHappy()+girl.getHappy();
		compatiblity= boy.budget-girl.budget + abs(boy.attrctvnss-girl.attrctvnss) + abs(boy.intelLevel-boy.intelLevel);
		boy.set_commited();
		girl.set_commited();
		gifts_val=0.0;
		time(&timev);
		budget=boy.budget;
	}
	float get_gift_val(){
		return gifts_val;
	}
	void add_gifts(gifts g,couple c){
		gifts_val+=g.price;
		budget-=g.price;
		girl.addGift(g);
		boy.addGifts(g,c.girl);

	}
	void update_budget(float f){
		budget=f;
		boy.budget=f;
	}
	float getVal(){
		return gifts_val;
	}
};

#endif /* COUPLE_H_ */
