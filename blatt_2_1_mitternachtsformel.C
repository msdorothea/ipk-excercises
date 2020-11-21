#include <iostream>
#include <string>
#include <cmath>



int main( int argc, char** argv)
{
	double u,v,w; //u,v,w entsprechen im Hintergrund a,b,c
	
	//Einlesen der Werte
	std::cout << "a=" << std::flush;
	std::cin>> u;
	std::cout << "b=" << std::flush;//
	std::cin>> v;
	std::cout << "c=" << std::flush;
	std::cin>> w;
	//Um zu verhindern dass das Programm crasht weil es durch 0 teilt:
	if (u==0 and v!=0)
	{
		std::cout<< "Keine Quadratische Gleichung (Fehlermeldung, damit nicht durch null geteilt wird." << std::endl;
	}
	else
	{
		double k = v*v-4*u*w; // k berechnen um nachher zu schaun ob Lösung reell
		double ergebnis1 = ((-1)*v+std::sqrt(k))/(2*u);
		double ergebnis2 = ((-1)*v-std::sqrt(k))/(2*u);
	
	// Falls die ganze Funktion gleich Null ist
	
		if (u==v and v==w and w==0)
		{
			std::cout<< "keine eindeutige Lösung" << std::endl;
		}
		else
		{
	//Fals es keine Lösung gibt
			if (k<0)
			{
				std::cout<< "keine reelle Lösung" << std::endl;
			}
			else // Es gibt also eine Lösung, also wollen wir sie wissen
			{
				std::cout<< "x_1=" << ergebnis1 << std::endl;
				std::cout<< "x_2=" << ergebnis2 << std::endl;
			}	
		}
		
	}
	
	
	
	return 0;
}

