
#ifndef GIRL_H
#define GIRL_H
#include <bits/stdc++.h>
using namespace std;

/* Definition of Class Girl
 * Contains attributes Attraction_Value, Intelligence Value, etc.
 *
 * Basic Getter and setter Methods for controlled modification.
 *
 * */

class Girl
{
        string Name;
        int Attraction_Value;
        int Maintenance_Value;
        int Intelligence_Value;
	int Happiness_Value;
	int Compatibility_Value;
        string Girl_Type;
        bool Current_Status;

    public:
        Girl(string Name, int Attraction_Value, int Intelligence_Value, int Maintenance_Value, string Girl_Type);
        Girl();
	int get_Current_Status();
	int get_Attraction_Value();
	int get_Maintenance_Value();
	int get_Intelligence_Value();
	string get_Girl_Type();
	string get_Name();
        void set_Current_Status(bool Final_Status);
        int get_Happiness_Value();
	void set_Happiness_Value(int Happiness_Value);
        int get_Compatibility_Value();
	void set_Compatibility_Value(int Compatibility_Value);
};
#endif
