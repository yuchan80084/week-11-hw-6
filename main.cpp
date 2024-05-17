#include <iostream>
#include "health.h"
using namespace std;
int main() {

	health VIP2(30), * mickey;
	mickey = new health(50);

	cout << "VIP2: " << VIP2.age << " mickey: " << mickey->age << endl;
	
	VIP2.measureCel();
	mickey->measureCel();

	cout << "VIP2: " << VIP2.cel << "C mickey: " << mickey->faren << "F \n";
	cout << "  size " << sizeof(health) << "\n";
	return 1;
}