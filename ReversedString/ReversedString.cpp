#include <iostream>
#include <vector>
#include <string>

using namespace std;

string ReadString()
{
	string S1;
	cout << "please Enter Yor String ? \n";
	getline(cin, S1);
	return S1;
}

vector <string> SplitString(string S1, string Delim)
{
	short poc = 0;
	string sWord;

	vector <string> vSplitString;

	while ((poc = S1.find(Delim)) != std::string::npos)
	{
		sWord = S1.substr(0, poc);
		if (sWord != "")
		{
			vSplitString.push_back(sWord);
		}
		S1.erase(0, poc + Delim.length());
	}
	if (S1 != "")
	{
		vSplitString.push_back(S1);
	}
	return vSplitString;
}


string ReversedString(string S1)
{
	string S2 = "";
	vector <string> vString;

	vString = SplitString(S1, " ");

	vector <string>::iterator iter = vString.end();

	while (iter != vString.begin())
	{
		 -- iter;
		S2 += *iter + " ";
	}

	S2 = S2.substr(0, S2.length() - 1);
	return S2;
}


int main()
{
	string S1 = ReadString();
	cout << "After Reversd String \n";
	cout << ReversedString(S1) <<  endl;

	return 0;
}