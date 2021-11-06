#include <iostream>

using namespace std;

int main(void) {
	int n;
	int a = 0, b = 0;
	
	cin >> n;
	if (n % 5 == 0)
		cout << (n / 5);
	else {
		do {
			n -= 3;
			a++;
			if (n % 5 == 0)
				b = (n / 5);

		} while (n > 0)
		cout << a + b;
	
	}


}