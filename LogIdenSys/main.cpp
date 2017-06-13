#include <iostream>
#include <string>
#include <vector>
#include <boost/algorithm/string/split.hpp>
#include <boost/algorithm/string/classification.hpp>
using namespace std;

int main()
{
	string s="sss/ddd,dog";
	vector<string> sVec;
	boost::split(sVec,s,boost::is_any_of(",/"),boost::token_compress_on);
	for(vector<string>::iterator iter = sVec.begin();iter != sVec.end();iter++)
	{
		cout << *iter << endl;
	}
}