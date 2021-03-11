

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

/*Projekat 1 : Kolac

Napisati klasu Preliv koja sadrži polje tip(tipa TipPreliva - nabrojiv niz celobrojnih vrednosti).
TipPreliva može imati vrednosti COKOLADNI i COKOLADNI_SA_SLAGOM.
U klasi realizovati :
Konstruktor sa predefinisanim vrednostima za parametre - ukoliko se ne prosledi parametar, polje tip treba imati vrednost COKOLADNI
bool dodajSlag()
bool ukloniSlag()
get metodu
slobodnu funkciju ispisiPreliv(const Preliv&) - ispisuje informacije vezane za preliv i to u sledećem formatu :
------------------------
Preliv : COKOLADNI
	------------------------

	Metoda dodajSlag() menja vrednost polja tip u COKOLADNI_SA_SLAGOM ukoliko je vrednost polja tip COKOLADNI.
	Metoda ukloniSlag() menja vrednost polja tip u COKOLADNI ukoliko je vrednost polja tip COKOLADNI_SA_SLAGOM.
	Napisati klasu Kolac koja sadrži polja : stanje(tipa KolacStanje - nabrojiv niz celobrojnih vrednosti), temperatura(tipa int, koji predstavlja temperaturu kolača) i preliv(tipa Preliv).
	KolacStanje može imati vrednosti U_PRIPREMI, PECE_SE, ZAGOREO i PRIPREMLJEN.



	U klasi realizovati :
Prazan konstruktor - postavlja polje temperatura na 20, stanje na U_PRIPREMI, vrsta na COKOLADNI
Konstruktor kopije
bool staviDaSePece()
bool ispeciKolac()
bool zavrsiKolac()
bool povecajTemperaturu()
bool smanjiTemperaturu()
bool dodajSlag()
bool ukloniSlag()
get metode
slobodnu funkciju ispisiKolac(const Kolac&) - ispisuje informacije vezane za kolač i to u sledećem formatu :
------------------------
Stanje : PECE_SE
	Temperatura : 60
	Preliv : COKOLADNI
	------------------------
	Metoda staviDaSePece() postavlja stanje kolača u PECE_SE, ukoliko na kolaču nema šlaga(kolač ima na sebi šlag ako mu je tip preliva COKOLADNI_SA_SLAGOM), i povećava vrednost polja temperatura za jedan korak.
	Metoda ispeciKolac() postavlja stanje kolača na vrednost U_PRIPREMI i postavlja vrednost polja temperatura na 20. Ova metoda se može pozvati samo ukoliko je kolač u stanju PECE_SE.
	Metoda zavrsiKolac() postavlja stanje kolača na vrednost PRIPREMLJEN.Ova metoda se može pozvati samo ukoliko je vrednost stanja kolača na U_PRIPREMI.
	Metoda povecajTemperaturu() povećava vrednost polja temperatura za jedan korak.Ova metoda se može pozvati samo ukoliko je kolač u stanju PECE_SE.Maksimalna moguća vrednost temperature kolača iznosi 100 stepeni.Ukoliko se temperatura poveća toliko da vrednost polja temperatura treba da pređe vrednost 100, stanje kolača se menja i prelazi u ZAGOREO, a vrednost polja temperatura postaviti na 20.
	Metoda smanjiTemperaturu() smanjuje vrednost polja temperatura za jedan korak.Ova metoda se može pozvati samo ukoliko je kolač u stanju PECE_SE.Minimalna moguća vrednost temperature kolača iznosi 40 stepeni.
	Metoda dodajSlag() menja tip preliva na COKOLADNI_SA_SLAGOM ukoliko se kolač nalazi u stanju U_PRIPREMI i ukoliko je vrednost polja tip(klase Preliv) COKOLADNI.
	Metoda ukloniSlag() menja tip preliva na COKOLADNI ukoliko se kolač nalazi u stanju U_PRIPREMI i ukoliko je vrednost polja tip(klase Preliv) COKOLADNI_SA_SLAGOM.
	NAPOMENE:
Napraviti funkciju meni koja omogućava pozivanje svih metoda nad jednim objektom.

