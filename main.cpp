#include <unordered_map>
#include <iostream>
#include <string>

using std::unordered_map;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char* argv[]){
	string data[] =
	{
			"joe",
			"pete",
			"jen",
			"pete",
			"jen",
			"jay",
			"jen",
			"ann",
			"lou",
			"jen"
	};

	unordered_map <string, size_t> count;

	size_t size = sizeof(data) / sizeof(data[0]);

	for (size_t i = 0; i < size; i++) {
		if (count[data[i]] == 0){
			count[data[i]] = 1;
		}else{
			count[data[i]] = count[data[i]] + 1;
		}
	}

	for (unordered_map<string,size_t>::iterator it=count.begin(); it!=count.end(); ++it)
		// it->first is the key
		// it->second is the value
		cout << it->first << " => " << it->second << endl;

	return 0;
}
