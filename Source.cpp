#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <windows.h>

using std::cout;
using std::cin;

void roll_dice() {
	
	srand(time(0));
	for (int i = 0; i < 1; i++) {
		cout << (rand() % 6) + 1 << '\n';
	}
	
}

int main() {
	
	cout << "Hello there! Wanna play a game? How 'bout some good ol' dice game.\n";
	cout << "Press any key to continue\n";
	cin.ignore();

	cout << "Drum roll please...\n";
	cout.flush();
	Sleep(3000);
	
	cout << "Your rolled dice value is...\n";
	roll_dice();

	return 0;
}