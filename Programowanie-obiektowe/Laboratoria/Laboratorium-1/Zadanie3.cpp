#include <iostream>
#include "Prostokat.h"
#include "Kolo.h"
#include "Trojkat.h"

using namespace std;

int main() {
	//Definicja przez zmienn¹ lokaln¹
	Prostokat prostokat1(4, 7);

	cout << "Bok a: " << prostokat1.GetA() << endl;
	cout << "Bok b: " << prostokat1.GetB() << endl;
	cout << "Obwód: " << prostokat1.Obwod() << endl;
	cout << "Pole: " << prostokat1.Pole() << endl;
	cout << prostokat1 << endl;

	prostokat1.SetA(4);
	prostokat1.SetB(5);

	cout << "Bok a: " << prostokat1.GetA() << endl;
	cout << "Bok b: " << prostokat1.GetB() << endl;
	cout << "Obwód: " << prostokat1.Obwod() << endl;
	cout << "Pole: " << prostokat1.Pole() << endl;
	cout << prostokat1 << endl;

	Trojkat trojkat1(3, 4, 5);

	cout << "Bok a: " << trojkat1.GetA() << endl;
	cout << "Bok b: " << trojkat1.GetB() << endl;
	cout << "Bok c: " << trojkat1.GetC() << endl;
	cout << "Obwód: " << trojkat1.Obwod() << endl;
	cout << "Pole: " << trojkat1.Pole() << endl;
	cout << trojkat1 << endl;

	trojkat1.SetA(5);
	trojkat1.SetB(12);
	trojkat1.SetC(13);

	cout << "Bok a: " << trojkat1.GetA() << endl;
	cout << "Bok b: " << trojkat1.GetB() << endl;
	cout << "Bok c: " << trojkat1.GetC() << endl;
	cout << "Obwód: " << trojkat1.Obwod() << endl;
	cout << "Pole: " << trojkat1.Pole() << endl;
	cout << trojkat1 << endl;

	Kolo kolo1(5);

	cout << "Promieñ: " << kolo1.GetR() << endl;
	cout << "Obwód: " << kolo1.Obwod() << endl;
	cout << "Pole: " << kolo1.Pole() << endl;
	cout << kolo1 << endl;

	kolo1.SetR(10);

	cout << "Promieñ: " << kolo1.GetR() << endl;
	cout << "Obwód: " << kolo1.Obwod() << endl;
	cout << "Pole: " << kolo1.Pole() << endl;
	cout << kolo1 << endl;

	//Definicja przez wskaŸnik
	Prostokat* prostokat2;
	prostokat2 = new Prostokat(5, 10);

	cout << "Bok a: " << prostokat2->GetA() << endl;
	cout << "Bok b: " << prostokat2->GetB() << endl;
	cout << "Obwód: " << prostokat2->Obwod() << endl;
	cout << "Pole: " << prostokat2->Pole() << endl;
	cout << *prostokat2 << endl;

	prostokat2->SetA(4);
	prostokat2->SetB(5);

	cout << "Bok a: " << prostokat2->GetA() << endl;
	cout << "Bok b: " << prostokat2->GetB() << endl;
	cout << "Obwód: " << prostokat2->Obwod() << endl;
	cout << "Pole: " << prostokat2->Pole() << endl;
	cout << *prostokat2 << endl;

	Trojkat* trojkat2;
	trojkat2 = new Trojkat(1, 2, 3);

	cout << "Bok a: " << trojkat2->GetA() << endl;
	cout << "Bok b: " << trojkat2->GetB() << endl;
	cout << "Bok c: " << trojkat2->GetC() << endl;
	cout << "Obwód: " << trojkat2->Obwod() << endl;
	cout << "Pole: " << trojkat2->Pole() << endl;
	cout << *trojkat2 << endl;

	trojkat2->SetA(5);
	trojkat2->SetB(12);
	trojkat2->SetC(13);

	cout << "Bok a: " << trojkat2->GetA() << endl;
	cout << "Bok b: " << trojkat2->GetB() << endl;
	cout << "Bok c: " << trojkat2->GetC() << endl;
	cout << "Obwód: " << trojkat2->Obwod() << endl;
	cout << "Pole: " << trojkat2->Pole() << endl;
	cout << *trojkat2 << endl;

	Kolo* kolo2;
	new kolo2 = Kolo(2);

	cout << "Promieñ: " << kolo2->GetR() << endl;
	cout << "Obwód: " << kolo2->Obwod() << endl;
	cout << "Pole: " << kolo2->Pole() << endl;
	cout << *kolo2 << endl;

	kolo2->SetR(10);

	cout << "Promieñ: " << kolo2->GetR() << endl;
	cout << "Obwód: " << kolo2->Obwod() << endl;
	cout << "Pole: " << kolo2->Pole() << endl;
	cout << *kolo2 << endl;

	//Prezentacja wirtualnoœci metod Obwod() i Pole()
	FiguraPlaska* tab[3];

	tab[0] = new Prostokat(4, 5);
	tab[1] = new Trojkat(3, 4, 5);
	tab[2] = new Kolo(5);

	for (int i = 0; i < 3; i++)
	{
		cout << tab[i]->Obwod() << endl;
		cout << tab[i]->Pole() << endl;
	}

	for (int i = 0; i < 3; i++)
	{
		delete tab[i];
	}
}