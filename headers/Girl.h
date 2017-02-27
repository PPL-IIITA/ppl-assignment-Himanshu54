/*
 * Girl.h
 *
 *  Created on: 23-Feb-2017
 *      Author: slowb
 */

#ifndef GIRL_H_
#define GIRL_H_

#include "common.h"
#include "gifts.h"
#include <math.h>

//Class declaration

class Girl {
	/*
	 * private data members
	 */
private:

	commitment status;
	criteria choosingCrit ;
	girlType type;
	int happiness;

	/*
	 * public data members
	 */
public:
	string name;
	int attrctvnss;
	float budget;
	int intelLevel;
	float totalGift;
	Girl(){
			name = "";
			attrctvnss = 0;
			budget = 0.0f;
			intelLevel  = 0;
			choosingCrit = NONE;
			status = SINGLE;
			type = DEFAULT;
			happiness=0;
			totalGift=0;

	}

	Girl(string i_name , int i_attrctvnss , float i_budget , int i_intelLevel , criteria i_choosingCrit , girlType i_gtype){

				name=i_name;
				attrctvnss=i_attrctvnss;
				budget=i_budget;
				intelLevel =i_intelLevel;
				choosingCrit =i_choosingCrit;
				type =i_gtype;
				status=SINGLE;
				happiness=0;
				totalGift=0;
	}
	int commited(){
			if(status==SINGLE) return 0;
			else return 1;
		}
		void set_commited(){
			status=COMMITTED;
		}
	virtual ~Girl(){

	}
	void setType(girlType t){
		type=t;
	}
	void setHappy(int h){
		happiness = h;
	}
	int getHappy(){
		return happiness;
	}
	void addGift(gifts g ){
		if(type ==NORMAL){
			totalGift+= g.price+g.value;
			happiness=totalGift;
		}
		else if(type==CHOOSY){
			if(g.type==LUXURY){
				totalGift+=g.price+ 2*g.value;
			}
			else totalGift+=g.price;

			happiness=log(totalGift);
		}
		else{
			totalGift+= g.price;
			happiness=log(totalGift);
		}
	}
};

#endif /* GIRL_H_ */
