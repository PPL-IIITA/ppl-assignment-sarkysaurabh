#include "Boy.h"
#include <bits/stdc++.h>
using namespace std;
/*
 * Parametrized Constructor for Class Boy.
 * Initializes the all the needed attributes.
 *
 */
Boy::Boy(string Name, int Attraction_Value, int Intelligence_Value, int Budget, int Minimum_Attraction_Value, string Boy_Type)
{
	this->Name = Name;
	this->Intelligence_Value = Intelligence_Value;
	this->Attraction_Value = Attraction_Value;
	this->Budget = Budget;
	this->Minimum_Attraction_Value = Minimum_Attraction_Value;
	this->Boy_Type = Boy_Type;
	this->Current_Status = false;
	this->Happiness_Value = 0;
	this->Compatibility_Value = 0;
}
//Setter Method for Current_Status, of relationship.
//True if Commited, or in relatioship with Girl.
void Boy::set_Current_Status(bool Final_Status)
{
	this->Current_Status = Final_Status;
}

bool Boy::get_Current_Status()
{
	return this->Current_Status;
}
//Return Name of Boy
string Boy::get_Name()
{
	return this->Name;
}

//Returns one of the 3 of Boy types.
string Boy::get_Boy_Type()
{
	return this->Boy_Type;
}
//return attraction value for a boy.
int Boy::get_Attraction_Value()
{
	return this->Attraction_Value;
}

//return IQ for a boy.
int Boy::get_Intelligence_Value()
{
	return this->Intelligence_Value;
}

//sets Compatibility in relationship for a boy.
void Boy::set_Compatibility_Value(int Compatibility_Value)
{
	this->Compatibility_Value = Compatibility_Value;
}
//gets Compatibility in relationship for a boy.
int Boy::get_Compatibility_Value()
{
	return this->Compatibility_Value;
}
//gets Happiness in relationship
int Boy::get_Happiness_Value()
{
	return this->Happiness_Value;
}
//sets the happiness of boy in relationship
void Boy::set_Happiness_Value(int Happiness_Value)
{
	this->Happiness_Value = Happiness_Value;
}
//returns Budget of boy
int Boy::get_Budget()
{
	return this->Budget;
}

//returns least attraction requirement of boy
int Boy::get_Minimum_Attraction_Value()
{
	return this->Minimum_Attraction_Value;
}


