/*
 * Girl.cpp
 *
 *  Created on: 23-Feb-2017
 *      Author: slowb
 */

#include <string>
#include "Girl.h"


/*
 * default constructor for girl initializing all variables to default values and status to SINGLE
 */
Girl::Girl() {
		name = "";
		attrctvnss = 0;
		budget = 0.0f;
		intelLevel  = 0;
		choosingCrit = NONE;
		status = SINGLE;
		gtype = DEFAULT;

}

/*
 * Parameterized constructor for girl , status still SINGLE
 */
Girl::Girl(string i_name , int i_attrctvnss , float i_budget , int i_intelLevel , criteria i_choosingCrit , girlType i_gtype){

			name=i_name;
			attrctvnss=i_attrctvnss;
			budget=i_budget;
			intelLevel =i_intelLevel;
			choosingCrit =i_choosingCrit;
			gtype =i_gtype;
			status=SINGLE;
}

Girl::~Girl() {
	// TODO Auto-generated destructor stub
}

