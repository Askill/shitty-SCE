#include "3d.h"
#include <iostream>
#include "lgs.h"
using namespace std;

void cylinder();
void lgs();
void nlgs();

int main()
{
	char auswahl = 'a';
	while(auswahl != 'e')
	{
		cout << "Was wollen Sie tun ?" << endl;
		cout << "1 Berechungen an einem Zylinder" << endl;
		cout << "2 LGS loesen" << endl;
		cout << "3 n.LGS loesen" << endl;

		cout << "e Beenden" << endl;
		
		cin >> auswahl;
		switch(auswahl)
		{
			case '1': cylinder(); break;
			case '2': lgs(); break;
			case '3': nlgs(); break;
			
			default: cout << "Okay, bye" << endl; break;
		}
	}
    return 0;
}

void cylinder()
{
	Cylinder cylinder;
	cylinder.data_entry();
	cylinder.compute_options();

}
void lgs()
{
	LGS lgs;
	lgs.data_entry();
	cout << lgs.gauss();
	cout << lgs.cramer();
	cout << endl;
}
void nlgs()
{
	
}
