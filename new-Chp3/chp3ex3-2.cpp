#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
	vector<string> words;
	unordered_map<string, int> wordCount;

	// Accept input
	cout << "Enter words (CTRL+D to stop): " << endl;
	string word;
	while (cin >> word) {
		words.push_back(word);
	}

	// Count word occurences
	for (const auto& w : words) {
		wordCount[w]++;
	}

	// Output results
	cout << "Word count: " << endl;
	for (const auto& pair : wordCount) {
		cout << pair.first << ": " << pair.second << endl;
	}

	return 0;
}