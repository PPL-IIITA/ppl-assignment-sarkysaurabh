#include <bits/stdc++.h>
#include "testgen.h"
#include "testlib.h"

using namespace std;
//Test-generator genrates the test cases to run the program
//
//first parameterb = Number of boys
//gl = number of girls
//g = number of gift items.
TestGenerator::TestGenerator(int b,int gl,int g)  
{

	char **str;
	char d1[] = "we";
	char d2[] = "we";
	char d3[] = "we";
	int i;
	str = (char **)malloc(3*sizeof(char *));
	str[0] = d1;
	str[1] = d2;
	str[2] = d3;
	registerGen(3,str,1);
	ofstream myfile;
	myfile.open("boy.txt");

	string arr[] = {"Miser", "Generous", "Geek"};

	for (i = 1; i <= b; i++)
	{
		name = "B" + rnd.next("[a-z]{7,10}");
		min_attraction = rnd.next(1,10);
		budget = rnd.next(1,500);
		intelligence = rnd.next(1,10);
		attractiveness = rnd.next(1,10);
		type = arr[rnd.next(0,2)];

		myfile<<name<<" "<<attractiveness<<" "<<intelligence<<" "<<budget<<" "<<min_attraction<<" "<<type<<endl;;
	}
	myfile.close();


	myfile.open("girl.txt");

	string arr2[] = {"Choosy", "Normal", "Desperate"};

	for (i = 1; i <= gl; i++) {

		type = arr2[rnd.next(0,2)];
		name = "P" + rnd.next("[a-z]{7,10}");
		intelligence = rnd.next(1,10);
		maintenance_cost = rnd.next(1,500);
		attractiveness = rnd.next(1,10);

		myfile<<name<<" "<<attractiveness<<" "<<intelligence<<" "<<maintenance_cost<<" "<<type<<"\n";
	}
	myfile.close();


	myfile.open("gift.txt");

	string arr3[] = {"Essential", "Luxury", "Utility"};

	for (i = 1; i <= g; i++) {

		name = "G" + rnd.next("[a-z]{5,10}");
		type = arr3[rnd.next(0,2)];

		price = rnd.next(1,100);
		value = rnd.next(1,100);

		if(type == arr3[0])
		{
			myfile<<name<<" "<<type<<" "<<price<<" "<<value<<endl;

		}
		else if(type == arr3[1])
		{
			Lrating = rnd.next(1,10);
			Difficulty = rnd.next(1,10);
			myfile<<name<<" "<<type<<" "<<price<<" "<<value<<" "<<Lrating<<" "<<Difficulty<<endl;
		}
		else
		{
			Uval = rnd.next(1,10);
			Uclass = rnd.next(0,10);
			myfile<<name<<" "<<type<<" "<<price<<" "<<value<<" "<<Uval<<" "<<Uclass<<endl;
		}
	}
	myfile.close();
}
