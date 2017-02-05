#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS

#include "../../std_lib_facilities.h"

using namespace std;

class Visitors_Arr_and_Dep
{
public:
	string name;
	int time_arr;
	int time_dep;
	Visitors_Arr_and_Dep();
	~Visitors_Arr_and_Dep();

private:

};

Visitors_Arr_and_Dep::Visitors_Arr_and_Dep()
{
}

Visitors_Arr_and_Dep::~Visitors_Arr_and_Dep()
{
}



int main()
{	
	
	vector<Visitors_Arr_and_Dep> table;
	Visitors_Arr_and_Dep nameTable;
	
	bool input = true;

	while (input)
	{
		cin >> nameTable.name;
		if (nameTable.name == "x")
		{	
			break;
		}
		cin >> nameTable.time_arr >> nameTable.time_dep;
		table.push_back(nameTable);
	}

	for (int i = 0; i < table.size(); ++i)
	{
		cout << table[i].name << "\n";
		cout << table[i].time_arr << "\n";
		cout << table[i].time_dep << "\n";
	}

	
	for (int i = 1; i < table.size(); ++i)
	{
		if (table[i - 1].time_arr <= table[i].time_arr)
		{
			table[i-1].time_arr
		}
	}
	



	
	vector<int> a;
	a.push_back(8);
	a.push_back(12);
	a.push_back(10);
	a.push_back(9);

	sort(a.begin(), a.end());

	for (int i = 0; i < a.size(); ++i)
	{
		cout << a[i] << "\n";
	}
	












	//vector<vector <int>> pairs_of_time;
	//pairs_of_time.reserve(2);
	//pairs_of_time.push_back(vector<int>(5));
	//cout << pairs_of_time[0] << "\n";
	
	
	//vector<int> time_arr = {};
	//vector<int> time_dep = {};
	//time_arr.push_back(9);
	//cout << time_arr[0] << "\n";
}