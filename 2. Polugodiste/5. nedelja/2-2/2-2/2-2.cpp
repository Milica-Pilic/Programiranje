#include <iostream>
enum trenutno_stanje { ISKLJUCEN = 1, UKLJUCEN, POKVAREN };


class Televizor
{
public:
	Televizor();
	Televizor(trenutno_stanje, int, int);
	Televizor(const Televizor*);
	bool ukljuci();
	bool iskljuci();
	bool pokvari();
	bool popravi();
	bool pojacajZvuk();
	bool smanjiZvuk();
	bool sledeciKanal();
	bool prethodniKanal();
	trenutno_stanje getStanje() const;
	int getZvuk() const;
	int getKanal() const;
	void ispis();

private:
	trenutno_stanje stanje_televizora;
	int trenutni_zvuk;
	int trenutni_kanal;
};

Televizor::Televizor()
{
	stanje_televizora = ISKLJUCEN;
	trenutni_zvuk = 0;
	trenutni_kanal = 1;
}

Televizor::Televizor(trenutno_stanje stanje, int zvuk, int kanal)
{
	stanje_televizora = stanje;
	trenutni_zvuk = zvuk;
	trenutni_kanal = kanal;
}
Televizor::Televizor(const Televizor* o)
{
	stanje_televizora = o->stanje_televizora;
	trenutni_zvuk = o->trenutni_zvuk;
	trenutni_kanal = o->trenutni_kanal;
}
bool Televizor::ukljuci() {
	if (getStanje() == ISKLJUCEN) {
		stanje_televizora = UKLJUCEN;
		return 0;
	}
	else {
		return 1;
	}
}
bool Televizor::iskljuci() {
	if (getStanje() == UKLJUCEN) {
		stanje_televizora = ISKLJUCEN;
		trenutni_zvuk = 0;
		trenutni_kanal = 1;
		return 0;
	}
	else {
		return 1;
	}
}
bool Televizor::pokvari() {
	if (getStanje() != POKVAREN) {
		stanje_televizora = POKVAREN;
		trenutni_zvuk = 0;
		trenutni_kanal = 1;
		return 0;
	}
	else {
		return 1;
	}
}
bool Televizor::popravi() {
	if (getStanje() == POKVAREN) {
		stanje_televizora = ISKLJUCEN;
		trenutni_zvuk = 0;
		trenutni_kanal = 1;
		return 0;
	}
	else {
		return 1;
	}
}
bool Televizor::pojacajZvuk() {
	if (stanje_televizora != UKLJUCEN) {
		return 1;
	}
	if (trenutni_zvuk < 20) {
		trenutni_zvuk++;
		return 0;
	}
	else {
		return 1;
	}
}
bool Televizor::smanjiZvuk() {
	if (stanje_televizora != UKLJUCEN) {
		return 1;
	}
	if (trenutni_zvuk > 0) {
		trenutni_zvuk--;
		return 0;
	}
	else {
		return 1;
	}
}
bool Televizor::sledeciKanal() {
	if (stanje_televizora != UKLJUCEN) {
		return 1;
	}
	if (trenutni_kanal < 5) {
		trenutni_kanal++;
		return 0;
	}
	else {
		return 1;
	}
}
bool Televizor::prethodniKanal() {
	if (stanje_televizora != UKLJUCEN) {
		return 1;
	}
	if (trenutni_kanal > 1) {
		trenutni_kanal--;
		return 0;
	}
	else {
		return 1;
	}
}
trenutno_stanje Televizor::getStanje()const {
	return stanje_televizora;
}
int Televizor::getZvuk()const {
	return trenutni_zvuk;
}
int Televizor::getKanal()const {
	return trenutni_kanal;
}
void Televizor::ispis() {
	std::cout << "Televizor je trenutno ";
	switch (stanje_televizora) {
	case 1: {
		std::cout << "iskljucen." << std::endl;
		break;
	}
	case 2: {
		std::cout << "ukljucen." << std::endl;
		break;
	}
	case 3: {
		std::cout << "pokvaren." << std::endl;
		break;
	}
	}

	std::cout << "Trenutan zvuk je " << getZvuk() << std::endl;
	std::cout << "Trenutni kanal je " << getKanal() << std::endl;
}

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}


