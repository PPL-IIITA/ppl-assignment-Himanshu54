/*
 * readGifts.h
 *
 *  Created on: 26-Feb-2017
 *      Author: slowb
 */

#ifndef READGIFTS_H_
#define READGIFTS_H_
#include "gifts.h"
using namespace std;
vector <gifts> readGift() {
	vector <gifts> gift_list;
	ifstream file;
	file.open("../ques1/gifts.ssv");
	while(file.good()){
		string name;
		int value;
		float price;
		string type;
		file>>name>>value>>price>>type;
		if(file.eof()) break;
		gifts g=gifts(name,price,value);
		if(type.compare("ESSENTIAL"))  g.setType(ESSENTIAL);
		else if(type.compare("LUXURY")) g.setType(LUXURY);
		else g.setType(UTILITY);
		gift_list.push_back(g);
	//	cout<<b.name<<" "<<b.attrctvnss<<" "<<b.budget<<" "<<b.intelLevel<<" "<<endl;
	}
	file.close();
	return gift_list;
}
#endif /* READGIFTS_H_ */
