#include <iostream>
#include <clocale>
#include <cstdlib>

using namespace std;

int main() {
	setlocale(LC_ALL, "russian");
	cout << "Привет, Мир!" << endl;
	system("pause");
	return 0;
}