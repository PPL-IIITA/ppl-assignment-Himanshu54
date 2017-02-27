/*
 * Boy.h
 *
 *  Created on: 24-Feb-2017
 *      Author: slowb
 */
#include "common.h"
#include "Girl.h"
#ifndef BOY_H_
#define BOY_H_

class Boy {
private:
	commitment status;
	boyType type;

public:
	string name;
	int attrctvnss;
	float budget;
	int intelLevel;
	int happiness;
	float gifted_val;
	Boy() {
				name = "";
				attrctvnss = 0;
				budget = 0.0f;
				intelLevel  = 0;
				status = SINGLE;
				type = INITIAL;
				happiness=0;
				gifted_val=0;

	}
	Boy(string i_name , int i_attrctvnss , float i_budget , int i_intelLevel, boyType i_gtype){

				name=i_name;
				attrctvnss=i_attrctvnss;
				budget=i_budget;
				intelLevel =i_intelLevel;
				type =i_gtype;
				status=SINGLE;
				happiness=0;
				gifted_val=0;
	}
	virtual ~Boy(){

	}
	void addGifts(gifts g,Girl c){
			gifted_val+=g.price;
			if(type == MISER){
				happiness=budget-gifted_val;
			}
			else if(type == GEEKS){
				happiness = c.intelLevel;
			}
			else
			{
				happiness = c.getHappy();
			}

		}
	void setHappy(int h){
			happiness = h;
		}
	int getHappy(){
			return happiness;
		}
	void setType(boyType t){
		type=t;
	}
	boyType getType(){
			return type;
	}
		int commited(){
		if(status==SINGLE) return 0;
		else return 1;
	}
	void set_commited(){
		status=COMMITTED;
	}
};

#endif /* BOY_H_ */
