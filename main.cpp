#include<iostream>
#include"Masina.h"
using namespace std;

int main()
{	
	
	char BMW[] = "BMW";
	Masina bemveu(BMW, 20, 5, 2000);
	bemveu.SetFirma(BMW);
	cout << bemveu.GetFirma() << endl;
	cout << bemveu.GetLitriCombustibil()<<endl;
	bemveu.SetLitriCombustibil(200);
	cout << bemveu.GetLitriCombustibil()<<endl;
	bemveu.SetConsum(10);
	bemveu.SetKilometraj(2000);
	cout << bemveu.GetKilometraj() << endl;
	bemveu.Bisnitar();
	cout << bemveu.GetKilometraj() << endl;
	bemveu.Cursa(5);
	cout << bemveu.GetKilometraj() << endl;
	cout << bemveu.GetLitriCombustibil();
	
	

}