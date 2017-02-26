#include <bits/stdc++.h>
#include"Gift.h"
using namespace std;
/*
 * Parametrized constructor for instantiating the Gift class
 */
Gift::Gift(string Name, string Type, int Price, int Value, int Luxury_Rating, int Difficulty_of_getting, int Utility_Value, int Utility_Class)
{
	this->Type = Type;
	this->Name = Name;
	this->Price = Price;
	this->Difficulty_of_getting = Difficulty_of_getting;
	this->Utility_Class = Utility_Class;
	this->Value = Value;
	this->Luxury_Rating = Luxury_Rating;
	this->Utility_Value = Utility_Value;
	this->is_Free = 1;
}
//returns the gift value
int Gift::get_Value()
{
	return this->Value;
}
//returns the gift price
int Gift::get_Price()
{
	return this->Price;
}
//returns the gift luxury rating
//-1 if the gift is not of luxury type
int Gift::get_Luxury_Rating()
{
	return this->Luxury_Rating;
}
int Gift::get_Difficulty_of_getting()
{
	return this->Difficulty_of_getting;
}
//returns the gift Utility Class
//-1 if the gift is not of Utility type
int Gift::get_Utility_Class()
{
	return this->Utility_Class;
}
//returns the gift Utility Value
//-1 if the gift is not of Utility type
int Gift::get_Utility_Value()
{
	return this->Utility_Value;
}
//True if Gift is avaliable
void Gift::set_is_Free(bool is_free)
{
	this->is_Free = is_free;
}
//sets the availability of gift
bool Gift::get_is_Free()
{
	return this->is_Free;
}
//returns the Name of gift
string Gift::get_Name()
{
	return this->Name;
}
//returns the type of Gift
//Luxury
//Utility
//Essentail
string Gift::get_Type()
{
	return this->Type;
}
