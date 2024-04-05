// chp3ex3.cpp
// 중간고사, 기말고사, 그리고 과제 점수 몇개를 받고
// 마지막 평균 결과 점수를 계산하기.
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
	// 과제 점수를 물음
	cout << "Enter all words followed by EOF: "; // End-Of-File
	vector<string> words;

	// 입력을 위한 변수
	string word; // cin에서 사용하기 
	while (cin >> word) {
		words.push_back(word);
	}

	// { word: count } // { hi: 4, you: 2, its: 1}

	for (auto w : words) { // for (int i = 0; i < words.length; i++ )
		cout << w << ": " << count(words.begin(), words.end(), w) << endl;
	}

	// 결과를 출력
	cout << "Words: " << words.size();

	return 0;
} // main 끝
