#ifndef BOY_H
#define BOY_H
#include <bits/stdc++.h>
using namespace std;
/* Definition of Class Boy
 * Contains attributes Attraction_Value, Intelligence Value, etc.
 *
 * Basic Getter and setter Methods for controlled modification.
 *
 * */
class Boy
{
        string Name;
	string Boy_Type;
        int Attraction_Value;
        int Intelligence_Value;
        int Budget;
        int Minimum_Attraction_Value;
        bool Current_Status;
	int Happiness_Value;
	int Compatibility_Value;
        
    public:
        Boy(string Name, int Attraction_Value, int Intelligence_Value, int Budget, int Minimum_Attraction_value, string Boy_Type);
        void set_Current_Status(bool Final_Status);
        bool get_Current_Status();
	string get_Name();
	string get_Boy_Type();
	int get_Attraction_Value();
	int get_Intelligence_Value();
	int get_Budget();
	int get_Minimum_Attraction_Value();
        int get_Happiness_Value();
        void set_Happiness_Value(int Happiness_Value);
        int get_Compatibility_Value();
        void set_Compatibility_Value(int Compatibility_Value);
};
#endif
