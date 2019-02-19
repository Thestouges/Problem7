/*
Given the mapping a = 1, b = 2, ... z = 26, and an encoded message, count the number of ways it can be decoded.

For example, the message '111' would give 3, since it could be decoded as 'aaa', 'ka', and 'ak'.

You can assume that the messages are decodable. For example, '001' is not allowed.
*/

#include <iostream>
#include <string>

int result = 0;
void decode(std::string s) {
	for (int i = 0; i < s.length(); i++) {
		if (std::stoi(s.substr(i, 2)) >= 10
			&& std::stoi(s.substr(i, 2)) <= 26) {
			decode(s.substr(i+2));
		}
	}

	result++;
}

void main() {
	std::string s;
	std::cout << "Enter decodable string of numbers: ";
	std::cin >> s;
	decode(s);
	std::cout << result<<std::endl;

	system("pause");
}