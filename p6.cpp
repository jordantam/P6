#include <iostream>

using namespace std;

int main() {
	int a, b, c,d ;

	cout << "insert number 1:" << endl;
	cin >> a;
	cout << "insert number 2:" << endl;
	cin >> b;
	cout <<"insert number 3:" << endl;
	cin >>c;
	d = a * b * c;

<<<<<<< HEAD
	cout <<"Number 1 * Number 2 * Number 3 = " << d << endl;
=======
	c = a * b;

	cout <<"Number 1 * Number 2 = " << c << endl;
>>>>>>> ff7e9c92a461823b84de92568c7727c360e91d9f

	system("pause");
}