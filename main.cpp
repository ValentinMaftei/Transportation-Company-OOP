#include <bits/stdc++.h>

class Vehicule {

public:
    Vehicule(std::string model, unsigned int capacitateCombustibil, unsigned int cantitateMaxima,
             std::string categorie);

    Vehicule(const Vehicule &);

    Vehicule();

    virtual ~Vehicule();

    void setmodel(std::string);

    std::string getmodel();

    void setcapacitateCombustibil(unsigned int);

    unsigned int getcapacitateCombustibil();

    void setgreutateMaxima(unsigned int);

    unsigned int getgreutateMaxima();

    void setcategorie(std::string);

    std::string getcategorie();

    friend std::istream &operator>>(std::istream &citire, Vehicule &vehicule);

    friend std::ostream &operator<<(std::ostream &afisare, Vehicule &vehicule);

    Vehicule &operator=(Vehicule);

protected:
    std::string model;
    unsigned int capacitateCombustibil;
    unsigned int greutateMaxima;
    std::string categorie;
    static unsigned int ultimulIdMasina;
    unsigned int idMasina;

    static int functieId();
};

Vehicule::Vehicule(std::string model, unsigned int capacitateCombustibil, unsigned int cantitateMaxima,
                   std::string categorie) {
    this->model = model;
    this->capacitateCombustibil = capacitateCombustibil;
    this->greutateMaxima = cantitateMaxima;
    this->categorie = categorie;
    this->idMasina = functieId();
}

Vehicule::Vehicule(const Vehicule &vehicule) {
    model = vehicule.model;
    capacitateCombustibil = vehicule.capacitateCombustibil;
    greutateMaxima = vehicule.greutateMaxima;
    categorie = vehicule.categorie;
}

Vehicule::Vehicule() {
    idMasina = functieId();
}

void Vehicule::setmodel(std::string) {
    this->model = model;
}

void Vehicule::setcapacitateCombustibil(unsigned int) {
    this->capacitateCombustibil = capacitateCombustibil;
}

void Vehicule::setgreutateMaxima(unsigned int) {
    this->greutateMaxima = greutateMaxima;
}

void Vehicule::setcategorie(std::string) {
    this->categorie = categorie;
}

std::string Vehicule::getmodel() {
    return this->model;
}

unsigned int Vehicule::getcapacitateCombustibil() {
    return this->capacitateCombustibil;
}

unsigned int Vehicule::getgreutateMaxima() {
    return this->greutateMaxima;
}

std::string Vehicule::getcategorie() {
    return this->categorie;
}

unsigned int Vehicule::ultimulIdMasina = 100;

int Vehicule::functieId() {
    return ultimulIdMasina++;
}


class Autovehicule : public Vehicule {
public:
    Autovehicule(std::string model, unsigned int capacitateCombustibil, unsigned int cantitateMaxima, std::string tip,
                 std::string categorie);

    Autovehicule(const Autovehicule &);

    Autovehicule();

    void settip(std::string);

    std::string gettip();

    friend std::istream &operator>>(std::istream &citire, Autovehicule &autovehicul);

    friend std::ostream &operator<<(std::ostream &afisare, Autovehicule &autovehicul);

    Autovehicule &operator=(Autovehicule);


private:
    std::string tip;
};

Autovehicule::Autovehicule(std::string model, unsigned int capacitateCombustibil, unsigned int cantitateMaxima,
                           std::string tip, std::string categorie) : Vehicule(model, capacitateCombustibil,
                                                                              cantitateMaxima, categorie) {
    this->tip = tip;
}

Autovehicule::Autovehicule(const Autovehicule &autovehicul) {
    tip = autovehicul.tip;
}

Autovehicule::Autovehicule() : Vehicule() {}

void Autovehicule::settip(std::string) {
    this->tip = tip;
}

std::string Autovehicule::gettip() {
    return this->tip;
}

class Autoutilitare : public Vehicule {
public:
    Autoutilitare(std::string model, unsigned int capacitateCombustibil, unsigned int cantitateMaxima,
                  unsigned int idRemorca, std::string categorie);

    Autoutilitare(const Autoutilitare &);

    Autoutilitare();

    void setidRemorca(unsigned int);

    unsigned int getidRemorca();

    friend std::istream &operator>>(std::istream &citire, Autoutilitare &autoutilitara);

    friend std::ostream &operator<<(std::ostream &afisare, Autoutilitare &autoutilitara);

    Autoutilitare &operator=(Autoutilitare);

private:
    unsigned int idRemorca;
};

Autoutilitare::Autoutilitare(std::string model, unsigned int capacitateCombustibil, unsigned int cantitateMaxima,
                             unsigned int idRemorca, std::string categorie) :
        Vehicule(model, capacitateCombustibil, cantitateMaxima, categorie) {
    this->idRemorca = idRemorca;
}

Autoutilitare::Autoutilitare(const Autoutilitare &autoutilitara) : Vehicule(autoutilitara) {
    idRemorca = autoutilitara.idRemorca;
}

Autoutilitare::Autoutilitare() : Vehicule() {}

void Autoutilitare::setidRemorca(unsigned int) {
    this->idRemorca = idRemorca;
}

unsigned int Autoutilitare::getidRemorca() {
    return this->idRemorca;
}

class Angajati {
public:
    Angajati(std::string nume, std::string prenume, long long cnp, unsigned int codAngajat);

    Angajati(const Angajati &);

    Angajati();

    void setnume(std::string);

    std::string getnume();

    void setprenume(std::string);

    std::string getprenume();

    void setcnp(long long);

    long long int getcnp();

    void setcodAngajat(unsigned int);

    unsigned int getcodAngajat();

    friend std::istream &operator>>(std::istream &citire, Angajati &);

    friend std::ostream &operator<<(std::ostream &afisare, Angajati &);

    Angajati &operator=(Angajati);

protected:
    std::string nume;
    std::string prenume;
    unsigned int cnp;
    unsigned int codAngajat;
};

Angajati::Angajati(std::string nume, std::string prenume, long long cnp, unsigned int codAngajat) {
    this->nume = nume;
    this->prenume = prenume;
    this->cnp = cnp;
    this->codAngajat = codAngajat;
}

Angajati::Angajati(const Angajati &angajat) {
    nume = angajat.nume;
    prenume = angajat.prenume;
    cnp = angajat.cnp;
    codAngajat = angajat.codAngajat;
}

Angajati::Angajati() {}

void Angajati::setnume(std::string) {
    this->nume = nume;
}

void Angajati::setprenume(std::string) {
    this->prenume = prenume;
}

void Angajati::setcnp(long long) {
    this->cnp = cnp;
}

void Angajati::setcodAngajat(unsigned int) {
    this->codAngajat = codAngajat;
}

std::string Angajati::getnume() {
    return this->nume;
}

std::string Angajati::getprenume() {
    return this->prenume;
}

long long Angajati::getcnp() {
    return this->cnp;
}

unsigned int Angajati::getcodAngajat() {
    return this->codAngajat;
}

class Soferi : public Angajati {
public:
    Soferi(std::string nume, std::string prenume, long long cnp, unsigned int codAngajat, unsigned int idSofer,
           std::string categoriePermis);

    Soferi(const Soferi &);

    Soferi();

    void setidSofer(unsigned int);

    unsigned int getidSofer();

    void setcategoriePermis(std::string);

    std::string getcategoriePermis();

    friend std::istream &operator>>(std::istream &citire, Soferi &);

    friend std::ostream &operator<<(std::ostream &afisare, Soferi &);

    Soferi &operator=(Soferi);

private:
    unsigned int idSofer;
    std::string categoriePermis;
};

Soferi::Soferi(std::string nume, std::string prenume, long long cnp, unsigned int codAngajat,
               unsigned int idSofer, std::string categoriePermis) : Angajati(nume, prenume, cnp, codAngajat) {
    this->idSofer = idSofer;
    this->categoriePermis = categoriePermis;
}

Soferi::Soferi(const Soferi &sofer) : Angajati(sofer) {
    idSofer = sofer.idSofer;
    categoriePermis = sofer.categoriePermis;
}

Soferi::Soferi() : Angajati() {}

void Soferi::setidSofer(unsigned int) {
    this->idSofer = idSofer;
}

void Soferi::setcategoriePermis(std::string) {
    this->categoriePermis = categoriePermis;
}

unsigned int Soferi::getidSofer() {
    return this->idSofer;
}

std::string Soferi::getcategoriePermis() {
    return this->categoriePermis;
}

class Administratie : public Angajati {
public:
    Administratie(std::string nume, std::string prenume, long long cnp, unsigned int codAngajat, std::string functie);

    Administratie(const Administratie &);

    Administratie();

    void setfunctie(std::string);

    std::string getfunctie();

    friend std::istream &operator>>(std::istream &citire, Administratie &);

    friend std::ostream &operator<<(std::ostream &afisare, Administratie &);

    Administratie &operator=(Administratie);

private:
    std::string functie;
};

Administratie::Administratie(std::string nume, std::string prenume, long long cnp, unsigned int codAngajat,
                             std::string functie) : Angajati(nume, prenume, cnp, codAngajat) {
    this->functie = functie;
}

Administratie::Administratie(const Administratie &administratie) : Angajati(administratie) {
    functie = administratie.functie;
}

Administratie::Administratie() : Angajati() {}

void Administratie::setfunctie(std::string) {
    this->functie = functie;
}

std::string Administratie::getfunctie() {
    return this->functie;
}

class Deplasari {
public:
    Deplasari(unsigned int zi, unsigned int luna, unsigned int an, unsigned int ora, std::string plecare,
              std::string destinatie, unsigned int id_sofer, unsigned combustibil_necesar);

    Deplasari(const Deplasari &);

    Deplasari();

    void setzi(unsigned int);

    unsigned int getzi();

    void setluna(unsigned int);

    unsigned int getluna();

    void setan(unsigned int);

    unsigned int getan();

    void setora(unsigned int);

    unsigned int getora();

    void setplecare(std::string);

    std::string getplecare();

    void setdestinatie(std::string);

    std::string getdestinatie();

    void setidsofer(unsigned int);

    unsigned int getidsofer();

    void setCombustibilNecesar(unsigned int);

    unsigned int getCombustibilNecesar();

    friend std::istream &operator>>(std::istream &citire, Deplasari &);

    friend std::ostream &operator<<(std::ostream &afisare, Deplasari &);

    Deplasari &operator=(Deplasari);

private:
    unsigned int zi;
    unsigned int luna;
    unsigned int an;
    unsigned int ora;
    std::string plecare;
    std::string destinatie;
    unsigned int id_sofer;
    unsigned int combustibil_necesar;

};

Deplasari::Deplasari(unsigned int zi, unsigned int luna, unsigned int an, unsigned int ora, std::string plecare,
                     std::string destinatie, unsigned int id_sofer, unsigned combustibil_necesar) {
    this->zi = zi;
    this->luna = luna;
    this->an = an;
    this->ora = ora;
    this->plecare = plecare;
    this->destinatie = destinatie;
    this->id_sofer = id_sofer;
    this->combustibil_necesar = combustibil_necesar;
}

Deplasari::Deplasari(const Deplasari &deplasari) {
    zi = deplasari.zi;
    luna = deplasari.luna;
    an = deplasari.an;
    ora = deplasari.ora;
    plecare = deplasari.plecare;
    destinatie = deplasari.destinatie;
    id_sofer = deplasari.id_sofer;
    combustibil_necesar = deplasari.combustibil_necesar;
}

Deplasari::Deplasari() {}

void Deplasari::setzi(unsigned int ziDeplasare) {
    this->zi = zi;
}

void Deplasari::setluna(unsigned int lunaDeplasare) {
    this->luna = luna;
}

void Deplasari::setan(unsigned int anDeplasare) {
    this->an = an;
}

void Deplasari::setora(unsigned int oraDeplasare) {
    this->ora = ora;
}

void Deplasari::setplecare(std::string plecareDeplasare) {
    this->plecare = plecare;
}

void Deplasari::setdestinatie(std::string destinatieDeplasare) {
    this->destinatie = destinatie;
}

void Deplasari::setidsofer(unsigned int idsoferDeplasare) {
    this->id_sofer = id_sofer;
}

void Deplasari::setCombustibilNecesar(unsigned int combustibilNecesarDeplasare) {
    this->combustibil_necesar = combustibil_necesar;
}

unsigned int Deplasari::getzi() {
    return this->zi;
}

unsigned int Deplasari::getluna() {
    return this->luna;
}

unsigned int Deplasari::getan() {
    return this->an;
}

unsigned int Deplasari::getora() {
    return this->ora;
}

std::string Deplasari::getplecare() {
    return this->plecare;
}

std::string Deplasari::getdestinatie() {
    return this->destinatie;
}

unsigned int Deplasari::getidsofer() {
    return this->id_sofer;
}

unsigned int Deplasari::getCombustibilNecesar() {
    return this->combustibil_necesar;
}


std::istream &operator>>(std::istream &citire, Vehicule &vehicul) {
    citire >> vehicul.model >> vehicul.capacitateCombustibil >> vehicul.greutateMaxima >> vehicul.categorie;
    return citire;
}

std::ostream &operator<<(std::ostream &afisare, Vehicule &vehicul) {
    afisare  << "ID Masina: " << vehicul.idMasina  << '\n' << "Model: " << vehicul.model << '\n' << "Capacitate rezervor: " << vehicul.capacitateCombustibil << '\n' << "Masa maxima: " << vehicul.greutateMaxima
            << '\n' << "Categorie: " << vehicul.categorie;
    return afisare;
}

Vehicule &Vehicule::operator=(Vehicule vehicul) {
    this->capacitateCombustibil = vehicul.capacitateCombustibil;
    return *this;
}

Vehicule::~Vehicule() {}

std::istream &operator>>(std::istream &citire, Autovehicule &autovehicul) {
    citire >> autovehicul.model >> autovehicul.capacitateCombustibil >> autovehicul.greutateMaxima >> autovehicul.tip
           >> autovehicul.categorie;
    return citire;
}

std::ostream &operator<<(std::ostream &afisare, Autovehicule &autovehicul) {
    afisare << "ID Masina: " << autovehicul.idMasina << '\n' << "Model: " << autovehicul.model << '\n'
            << "Capacitate rezervor: "
            << autovehicul.capacitateCombustibil << 'l' << '\n' << "Masa maxima: " << autovehicul.greutateMaxima << "kg"
            << '\n' << "Tip: " << autovehicul.tip << '\n' << "Categorie: "
            << autovehicul.categorie << '\n' << '\n';
    return afisare;
}

Autovehicule &Autovehicule::operator=(Autovehicule autovehicul) {
    this->capacitateCombustibil = autovehicul.capacitateCombustibil;
    return *this;
}

std::istream &operator>>(std::istream &citire, Autoutilitare &autoutilitara) {
    citire >> autoutilitara.model >> autoutilitara.capacitateCombustibil >> autoutilitara.greutateMaxima
           >> autoutilitara.idRemorca >> autoutilitara.categorie;
    return citire;
}

std::ostream &operator<<(std::ostream &afisare, Autoutilitare &autoutilitara) {
    afisare << "ID Masina: " << autoutilitara.idMasina << '\n' << "Model: " << autoutilitara.model << '\n'
            << "Capacitate rezervor: " <<
            autoutilitara.capacitateCombustibil << 'l' << '\n' << "Masa maxima: " << autoutilitara.greutateMaxima
            << "kg" << '\n' << "ID Remorca: " <<
            autoutilitara.idRemorca << '\n' << "Categorie: " << autoutilitara.categorie << '\n' << '\n';
    return afisare;
}

Autoutilitare &Autoutilitare::operator=(Autoutilitare autoutilitara) {
    this->capacitateCombustibil = autoutilitara.capacitateCombustibil;
    return *this;
}

std::istream &operator>>(std::istream &citire, Angajati &angajat) {
    citire >> angajat.nume >> angajat.prenume >> angajat.cnp >> angajat.codAngajat;
    return citire;
}

std::ostream &operator<<(std::ostream &afisare, Angajati &angajat) {
    afisare << angajat.nume << angajat.prenume << angajat.cnp << angajat.codAngajat;
    return afisare;
}

Angajati &Angajati::operator=(Angajati angajat) {
    this->codAngajat = angajat.codAngajat;
    return *this;
}

std::istream &operator>>(std::istream &citire, Soferi &sofer) {
    citire >> sofer.nume >> sofer.prenume >> sofer.cnp >> sofer.codAngajat >> sofer.idSofer >> sofer.categoriePermis;
    return citire;
}

std::ostream &operator<<(std::ostream &afisare, Soferi &sofer) {
    afisare << "Nume: " << sofer.nume << '\n' << "Prenume: " << sofer.prenume << '\n' << "CNP: " << sofer.cnp << '\n'
            << "Cod angajat: " <<
            sofer.codAngajat << '\n' << "ID Sofer: " << sofer.idSofer << '\n' << "Categorie permis: "
            << sofer.categoriePermis << '\n' << '\n';
    return afisare;
}

Soferi &Soferi::operator=(Soferi sofer) {
    this->categoriePermis = sofer.categoriePermis;
    return *this;
}

std::istream &operator>>(std::istream &citire, Administratie &lucrator) {
    citire >> lucrator.nume >> lucrator.prenume >> lucrator.cnp >> lucrator.codAngajat >> lucrator.functie;
    return citire;
}

std::ostream &operator<<(std::ostream &afisare, Administratie &lucrator) {
    afisare << "Nume: " << lucrator.nume << '\n' << "Prenume: " << lucrator.prenume << '\n' << "CNP: " << lucrator.cnp
            << '\n' << "Cod angajat: "
            << lucrator.codAngajat << '\n' << "Functie: " << lucrator.functie << '\n' << '\n';
    return afisare;
}

Administratie &Administratie::operator=(Administratie lucrator) {
    this->functie = lucrator.functie;
    return *this;
}

std::istream &operator>>(std::istream &citire, Deplasari &deplasare) {
    citire >> deplasare.zi >> deplasare.luna >> deplasare.an >> deplasare.ora >> deplasare.plecare
           >> deplasare.destinatie >> deplasare.id_sofer
           >> deplasare.combustibil_necesar;
    return citire;
}

std::ostream &operator<<(std::ostream &afisare, Deplasari &deplasare) {
    afisare << "Zi: " << deplasare.zi << '\n' << "Luna: " << deplasare.luna << '\n' << "An: " << deplasare.an << '\n'
            << "Ora: " << deplasare.ora << '\n' << "Plecare: " << deplasare.plecare << '\n' << "Destinatie: "
            << deplasare.destinatie << '\n' << "ID Sofer: " << deplasare.id_sofer <<
            '\n' << "Combustibil necesar: " << deplasare.combustibil_necesar << "l\n" << '\n';
    return afisare;
}

Deplasari &Deplasari::operator=(Deplasari deplasare) {
    this->combustibil_necesar = deplasare.combustibil_necesar;
    return *this;
}

int main() {

    int n;
    Deplasari cursa;
    Autovehicule autovehicul, *afisautovehicul;
    Autoutilitare autoutilitara, *afisautoutilitara;
    std::vector<Deplasari> curse;
    std::vector<Vehicule *> masini;

    Autovehicule vehicul1 = Autovehicule("Renault.Trafic", 80, 500, "camioneta", "B");
    Autovehicule vehicul2 = Autovehicule("Ford.Transit", 80, 500, "camioneta", "B");
    Autovehicule vehicul3 = Autovehicule("Volkswagen.Transporter", 80, 500, "locuri", "B");
    Autovehicule vehicul4 = Autovehicule("Volkswagen.Transporter", 80, 500, "camioneta", "B");
    /*Autovehicule vehicul5;
    std::cout << "Introduceti autovehicul:\n";
    std::cin >> vehicul5;*/

    Autoutilitare autoutilitara1 = Autoutilitare("Volkswagen.Crafter", 100, 1500, 1, "C");
    Autoutilitare autoutilitara2 = Autoutilitare("MAN.TGX", 1200, 18000, 2, "C");
    Autoutilitare autoutilitara3 = Autoutilitare("Mercedes.Actross", 1200, 20000, 3, "C");
    Autoutilitare autoutilitara4 = Autoutilitare("Volkswagen.Crafter", 100, 1500, 4, "C");
    /*Autoutilitare autoutilitara5;
    std::cout << "Introduceti autoutilitara:\n";
    std::cin >> autoutilitara5;*/

    Soferi sofer1 = Soferi("Catarama", "Ion", 5102015332157, 131, 1, "B");
    Soferi sofer2 = Soferi("Marian", "Anghel", 5125515630157, 132, 2, "C");
    Soferi sofer3 = Soferi("Iordache", "Mitrut", 50220463928573, 133, 3, "B");
    Soferi sofer4 = Soferi("Pavel", "Simon", 562075639157, 134, 4, "C");
    Soferi sofer5 = Soferi("Croitor", "Sebastian", 521015632759, 135, 5, "B");
    Soferi sofer6 = Soferi("Tibulca", "Alex", 506017488156, 136, 6, "B");
    Soferi sofer7 = Soferi("Salgau", "Tiberiu", 542018339110, 137, 7, "B");
    Soferi sofer8 = Soferi("Jitareanu", "Stefan", 578017336155, 138, 8, "C");
    Soferi sofer9 = Soferi("Arotartiei", "Emanuel", 502355371127, 139, 9, "C");
    /*Soferi sofer10;
    std::cout << "Introduceti sofer:\n";
    std::cin >> sofer10;*/

    Administratie lucrator1 = Administratie("Maftei", "Valentin", 5020123335312, 130, "Fondator");
    Administratie lucrator2 = Administratie("Clem", "Daria", 5020123335312, 131, "Co-Fondator");
    Administratie lucrator3 = Administratie("Ursaciuc", "Denis", 5035163885212, 132, "Manager");
    Administratie lucrator4 = Administratie("Brinzac", "Teodor", 5125126338310, 133, "Inginer");
    /*Administratie lucrator5;
    std::cout << "Introduceti lucrator:\n";
    std::cin >> lucrator5;*/

    Deplasari deplasare1 = Deplasari(20, 4, 2022, 8, "Bucuresti", "Suceava", 1, 37);
    Deplasari deplasare2 = Deplasari(21, 4, 2022, 9, "Bucuresti", "Iasi", 2, 34);
    Deplasari deplasare3 = Deplasari(22, 4, 2022, 7, "Bucuresti", "Galati", 3, 21);
    Deplasari deplasare4 = Deplasari(23, 4, 2022, 6, "Bucuresti", "Cluj", 4, 38);
    Deplasari deplasare5 = Deplasari(24, 4, 2022, 7, "Bucuresti", "Timisoara", 5, 46);
    Deplasari deplasare6 = Deplasari(25, 4, 2022, 8, "Bucuresti", "Arad", 6, 49);
    Deplasari deplasare7 = Deplasari(26, 4, 2022, 10, "Bucuresti", "Brasov", 7, 16);
    Deplasari deplasare8 = Deplasari(27, 4, 2022, 12, "Bucuresti", "Sibiu", 8, 15);
    Deplasari deplasare9 = Deplasari(28, 4, 2022, 10, "Bucuresti", "Suceava", 9, 37);


    int choice;
    bool dispozitiv = true;
    std::cout << " 0 - Inchide dispozitiv\n";
    std::cout << " 1 - Porneste dispozitiv\n";
    std::cout << "Incarcare dispozitiv firma...\n" << '\n';
    while (dispozitiv != false) {

        std::cout << "Introduceti comanda: \n";
        std::cin >> choice;

        switch (choice) {
            case 0:
                std::cout << "Inchidere dispoizitiv...\n";
                dispozitiv = false;
                break;

            case 1:
                std::cout << "Pornire dispozitiv...'\n";
                std::cout << " 2 - Introduceti autovehicul:\n";
                std::cout << " 3 - Autovehicule:\n";
                std::cout << " 4 - Introduceti autoutilitara:\n";
                std::cout << " 5 - Autoutilitare:\n";
                std::cout << " 6 - Soferi:\n";
                std::cout << " 7 - Administratie:\n";
                std::cout << " 8 - Introduceti curse:\n";
                std::cout << " 9 - Curse:\n";
                break;

            case 2:
                std::cout << "Introduceti autovehicul\n";
                try {
                    std::cin >> autovehicul;
                    Vehicule *pointveh = dynamic_cast<Vehicule *>(&autovehicul);
                    if (pointveh == nullptr)                                                      /// Verificam daca obiectul este de tipul Autovehicule
                        throw std::exception();
                }
                catch (std::exception& exauto)
                {
                    std::cout << "EROARE LA INTRODUCERE DATELOR\n";
                }
                masini.push_back(&autovehicul);
                std::cout << "A fost introdus un autovehicul.\n";
                break;

            case 3:
                std::cout << "AUTOVEHICULE\n" << '\n';
                std::cout << vehicul1;
                std::cout << vehicul2;
                std::cout << vehicul3;
                std::cout << vehicul4;
                for (int i = 0; i < masini.size(); i++) {
                    afisautovehicul = (Autovehicule *) &masini[i];
                    std::cout << autovehicul;
                }
                break;

            case 4:
                std::cout << "Introduceti autoutilitara\n";
                try {
                    std::cin >> autoutilitara;
                    Vehicule *pointcam = dynamic_cast<Vehicule *>(&autoutilitara);
                    if (pointcam == nullptr)                                            ///Verificam daca obiectul este de tipul Autoutilitare
                        throw std::exception();
                }
                catch (std::exception& exauto2)
                {
                    std::cout << "EROARE LA INTRODUCERE DATELOR\n";
                }
                masini.push_back(&autoutilitara);
                std::cout << "A fost introdusa o autoutilitara.\n";
                break;

            case 5:
                std::cout << "AUTOUTILITARE\n" << '\n';
                std::cout << autoutilitara1;
                std::cout << autoutilitara2;
                std::cout << autoutilitara3;
                std::cout << autoutilitara4;
                for (int i = 0; i < masini.size(); i++) {
                    afisautoutilitara = (Autoutilitare *) &masini[i];
                    std::cout << autoutilitara;
                }
                break;

            case 6:
                std::cout << "SOFERI\n" << '\n';
                std::cout << sofer1;
                std::cout << sofer2;
                std::cout << sofer3;
                std::cout << sofer4;
                std::cout << sofer5;
                std::cout << sofer6;
                std::cout << sofer7;
                std::cout << sofer8;
                std::cout << sofer9;
                break;

            case 7:
                std::cout << "ADMINISTRATIE\n" << '\n';
                std::cout << lucrator1;
                std::cout << lucrator2;
                std::cout << lucrator3;
                std::cout << lucrator4;
                break;

            case 8:
                std::cout << "Introduceti numarul de curse care vor urma sa fie operate\n";
                try {
                    std::cin >> n;
                    if (n < 1 || n > 10)
                        throw std::exception();
                }
                catch (std::exception& ex)
                {
                    std::cout << "!!!ERROR!!! - Numarul de curse introdus este prea mare!\n\n";
                }
                std::cout << "Introduceti o cursa de forma: zi, luna, an, ora, plecare, destinatie, id_sofer, combustibil necesar\n";
                for (int i = 0; i < n; i++) {
                    std::cin >> cursa;
                    curse.push_back(cursa);
                }
                if (n == 1)
                    std::cout << "A fost introdusa o singura cursa.\n";
                else if (n > 1)
                    std::cout << "Au fost introduse " << n << " de curse.\n";
                break;

            case 9:
                std::cout << "CURSE'\n" << '\n';
                std::cout << deplasare1;
                std::cout << deplasare2;
                std::cout << deplasare3;
                std::cout << deplasare4;
                std::cout << deplasare5;
                std::cout << deplasare6;
                std::cout << deplasare7;
                std::cout << deplasare8;
                std::cout << deplasare9;
                for (int i = 0; i < curse.size(); i++)
                {
                    std::cout << curse[i];
                }
                break;

            default:
                std::cout << "Comanda introdusa nu exista \n";
                std::cin >> choice;
                break;
        }
    }

    return 0;
}
