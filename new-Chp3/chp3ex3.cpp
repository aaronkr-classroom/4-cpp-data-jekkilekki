// chp3ex3.cpp
// �߰����, �⸻���, �׸��� ���� ���� ��� �ް�
// ������ ��� ��� ������ ����ϱ�.
#include <algorithm>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::cin;	 using std::vector;
using std::cout; using std::string;
using std::endl; using std::streamsize;
using std::count;

int main() {
	// ���� ������ ����
	cout << "Enter all words followed by EOF: "; // End-Of-File
	vector<string> words;

	// �Է��� ���� ����
	string word; // cin���� ����ϱ� 
	while (cin >> word) {
		words.push_back(word);
	}

	// { word: count } // { hi: 4, you: 2, its: 1}

	for (auto w : words) { // for (int i = 0; i < words.length; i++ )
		cout << w << ": " << count(words.begin(), words.end(), w) << endl;
	}

	// ����� ���
	cout << "Words: " << words.size();

	return 0;
} // main ��
