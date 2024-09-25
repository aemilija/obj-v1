#include "header.h"

struct Stud { //sukuriama studento struktura, kurioje saugoma vardas, pavarde, namu darbu (2) ir egzamino pazymiai
    string vardas;
    string pavarde;
    vector<int> nd; //nd saugome vector tipo konteineryje
    int egz;
};

double ndVidurkis(const Stud &student);
double ndMediana(const Stud &student);
double galutinis(const Stud &student, char pasirinkimas);
void ivestiDuomenisRanka(vector<Stud> &student, int ndSkaicius);
void atsitiktiniaiPazymiai(vector<Stud> &student, double ndSkaicius);
void nuskaitytiFaila(vector<Stud> &student);
void spausdinti(vector<Stud> &student, char pasirinkimas);
void valymas(Stud & student);