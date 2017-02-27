/*
 * form_couple.h
 *
 *  Created on: 27-Feb-2017
 *      Author: slowb
 */

#ifndef FORM_COUPLE_H_
#define FORM_COUPLE_H_
vector <couple> form_cupls(vector <Girl> girls_list, vector <Boy> boys_list){

	        sort(boys_list.begin(),boys_list.end(),comp_function_b);
			sort(girls_list.begin(),girls_list.end(),comp_function_g);
			vector <couple> lucky_couples;
			for (vector<Girl>::iterator it = girls_list.begin() ; it !=girls_list.end(); ++it){
						for (vector<Boy>::iterator b = boys_list.begin() ; b !=boys_list.end(); ++b){

										if((*b).commited()) continue;
										if((*b).budget >= (*it).budget && (*b).attrctvnss<=(*it).attrctvnss){
											(*b).set_commited();

											(*it).set_commited();
											couple C=couple((*b),(*it));
											lucky_couples.push_back(C);

											break;
										}
									}

					}
			return lucky_couples;
}


#endif /* FORM_COUPLE_H_ */
