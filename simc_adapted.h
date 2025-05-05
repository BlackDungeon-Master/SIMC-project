
#ifndef SIMC_H
#define SIMC_H

#include <iostream>
#include <fstream>
using namespace std;

// Отключаем ввод с консоли
// extern ifstream input;
extern ofstream output;
extern ofstream outfile;

// Типы и прототипы функций (заглушки для совместимости)
typedef char alfa[20];
typedef struct facility* pfacility;
typedef struct listf* plistf;
typedef struct listt* plistt;

void initlist(int);
void newflist(plistf&);
void newfac(pfacility&, alfa);
void newuserlt(plistt&, alfa);
void initcreate(int, double);
void plan();
extern int sysevent;
double _clock();
void create(double);
void infac(pfacility&);
void delayt(double);
void outfac(pfacility&);
void destroy();
void printall();

#endif // SIMC_H
