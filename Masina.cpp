#include<iostream>
#include "Masina.h"
using namespace std;

Masina::Masina(char* firma, float litriCombustibil, float consum, float kilometraj)
{
	for (int i = 0; i <= strlen(firma); i++)
		this->firma[i] = firma[i];
	this->litriCombustibil = litriCombustibil;
	this->consum = consum;
	this->kilometraj = kilometraj;
}

void Masina::SetFirma(char* firma)
{
	for (int i = 0; i <= strlen(firma); i++)
		this->firma[i] = firma[i];
}
char* Masina::GetFirma()
{
	return this->firma;
}
void Masina::SetLitriCombustibil(float litriCombustibil)
{
	this->litriCombustibil = litriCombustibil;
}
float Masina::GetLitriCombustibil()
{
	return this->litriCombustibil;
}
void Masina::SetKilometraj(float kilometraj)
{
	this->kilometraj = kilometraj;
}
float Masina::GetKilometraj()
{
	return this->kilometraj;
}
void Masina::SetConsum(float consum)
{
	this->consum = consum;
}
float Masina::GetConsum()
{
	return this->consum;
}	
void Masina::Bisnitar()
{
	if (this->kilometraj >= 1000)
		this->kilometraj = this->kilometraj - 1000;
	else
		this->kilometraj = 0;
}
void Masina::Cursa(float distanta)
{	
	if (this->litriCombustibil < this->consum * distanta)
	{
		this->kilometraj += this->litriCombustibil * 1.0 / consum;
		this->litriCombustibil = 0;
	}
	else
	{
		this->kilometraj += distanta;
		this->litriCombustibil -= this->consum * distanta;

	}

}

