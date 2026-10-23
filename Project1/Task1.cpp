#include <iostream>
#include <string>
int height;
int main() {
	std::cin >> height;
	std::string string="";
	for (int i = 1; i <= height; ++i) {
		string = string + "*";
	std::cout << string << "\n";

	}

}