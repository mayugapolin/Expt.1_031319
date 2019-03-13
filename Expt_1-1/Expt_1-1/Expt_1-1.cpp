#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	double Premium = 250;
	double Side = 100;
	double Box = 50;84
	double Gen = 25;

	cout << "Number of Tickets sold - PREMIUM " << endl;
	cin >> Premium;
	cout << "Number of Premium tickets"  << "         " << "P" << 250*Premium << endl;
	cout << " " << fixed << setprecision(2) << endl;

	cout << "Number of Tickets sold4 - Sideline " << endl;
	cin >> Side;
	cout << "Number of Side tickets"  << "         "<< "P"  << 100*Side << endl;
	cout << " " << fixed << setprecision(2) << endl;

	cout << "Number of Tickets sold  - Box " << endl;
	cin >> Box;
	cout << "Number of Box tickets"  << "         "<< "P"  << 50*Box<< endl;
	cout << " " << fixed << setprecision(2) << endl;

	cout << "Number of Tickets sold - General Admission " << endl;
	cin >> Gen;
	cout << "Number of General Admission tickets"  << "         "<< "P"  << 25*Gen << endl;
	cout << " " << fixed << setprecision(2) << endl;

	cout << "Total number of Tickets Sold" << "         " << Premium+Side+Box+Gen << endl;
	cout << "Total Sales" <<  "         " << "P" << Premium*250+Side*100+Box*50+25*Gen << fixed << setprecision(2) << endl;

	_getch();
	return 0;
}