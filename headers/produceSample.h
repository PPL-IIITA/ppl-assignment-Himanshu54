/*
 * produceSample.h
 *
 *  Created on: 25-Feb-2017
 *      Author: slowb
 */

#ifndef PRODUCESAMPLE_H_
#define PRODUCESAMPLE_H_
#include "cppheaders.h"
void produceSample(int n){
	string cri[]= {"ATTRCT","RICH","INTEL"};
	string girlType[]= {"NORMAL" , "CHOOSY" , "DESPO"};
	string boyType[]= { "MISER" ,  "GENRUS" ,  "GEEKS" };
	string giftType[]= { "ESSENTIAL" , "LUXURY" , "UTILITY"};

	srand(time(NULL));

	int intLevel;
	int attr;
	int budg1;
	int budg2;
	int type;
	int crit;

	int i,j;
	ofstream outfile("boys.ssv");


	for(i=0;i<n;++i){
			string name="";
			for(j=0;j<5;j++){
				name=name+(char)(97+(rand()%25));
			}
			intLevel=rand()%10;
			attr=rand()%10;
			budg1=rand()%10000;
			budg2=rand()%100;
			type=rand()%3;
			//cout<<name<<" "<<intLevel<<" "<<attr<<" "<<budg1<<"."<<budg2<<" "<<boyType[type]<<endl;
			outfile<<name<<" "<<intLevel<<" "<<attr<<" "<<budg1<<"."<<budg2<<" "<<boyType[type]<<endl;
	}
	outfile.close();

	outfile.open("girls.ssv");

	for(i=0;i<n;++i){
				string name="";
				for(j=0;j<5;j++){
					name=name+(char)(97+(rand()%25));
				}
				intLevel=rand()%10;
				attr=rand()%10;
				budg1=rand()%10000;
				budg2=rand()%100;
				type=rand()%3;
				crit=rand()%3;
				//cout<<name<<" "<<intLevel<<" "<<attr<<" "<<budg1<<"."<<budg2<<" "<<boyType[type]<<endl;
				outfile<<name<<" "<<intLevel<<" "<<attr<<" "<<budg1<<"."<<budg2<<" "<<girlType[type]<<" "<<cri[crit]<<endl;
		}
		outfile.close();

		outfile.open("gifts.ssv");

			for(i=0;i<n;++i){
						string name="GIFT";
						for(j=0;j<5;j++){
							name+=(char)(97+(rand()%25));
						}
						intLevel=rand()%10;
						budg1=10+rand()%1000;
						budg2=rand()%100;
						type=rand()%3;
						//cout<<name<<" "<<intLevel<<" "<<attr<<" "<<budg1<<"."<<budg2<<" "<<boyType[type]<<endl;
						outfile<<name<<" "<<intLevel<<" "<<budg1<<"."<<budg2<<" "<<giftType[type]<<endl;
				}
				outfile.close();

}

#endif /* PRODUCESAMPLE_H_ */
