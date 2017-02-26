#include "Girl.h"
#include <bits/stdc++.h>
using namespace std;

/*
 *Parametrized constructor for instatntiating the Girl object
 */
Girl::Girl(string Name, int Attraction_Value, int Intelligence_Value, int Maintenance_Value, string Girl_Type)
{
	this->Name = Name;
	this->Intelligence_Value = Intelligence_Value;
	this->Attraction_Value = Attraction_Value;
	this->Maintenance_Value = Maintenance_Value;
	this->Girl_Type = Girl_Type;
	this->Current_Status = false;
	this->Happiness_Value = 0;
}
//sets Current relation ship status
//true means commited.
void Girl::set_Current_Status(bool Final_Status)
{
	this->Current_Status = Final_Status;
}
//gets the current status

int Girl::get_Current_Status()
{
	return this->Current_Status;
}
// return the girls Name
string Girl::get_Name()
{
	return this->Name;
}
//sets the Compatibility value in a relationship
void Girl::set_Compatibility_Value(int Compatibility_Value)
{
	this->Compatibility_Value = Compatibility_Value;
}
//returns the Compatibility value in a relationship
int Girl::get_Compatibility_Value()
{
	return this->Compatibility_Value;
}
//sets the Happiness of girl in relationship
void Girl::set_Happiness_Value(int Happiness_Value)
{
	this->Happiness_Value = Happiness_Value;
}
//gets the Happiness of girl in relationship
int Girl::get_Happiness_Value()
{
	return this->Happiness_Value;
}
//gets the attractiveness of girl
int Girl::get_Attraction_Value()
{
	return this->Attraction_Value;
}
//gets the maintenance requirement of girl
int Girl::get_Maintenance_Value()
{
	return this->Maintenance_Value;
}
//return the IQ of girl
int Girl::get_Intelligence_Value()
{
	return this->Intelligence_Value;
}
//return one of the three types of girls
//choosy, desperate, normal
string Girl::get_Girl_Type()
{
	return this->Girl_Type;
}
