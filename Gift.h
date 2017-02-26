#ifndef GIFT_H
#define GIFT_H

#include <bits/stdc++.h>
using namespace std;
//Class Definition of gift
//contains all the attributes of gift like Name, price, value, type, rating , etc.
//
//Contains all basic getter and setter methods for controlled modification of attributes
class Gift
{
        string Name;
        string Type;
        bool is_Free;
        int Price;
        int Value;
        int Luxury_Rating;
        int Difficulty_of_getting;
        int Utility_Value;
        int Utility_Class;
    public:
        
        Gift(string Name, string Type, int Price, int Value, int Luxury_Rating, int Difficulty_of_getting, int Utility_Value, int Utility_Class);
	int get_Price();
	int get_Value();
	int get_Luxury_Rating();
	int get_Difficulty_of_getting();
	int get_Utility_Class();
	int get_Utility_Value();
	bool get_is_Free();
	void set_is_Free(bool is_free);
	string get_Name();
	string get_Type();
};
#endif
