#include "Girl.h"
#include "Boy.h"
#include "Gift.h"
#include "Reader.h"
#include <bits/stdc++.h>

using namespace std;
//Loads the data about all boys in the
//Boy_List from boy.txt file
void Reader::Reader_for_Boys()  
{
	ifstream infile("boy.txt");

	string Name,Boy_Type;
	int Attraction_Value,Intelligence_Value, Budget, Minimum_Attraction_Value;
	while (infile >> Name >> Attraction_Value >> Intelligence_Value >> Budget >> Minimum_Attraction_Value >> Boy_Type)
	{
	    Boy Dboy(Name,Attraction_Value,Intelligence_Value,Budget,Minimum_Attraction_Value,Boy_Type);
	    Boy_List.push_back(Dboy);
	}
}

//Loads the data about all girls in the
//Girl_List from girl.txt file
void Reader::Reader_for_Girls()  
{
	ifstream infile("girl.txt");

	string val,Name,Girl_Type;
	int Attraction_Value,Intelligence_Value, Maintenance_Value;
	while (infile >> Name >> Attraction_Value >> Intelligence_Value >> Maintenance_Value >> Girl_Type)
	{
	    Girl Dgal(Name,Attraction_Value,Intelligence_Value,Maintenance_Value,Girl_Type);
	    Girl_List.push_back(Dgal);
	}
}

//Loads the data about all gifts in the
//Gift_List from gift.txt file with all attributes
void Reader::Reader_for_Gifts()  
{
	ifstream infile("gift.txt");

	string Name, Type;
	int Price, Value, Luxury_Rating, Difficulty_of_getting;
	int Utility_Value, Utility_Class;
	while (infile >> Name >> Type >> Price >> Value)
	{
		Luxury_Rating = Difficulty_of_getting = Utility_Class = Utility_Value = -1;
		if(Type == "Luxury")
		{
			infile >> Luxury_Rating >> Difficulty_of_getting;
			
		}
		else if(Type == "Utility")
		{
			infile >> Utility_Value >> Utility_Class;

		}
		Gift gt(Name, Type, Price, Value, Luxury_Rating, Difficulty_of_getting, Utility_Value, Utility_Class);
	    	Gift_List.push_back(gt);
	}
}
