#include <iostream>
#include <conio.h>

using namespace std;

enum Warna
{
	Merah, 
	Putih, 
	Hitam,
	Coklat,
	Kuning,
	Biru
};

int main()
{
	Warna Kain;
	Kain = Hitam;

	if (Kain == Hitam)
	{
		cout << "Warna Kain: Hitam" << endl;
	}

	cout << Kain << endl;
	_getch();
	return 0;
}