#include <iostream>

class SalariuAngajat
{
private:
	float salariu;
public:
	void SetSalariu (float s);
	float GetSalariu();
};

int main()
{
	SalariuAngajat sa;
	sa.SetSalariu(3.263);
	sa.GetSalariu();

	system("pause");
}

void SalariuAngajat::SetSalariu(float s)
{
	salariu = s;
}

float SalariuAngajat::GetSalariu()
{
	std::cout << "Date Confidentiale" << std::endl;
	std::cout << std::endl;
	std::cout << "Salariu (RON): " << salariu << std::endl;
	return salariu;
}