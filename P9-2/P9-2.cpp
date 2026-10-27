#include <iostream>
#include <string>
using namespace std;

int countWords(string str);

int main() {
	string str="";
	while (true) {

		cout << "Enter a string or Q to quit:";
		getline(cin, str);
		cout << countWords(str) << endl;
		if (str == "Q") {
			break;
		}
	}
}


int countWords(string str) {
	bool inword = false;
	int wordcounter = 0;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ') {
			inword = false;
		}
		else if (inword == false) {
			wordcounter++;
			inword = true;
		}

		
	}
	return wordcounter;

}