//Zach Brown
//Date: 
//CS2 

#include <iostream>
#include <cmath>

using namespace std;

int findFactor(int num);
bool isPrime(int num);
void factorInput();
int findSmallestPrimeFactor(int num);


int main() {
	factorInput();
}
int findFactor(int num) {
	int smallestFactor = findSmallestPrimeFactor(num);
	if (num == 1)
		cout << 1 << " ";
	else
		if (num == smallestFactor)
			cout << smallestFactor << " ";
		else {
			cout << smallestFactor << " ";
			findFactor(num / smallestFactor);
		}

}

bool isPrime(int num) {
	for (int i = 2; i <= sqrt(num); i++)
		if (num % i == 0)
			return true;
		else
			return false;
}

void factorInput() {
	int num;
	std::cout << "Enter a number" << std::endl;
	std::cin >> num;
	std::cout << (isPrime(num) ? "Prime" : "Not prime") << std::endl;
}

int findSmallestPrimeFactor(int num) {
	for (int i = 2; i <= sqrt(num); i++)
		if (num % i == 0)
			return i;
	return num;
}