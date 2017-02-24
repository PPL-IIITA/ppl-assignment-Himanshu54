/*
 * Girl.h
 *
 *  Created on: 23-Feb-2017
 *      Author: slowb
 */

#include <string>
#include "common.h"
#ifndef GIRL_H_
#define GIRL_H_

using namespace std;

//Class declaration

class Girl {
	/*
	 * private data members
	 */
private:

	commitment status;
	criteria choosingCrit ;
	girlType gtype;

	/*
	 * public data members
	 */
public:

	string name;
	int attrctvnss;
	float budget;
	int intelLevel;

/*
 * constructor and destructor
 */
	Girl();
	Girl(string, int , float  , int , criteria , girlType );
	virtual ~Girl();
};

#endif /* GIRL_H_ */
