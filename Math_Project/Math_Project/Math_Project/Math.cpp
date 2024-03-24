// Math_Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Math.h"
using namespace std;

int Math::Add(int a, int b)
{
	return a + b;
}

int Math::Add(int a, int b, int c)
{
	return a + b + c;
}

int Math::Add(double a, double b)
{
	return a + b;
}

int Math::Add(double a, double b, double c)
{
	return a + b + c;
}
	
int Math::Mul(int a, int b)
{
	return a * b;
}

int Math::Mul(int a, int b, int c)
{
	return a * b * c;
}

int Math::Mul(double a, double b)
{
	return a * b;
}

int Math::Mul(double a, double b, double c)
{
	return a * b * c;
}

/*int Math::Add(int a, ...)
{

}
*/

char* Math::Add(const char* a, const char* b)
{
	int nr1 = 0;
	int nr2 = 0;
	for (int i = 0; i<strlen(a);i++)
	{
		char x = a[i];
		int y = x - '0';
		nr1 = nr1 * 10 + y;
	}
	for (int i = 0; i<strlen(b); i++)
	{
		char x = b[i];
		int y = x - '0';
		nr2 = nr2 * 10 + y;
	}
	int nr = nr1 + nr2;
	char* sir =new char[100];
	//motivul pentru care folosesc char * sir = new char[100] este
	// pentru ca daca folosesc char sir[100], terbuie sa il distrug la final,
	// daro pentru ca return-ul este ultima comanda, ar insemna ca trebui sa ii dau delete
	// inainte de return si astfel as returna ceva NULL;
	
	int i = 0;
	int nr_final=0;
	while (nr)
	{
		nr_final = nr_final * 10 + nr % 10;
		nr = nr / 10;
	}
	while (nr_final)
	{
		sir[i] = nr_final % 10 + '0';
		nr_final = nr_final / 10;
		i++;
	}
	sir[i] = '\0';
	return sir;
}