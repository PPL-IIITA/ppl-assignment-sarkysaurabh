#include<bits/stdc++.h>
#include"testgen.h"
#include"Boy.h"
#include"Girl.h"
#include"Gift.h"
#include"Reader.h"
#include"list.h"
using namespace std;
int main()
{
	TestGenerator test(100,10,1000);
	Reader rf; rf.Reader_for_Boys(); rf.Reader_for_Girls(); rf.Reader_for_Gifts();
	vector<pair<Boy, Girl> > Couples = Make_Couple(rf);
	Gifting(Couples, rf);
	Compute_Compatibility(Couples);
	Sort_couples_Happiness(Couples, 3);
	Sort_couples_Compatibility(Couples, 3);
}
