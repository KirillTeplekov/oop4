#include "Lorry.h"
#include <iostream>

using namespace std;

int main() {
	Car ford("Ford", 6, 180);
	Lorry man("MAN", 8, 550, 1200);
	/*while (true) {
		Car* x = new Lorry;
		delete x;
	}*/
	cout << ford << endl;
	cout << man << endl;

	ford.raiseEnginePower(100);
	ford.reduceEnginePower(34);
	ford.setTrademark("F");
	cout << ford << endl;

	man.raiseCapacity(1000);
	man.reduceCapacity(1);
	man.raiseEnginePower(200);
	man.setTrademark("M");
	cout << man;
}