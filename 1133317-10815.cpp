#include <iostream>
#include <string>
#include <set>
#include <vector>

using namespace std;

int main() {

	set<string> Arr;
	string article;
	string temp;
	while (true) {
		
		getline(cin, article);
		for (int i = 0; i < article.size(); i++) {
			article[i] = tolower(article[i]);
		}
			Arr.insert(article);
		
			for (int i =0; i < Arr.size() ; i++)
			cout << Arr[i] << endl;


	}

	return 0;
}