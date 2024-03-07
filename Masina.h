class Masina
{
	char firma[100];
	int litriCombustibil;
	int consum;
	int kilometraj;
public:
	void SetFirma(char* firma);
	char* GetFirma();
	void SetLitriCombustibil(float litriCombustibil);
	float GetLitriCombustibil();
	void SetConsum(float consum);
	float GetConsum();
	void SetKilometraj(float kilometraj);
	float GetKilometraj();
	void Bisnitar();
	void Cursa(float distanta);
	Masina(char* firma, float litriCombustibil, float consum, float kilometraj);
};