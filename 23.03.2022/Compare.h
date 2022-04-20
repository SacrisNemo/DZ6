#ifndef COMPARE_H
#define COMPARE_H

#include "DZ5.h"
#include <iostream>

struct Complex
{
	double re;
	double im;
	Complex();
	Complex(double, double);
	Complex(int, int);
	void set(double, double);
	void set(int, int);
	Complex sum(Complex n1);
	Complex razn(Complex n1);
	Complex umn(Complex n1);
	void del(Complex n1);
	void print();
	double mod();
	bool compare(Complex n1);
	~Complex();
};

bool comp(Complex, Complex);
void sortP(double*, int);
void sortP(Complex*, int);
void sortP(int*, int);
void sortVi(double*, int);
void sortVi(int*, int);
void sortVi(Complex*, int);
void sortVs(double*, int);
void sortVs(int*, int);
void sortVs(Complex*, int);
#endif //COMPARE_H
