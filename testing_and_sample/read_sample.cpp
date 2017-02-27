/*
 * couple.h
 *
 *  Created on: 25-Feb-2017
 *      Author: slowb
 
 * couple.cpp
 *
 *  Created on: 24-Feb-2017
 *      Author: slowb
 */
#include <iostream>
#include <vector>
#include <stdio.h>
#include <cstring>
#include "common.h"
#include "Boy.h"
#include "Girl.h"
#include <fstream>
int main() {
	vector <Boy> boys_list;
	vector <Girl> girls_list;

	ifstream file;
	file.open("../testing/boys.ssv");
	while(file.good()){
		string name;
		int intel;
		int attr;
		float budget;
		string type;
		file>>name>>intel>>attr>>budget>>type;
		if(file.eof()) break;
		//fscanf(fp,"%s,%d,%d,%f,%s",name,&intel,&attr,&budget,type);
		Boy b;
		b.name=name;
		b.intelLevel=intel;
		b.attrctvnss=attr;
		b.budget=budget;
		if(type.compare("MISER"))  b.setType(MISER);
		else if(type.compare("GENRUS")) b.setType(GENRUS);
		else b.setType(GEEKS);
		boys_list.push_back(b);
		//cout<<b.name<<" "<<b.attrctvnss<<" "<<b.budget<<" "<<b.intelLevel<<" "<<endl;
	}
	file.close();
	file.open("../testing/girls.ssv");
	while(file){
		string name;
		int intel;
		int attr;
		float budget;
		string type;
		string crit;
		file>>name>>intel>>attr>>budget>>type>>crit;
		//fscanf(fp,"%s,%d,%d,%f,%s",name,&intel,&attr,&budget,type);
		Girl g;
		g.name=name;
		g.intelLevel=intel;
		g.attrctvnss=attr;
		g.budget=budget;
		if(type.compare("DESPO"))  g.setType(NORMAL);
		else if(type.compare("NORMAL")) g.setType(NORMAL);
		else g.setType(CHOOSY);
		girls_list.push_back(g);
		//cout<<g.name<<" "<<g.attrctvnss<<" "<<g.budget<<" "<<g.intelLevel<<" "<<endl;
	}

	for (vector<Boy>::iterator it = boys_list.begin() ; it !=boys_list.end(); ++it){
		cout<<b.name<<" "<<b.attrctvnss<<" "<<b.budget<<" "<<b.intelLevel<<" "<<endl;
		Boy b=*it;
	}
	file.close();
	return 1;
}

