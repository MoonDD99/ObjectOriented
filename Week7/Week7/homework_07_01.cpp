#include <fstream>
#include <iostream>
#include <string>

using namespace std;
class AnyString {
	std::string anyString;

public:
	AnyString(const std::string& anyString) : anyString(anyString) {}
	std::string getAnyString() {
		return "Stored String :: " + anyString;
	}

	friend ofstream& operator<<(ofstream& of, AnyString& a);
};

 ofstream& operator<<(ofstream& of, AnyString& a) {
	string output = a.getAnyString();
	of << output;
	return of;
}


int main() {
	std::ofstream out("testOveroding.txt");
	AnyString a("Hello, this is operator overloading test!!!");
	out << a << std::endl;

	return 0;
}