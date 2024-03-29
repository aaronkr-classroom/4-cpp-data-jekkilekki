// chp3ex4.cpp
#include <iostream>
#include <string>

using std::cin; using std::endl;
using std::cout; using std::string;

int main() {
	// 과제 점수를 물음
	cout << "Enter all words followed by EOF: "; // ^Z

	string max = ""; // word not size
	string min = ""; // word not size

	// 입력을 위한 변수
	string word; // cin에서 사용하기 
	while (cin >> word) {
		// 초기화
		if (min.size() == 0) min = word;
		if (max.size() == 0) max = word;

		// 크기 확인
		if (word.size() < min.size()) min = word;
		else if (word.size() > max.size()) max = word;
	}

	// 결과를 출력
	cout << "Max: " << max << endl
		<< "Min: " << min;

	return 0;
} // main 끝
