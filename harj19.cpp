/*************************************************************************************************************************************************************
*Tehtävä: Harjoitus19
*Tekijä: Noora Kuikka
*PVM: 10.11.2013
*Kuvaus:
*Harjoitus 19 (Palautus vko 47)
*Tee ohjelma, joka toimii auton nopeusmittarina.
*Periaate on seuraava: Näppäimistä toimii
*nopeusanturina ja näyttä mittarin näyttänä.
*Nopeusmittari laskee viiden viimeisen nopeuden
*keskiarvon ja tulostaa sen nykyisenä nopeutena
*näytälle. Negatiivinen nopeus lopettaa ohjelman.
*Toiminta on siis seuraava:
*Ohjelman kaynnistyksessa mittari näyttää nolla
*0
*0
*0
*0
*0 (alkutila) nopeus = 0 km/h
*Anna nopeus: 10 => 2 km/h
*Anna nopeus: 20 => 6 km/h
*Anna nopeus: 30 => 12 km/h
*Anna nopeus: 40 => 20 km/h
*Anna nopeus: 50 => 30 km/h
*Anna nopeus: 50 => 38 km/h
*Anna nopeus: 50 => 44 km/h
*Anna nopeus: 50 => 48 km/h
*Anna nopeus: 50 => 50 km/h
*Anna nopeus: 50 => 50 km/h
*Anna nopeus: -5 => loppu
*
*Toteuta kayttaen taulukkoa.
*
*Ohjelma tulostaa lopuksi tietueen tiedot naytölle.
*Versio 1.0 H4719 10.11.2013
**************************************************************************************************************************************************************/

#include <iostream>
using namespace std;

const int SPEED_ARRAY = 5;

int main()
{
	int speed[SPEED_ARRAY] = {0,0,0,0,0};
	int sum;
	int med;
	int input;
	int i = 0;

	cout << "\nThis program acts as a car's speed meter.\nEnter a negative integer to quit the program.\n" << endl;

	do
	{
		cout << "Enter your speed: ";
		cin >> speed[i];
		input = speed[i];
		sum = speed[0]+speed[1]+speed[2]+speed[3]+speed[4];
		med = sum/SPEED_ARRAY;
		if (input >=0)
		{
			cout << " ---> " << med << "km/h" << endl;
		}

		i++;
		if (i>4)
		{
			i=0;
		}
	}
	while(input >= 0);
}
