#include <iostream>
using namespace std;
int main()
{
	int kokonaisluku;
	int rivinro=1;
	int sarake;
	cout << "Syötä kokonaisluku 1-9: ";
	cin >> kokonaisluku;
	while (rivinro < kokonaisluku+1)
	{
		for (sarake=1;sarake <= rivinro;
			sarake++)
		cout << rivinro;
		rivinro++;
		cout << "\n";
	}



}