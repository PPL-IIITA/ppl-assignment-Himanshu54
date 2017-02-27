/*
 * aux_main.h
 *
 *  Created on: 27-Feb-2017
 *      Author: slowb
 */

#ifndef GIVE_GIFTS_H_
#define GIVE_GIFTS_H_
#include "../headers/produceSample.h"
#include "../headers/utilFunc.h"
#include "../headers/couple.h"
#include "../headers/common.h"
#include "../headers/readGifts.h"
#include "../headers/cppheaders.h"
#include "../headers/readBoyGirl.h"
#include "form_couple.h"
#define K 5
#define N 50

int callme(){
		int n=N;

		produceSample(n);
		vector <Boy> boys_list= readBoy();
		vector <Girl> girls_list= readGirl();

		vector <couple> lucky_couples=form_cupls(girls_list,boys_list);


		vector <gifts> gifts_list= readGift();
		sort(gifts_list.begin(),gifts_list.end(),comp_function_gf);

		ofstream file("gift_log.txt");
		cout<<"logging gifts exchange in gift_log.txt\n\n";

		for (vector<couple>::iterator it = lucky_couples.begin() ; it !=lucky_couples.end(); ++it){

			if((*it).budget<gifts_list[0].price){
							(*it).update_budget(gifts_list[0].price);
			}

			if((*it).boy.getType() == MISER ){
				for (vector<gifts>::iterator g = gifts_list.begin() ; g !=gifts_list.end(); ++g){
						if((*g).price<(*it).budget){
										(*it).add_gifts((*g),(*it));
										time_t now = time(NULL);
										tm * ptm = localtime(&now);
										char buffer[32];
										std::strftime(buffer, 32, "%a, %d.%m.%Y %H:%M:%S", ptm);
										file<<buffer<<"\t"<<"GIFT_GIVEN  -- "<<(*it).boy.name<<" "<<"gifted"<<"  "<<(*it).girl.name<<" \t"<<(*g).get_tpye()<<endl;
										if((*it).getVal() > (*it).girl.budget) break;
								}
					}

			}
			else if((*it).boy.getType() == GEEKS){
				for (vector<gifts>::iterator g = gifts_list.begin() ; g !=gifts_list.end(); ++g){
										if((*g).price<(*it).budget){
														(*it).add_gifts((*g),(*it));
														time_t now = time(NULL);
														tm * ptm = localtime(&now);
														char buffer[32];
														std::strftime(buffer, 32, "%a, %d.%m.%Y %H:%M:%S", ptm);
														file<<buffer<<"\t"<<"GIFT_GIVEN  -- "<<(*it).boy.name<<" "<<"gifted"<<"  "<<(*it).girl.name<<" \t"<<(*g).get_tpye()<<endl;

														if((*it).getVal() > (*it).girl.budget) break;
										}
					}
				for (vector<gifts>::iterator g = gifts_list.begin() ; g !=gifts_list.end(); ++g){
					if((*g).type == LUXURY){
						if((*it).budget>=(*g).price){
							(*it).add_gifts((*g),(*it));
							time_t now = time(NULL);
							tm * ptm = localtime(&now);
							char buffer[32];
							std::strftime(buffer, 32, "%a, %d.%m.%Y %H:%M:%S", ptm);
							file<<buffer<<"\t"<<"GIFT_GIVEN  -- "<<(*it).boy.name<<" "<<"gifted"<<"  "<<(*it).girl.name<<" \t"<<(*g).get_tpye()<<endl;
						}
					}
				}
			}
			else{
				gifts gft;
				for (vector<gifts>::iterator g = gifts_list.begin() ; g !=gifts_list.end(); ++g){
					if((*g).price>(*it).budget)
						break;
					gft=(*g);
				}
				(*it).add_gifts(gft,(*it));
				time_t now = time(NULL);
				tm * ptm = localtime(&now);
				char buffer[32];
				std::strftime(buffer, 32, "%a, %d.%m.%Y %H:%M:%S", ptm);
				file<<buffer<<"\t"<<"GIFT_GIVEN  -- "<<(*it).boy.name<<" "<<"gifted"<<"  "<<(*it).girl.name<<" \t"<<gft.get_tpye()<<endl;

				}


			}

		sort(lucky_couples.begin(),lucky_couples.end(),comp_function_cpl);
		cout<<"PRINTING "<<K<<" MOST HAPPY COUPLES \n";
		for(int i=0;i<K;++i){
			couple c=lucky_couples[i];
			cout<<c.boy.name<<" "<<heart<<" "<<c.girl.name<<endl;
		}
		sort(lucky_couples.begin(),lucky_couples.end(),comp_function_cpl2);
		cout<<"PRINTING "<<K<<" MOST COMPATIBLE COUPLES \n";
		for(int i=0;i<K;++i){
					couple c=lucky_couples[i];
					cout<<c.boy.name<<" "<<heart<<" "<<c.girl.name<<endl;
				}

}






#endif /* GIVE_GIFTS_H_ */
