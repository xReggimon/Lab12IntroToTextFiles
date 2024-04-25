#include <iostream>
#include <fstream>
using namespace std;



void pressEnterToContinue();

int main() {
	cout << "Lab 12 Intro to Text Files!\n";
	pressEnterToContinue;
}

void pressEnterToContinue() {
	cout << "\nPress enter to continue... \n";
	cin.clear();
	while (cin.get() != '\n') continue;
}