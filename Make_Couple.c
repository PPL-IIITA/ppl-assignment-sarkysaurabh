#include"Boy.h"
#include"Girl.h"
#include"Gift.h"
#include"Reader.h"
#include<bits/stdc++.h>
using namespace std;
//Prints the time stamp for specific event types
void ptm()
{
	std::chrono::time_point<std::chrono::system_clock> start, end;
	start = std::chrono::system_clock::now();
	end = std::chrono::system_clock::now();
	std::time_t end_time = std::chrono::system_clock::to_time_t(end);
	std::cout << std::ctime(&end_time) << " ";
}
//Sort_couples_Happiness method takes as input the Couples formed
//and value of k and prints the k - happiest couples currently in relationship
void Sort_couples_Happiness(vector<pair<Boy, Girl> > vtp, int k)
{
	int i,j;
	for(i=0;i<vtp.size();++i)
	{
		for(j=i+1;j<vtp.size();++j)
		{
			int Happiness1 = vtp[i].first.get_Happiness_Value() + vtp[i].second.get_Happiness_Value();
			int Happiness2 = vtp[j].first.get_Happiness_Value() + vtp[j].second.get_Happiness_Value();
			if(Happiness1 < Happiness2)
			{
				Boy b1 = vtp[i].first;
				Boy b2 = vtp[j].first;
				Girl g1 = vtp[i].second;
				Girl g2 = vtp[j].second;

				vtp[i] = make_pair(b2,g2);
				vtp[j] = make_pair(b1,g1);
			}
		}
	}
	if(k > vtp.size()) cout<<"Number of couples Less than "<<k<<endl;
	else
	{
		cout<<"Most Happy Couples "<<k<<endl;
		for(i=0;i<k;++i)
		{
			cout<<vtp[i].first.get_Name()<<" with "<<vtp[i].second.get_Name()<<endl;
		}
	}
	cout<<endl;
}
//Sort_couples_compatibility method takes as input the Couples formed
//and value of k and prints the k - most compatible couples currently in relationship
void Sort_couples_Compatibility(vector<pair<Boy, Girl> > vtp, int k)
{
	int i,j;
	for(i=0;i<vtp.size();++i)
	{
		for(j=i+1;j<vtp.size();++j)
		{
			int Com1 = vtp[i].first.get_Compatibility_Value();
			int Com2 = vtp[j].first.get_Compatibility_Value();
			if(Com1 < Com2)
			{
				Boy b1 = vtp[i].first;
				Boy b2 = vtp[j].first;
				Girl g1 = vtp[i].second;
				Girl g2 = vtp[j].second;

				vtp[i] = make_pair(b2,g2);
				vtp[j] = make_pair(b1,g1);
			}
		}
	}
	if(k > vtp.size()) cout<<"Number of couples Less than "<<k<<endl;
	else
	{
		cout<<"Most Compatible Couples "<<k<<endl;
		for(i=0;i<k;++i)
		{
			cout<<vtp[i].first.get_Name()<<" with "<<vtp[i].second.get_Name()<<endl;
		}
	}
	cout<<endl;
}
//Computes the Compatibility of all the Couples formed
void Compute_Compatibility(vector<pair<Boy, Girl> > vtp)
{
	int i;
	for(i=0;i<vtp.size();++i)
	{
		Boy &b = vtp[i].first;
		Girl &g = vtp[i].second;

		int Com = abs(b.get_Attraction_Value() - g.get_Attraction_Value()) + abs(b.get_Intelligence_Value() - g.get_Intelligence_Value()) + b.get_Budget() - g.get_Maintenance_Value();

		b.set_Compatibility_Value(Com);
		g.set_Compatibility_Value(Com);
	}
}
// Performs and Logs all the gifting events
// between all the couples.
//
// Takes the couples vector and gift_items in Reader rf as input
void Gifting(vector<pair<Boy, Girl> > vtp, Reader rf)
{
	int i,j;
	cout<<"Gifting Events"<<endl;
	for(i=0;i<vtp.size(); ++i)
	{
		Boy &b = vtp[i].first;
		Girl &g = vtp[i].second;
		int Current_Money = b.get_Budget();
		int Maintenance_Cost = g.get_Maintenance_Value();
		int Spent_Money = 0;
		if(b.get_Boy_Type() == "Miser")
		{
			while(Spent_Money < Maintenance_Cost)
			{
				for(j = 0; j < rf.Gift_List.size(); ++j)
				{
					Gift &gi = rf.Gift_List[j];
					if(!gi.get_is_Free()) continue;
					if(gi.get_Price() <= Current_Money)
					{
						gi.set_is_Free(0);
						Current_Money -= gi.get_Price();
						Spent_Money += gi.get_Price();
						g.set_Happiness_Value(g.get_Happiness_Value() + gi.get_Value());
						ptm();
						cout<<b.get_Name()<<" gifts "<<gi.get_Name()<<" to "<<g.get_Name()<<endl;
					}
				}
			}
			b.set_Happiness_Value(b.get_Budget() - Spent_Money);
		}
		else if(b.get_Boy_Type() == "Generous")
		{
			while(Spent_Money < Maintenance_Cost)
			{
				for(j = 0; j < rf.Gift_List.size(); ++j)
				{
					Gift &gi = rf.Gift_List[j];
					if(!gi.get_is_Free()) continue;
					if(gi.get_Price() <= Current_Money)
					{
						gi.set_is_Free(0);
						Current_Money -= gi.get_Price();
						Spent_Money += gi.get_Price();
						g.set_Happiness_Value(g.get_Happiness_Value() + gi.get_Value());

						ptm();
						cout<<b.get_Name()<<" gifts "<<gi.get_Name()<<" to "<<g.get_Name()<<endl;
					}
				}
			}
			b.set_Happiness_Value(b.get_Budget() - Spent_Money);

		}
		else
		{
			while(Spent_Money < Maintenance_Cost)
			{
				for(j = 0; j < rf.Gift_List.size(); ++j)
				{
					Gift &gi = rf.Gift_List[j];
					if(!gi.get_is_Free()) continue;
					if(gi.get_Price() <= Current_Money)
					{
						gi.set_is_Free(0);
						Current_Money -= gi.get_Price();
						Spent_Money += gi.get_Price();
						g.set_Happiness_Value(g.get_Happiness_Value() + gi.get_Value());

						ptm();
						cout<<b.get_Name()<<" gifts "<<gi.get_Name()<<" to "<<g.get_Name()<<endl;
					}
				}
			}
			b.set_Happiness_Value(b.get_Budget() - Spent_Money);

		}
	}
	cout<<endl;
}
//Checks Compatibility of a boy and girl
//return true if relationship is possible.
bool is_Compatible(Boy b, Girl g)
{
	return (b.get_Budget() >= g.get_Maintenance_Value() && 
			g.get_Attraction_Value() >= b.get_Minimum_Attraction_Value());
}

//Make_Couple Takes the list of Boys ans Girls
//and generates couples meeting the required criterion.
vector<pair<Boy, Girl> > Make_Couple(Reader rf)
{
	int used[100000];
	memset(used, 0 , sizeof used);
	vector<pair<Boy,Girl> > vtp;
	int i,j;
	cout<<"Couples Formed are "<<endl;
	for(i=0;i<rf.Boy_List.size();++i)
	{
		for(j=0;j<rf.Girl_List.size();++j)
		{
			Boy &b = rf.Boy_List[i];
			Girl &g = rf.Girl_List[j];
			if(!b.get_Current_Status() && !g.get_Current_Status() && is_Compatible(b,g))
			{
				vtp.push_back(make_pair(b , g));
				b.set_Current_Status(1);
				g.set_Current_Status(1);
				ptm();
				cout<<b.get_Name()<<" with "<<g.get_Name()<<endl;
			}
		}
	}
	cout<<endl;
	return vtp;
}
