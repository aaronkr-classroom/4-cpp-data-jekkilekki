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

int main() {
	// ���� ������ ����
	cout << "Enter all words followed by EOF: "; // End-Of-File
	vector<string> words;

	// �Է��� ���� ����
	string word; // cin���� ����ϱ� 
	while (cin >> word) {
		words.push_back(word);
	}

	// ����� ���
	cout << "Words: " << words.size();

	return 0;
} // main ��
