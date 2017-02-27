/*
 * readBoy.h
 *
 *  Created on: 25-Feb-2017
 *      Author: slowb
 */

#ifndef READBOYGIRL_H_
#define READBOYGIRL_H_

vector <Boy> readBoy() {
	vector <Boy> boys_list;

	ifstream file;
	file.open("boys.ssv");
	while(file.good()){
		string name;
		int intel;
		int attr;
		float budget;
		string type;
		file>>name>>intel>>attr>>budget>>type;
		if(file.eof()) break;
		Boy b;
		b.name=name;
		b.intelLevel=intel;
		b.attrctvnss=attr;
		b.budget=budget;
		if(type.compare("MISER"))  b.setType(MISER);
		else if(type.compare("GENRUS")) b.setType(GENRUS);
		else b.setType(GEEKS);
		boys_list.push_back(b);
	//	cout<<b.name<<" "<<b.attrctvnss<<" "<<b.budget<<" "<<b.intelLevel<<" "<<endl;
	}
	file.close();
	return boys_list;
}
vector <Girl> readGirl() {

	vector <Girl> girls_list;
	ifstream file;
	file.open("girls.ssv");
	while(file){
		string name;
		int intel;
		int attr;
		float budget;
		string type;
		string crit;
		file>>name>>intel>>attr>>budget>>type>>crit;
		if(file.eof()) break;
		Girl g;
		g.name=name;
		g.intelLevel=intel;
		g.attrctvnss=attr;
		g.budget=budget;
		if(type.compare("DESPO"))  g.setType(DESPO);
		else if(type.compare("NORMAL")) g.setType(NORMAL);
		else g.setType(CHOOSY);
		girls_list.push_back(g);
		//cout<<g.name<<" "<<g.attrctvnss<<" "<<g.budget<<" "<<g.intelLevel<<" "<<endl;
	}

	file.close();
	return girls_list;
}



#endif /* READBOYGIRL_H_ */
