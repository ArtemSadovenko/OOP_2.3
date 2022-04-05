#include "LongLong.h"

int main() {
	LongLong a(234, 342);
	LongLong b(a);

	cout << a;
	cout << string(a) << endl;
	a++;
	++b;
	cout << a;
	cout << b << endl;
	a--;
	--b;
	cout << a;
	cout << b;
}