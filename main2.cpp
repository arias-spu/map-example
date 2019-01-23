#include <unordered_map>
#include <vector>
#include <iostream>
#include <string>

using std::unordered_map;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(int argc, char* argv[]){
	string names[] = {
		"Joe",
		"Felix",
		"Annie",
		"Peter"
	};
	vector<string> myData;
	size_t elements = sizeof(names) / sizeof(names[0]);
	for (int i=0; i<elements; i++)
		myData.push_back(names[i]);
	
	for (int i=0; i<elements; i++)
		cout << i << "\t" << myData[i] << endl;
	
	unordered_map <string, size_t> myMap;
	// zero means it is not there.. so add 1 to gimmick
	myMap["Joe"] = 1;
	myMap["Jenny"] = 2;
	myMap["Jill"] = 5;

	size_t pos;
	pos = myMap["Joe"];
	if (pos == 0)
		cout << "Not found" << endl;
	else
		cout << "Value = "  << pos-1 << endl;
	pos = myMap["Jenny"];
	if (pos == 0)
		cout << "Not found" << endl;
	else
		cout << "Value = "  << pos-1 << endl;
	pos = myMap["Jill"];
	if (pos == 0)
		cout << "Not found" << endl;
	else
		cout << "Value = "  << pos-1 << endl;
	pos = myMap["Betty"];
	if (pos == 0)
		cout << "Not found" << endl;
	else
		cout << "Value = "  << pos-1 << endl;

	return 0;
}
