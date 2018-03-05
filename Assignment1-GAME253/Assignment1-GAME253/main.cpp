#include <iostream>
#include <Engine.h>

struct sendHelp {
	void Print() {
		std::cout << "Please\n";
	}
};

int main() {
	Engine e;
	e.print();

	//sendHelp s;
	//s.Print();

	getchar();
	return 0;
}