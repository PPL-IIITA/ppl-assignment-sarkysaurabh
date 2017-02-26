#include "Girl.h"
#include "Boy.h"
#include "Gift.h"
#include <bits/stdc++.h>
using namespace std;
/*
 * Reader class for efficient extraction of data generated
 * from testgen class.
 *
 * All the methods load the data in respective List containers.
 *
 * Reader_for_Boys fills up the info about boys in Boy_List.
 * Reader_for_Girls fills up the info about girls in Girl_List.
 * Reader_for_Gifts fills up the info about Gift-Items in Gift_List.
 */
class Reader {

	public:
		vector <Boy> Boy_List;
		vector <Girl> Girl_List;
		vector <Gift> Gift_List;
		void Reader_for_Boys();
		void Reader_for_Girls();
		void Reader_for_Gifts();
};
