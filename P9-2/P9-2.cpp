#include <iostream>
#include <string>
using namespace std;

int countWords(string str);

int main() {


}


int countWords(string str) {
	int strLength = str.length();
	int wordcounter = 0;
	for (int i = 0; i < strLength; i++) {
		if (str[i] != ' ' && str[i + 1] == ' ')
			wordcounter++;

	}
}