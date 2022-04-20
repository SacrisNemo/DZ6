#include "Compare.h"

void sortP(double* a,int size)
{
	int temp;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

void sortP(Complex* a, int size)
{
	auto temp = new Complex;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (a[j].mod() > a[j + 1].mod())
			{
				temp->re = a[j].re;
				temp->im = a[j].im;
				a[j] = a[j + 1];
				a[j + 1].re = temp->re;
				a[j + 1].im = temp->im;
			}
		}
	}
}

void sortP(int* a, int size)
{
	int temp;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

void sortVi(double* a, int size)
{
	int min = 0;
	int temp = 0;
	for (int i = 0; i < size; i++)
	{
		min = i;
		for (int j = i + 1; j < size; j++)
		{
			if (a[j] < a[min])
			{
				min = j;
			}
			if (i != min)
			{
				temp = a[j];
				a[j] = a[min];
				a[min] = a[j];
			}
		}
	}
}

void sortVi(int* a, int size)
{
	int min = 0;
	int temp = 0;
	for (int i = 0; i < size; i++)
	{
		min = i;
		for (int j = i + 1; j < size; j++)
		{
			if (a[j] < a[min])
			{
				min = j;
			}
			if (i != min)
			{
				temp = a[i];
				a[i] = a[min];
				a[min] = a[i];
			}
		}
	}
}

void sortVi(Complex* a, int size)
{
	int min = 0;
	auto temp = new Complex;
	for (int i = 0; i < size; i++)
	{
		min = i;
		for (int j = i + 1; j < size; j++)
		{
			if (a[j].mod() < a[min].mod())
			{
				min = j;
			}
			if (i != min)
			{
				temp->re = a[j].re;
				temp->im = a[j].im;
				a[j] = a[j + 1];
				a[j + 1].re = temp->re;
				a[j + 1].im = temp->im;
			}
		}
	}
}

void sortVs(double* a, int size)
{
	int temp = 0;
	for (int i = 1; i < size; i++)
	{
		for (int j = i; j > 0 && a[j-1] > a[j]; j--)
		{
			temp = a[j - 1];
			a[j - 1] = a[j];
			a[j] = temp;
		}
	}
}

void sortVs(int* a, int size)
{
	int temp = 0;
	for (int i = 1; i < size; i++)
	{
		for (int j = i; j > 0 && a[j - 1] > a[j]; j--)
		{
			temp = a[j - 1];
			a[j - 1] = a[j];
			a[j] = temp;
		}
	}
}

void sortVs(Complex* a, int size)
{
	auto temp = new Complex;
	for (int i = 1; i < size; i++)
	{
		for (int j = i; j > 0 && a[j - 1].mod() > a[j].mod(); j--)
		{
			temp->re = a[j].re;
			temp->im = a[j].im;
			a[j] = a[j + 1];
			a[j + 1].re = temp->re;
			a[j + 1].im = temp->im;
		}
	}
}


Complex::Complex()
{
	this->re = 0;
	this->im = 0;
}

Complex::Complex(double x, double y)
{
	this->re = x;
	this->im = y;
}

Complex::Complex(int x, int y)
{
	this->re = x;
	this->im = y;
}

void Complex::set(double r, double i)
{
	re = r;
	im = i;
}

void Complex::set(int r, int i)
{
	re = r;
	im = i;
}

Complex Complex::sum(Complex n1)
{
	return Complex{ n1.re + this->re,n1.im + this->im };
}

Complex Complex::razn(Complex n1)
{
	return Complex{ this->re - n1.re, this->im - n1.im };
}

Complex Complex::umn(Complex n1)
{
	return Complex{ this->re * n1.re - this->im * n1.im, this->re * n1.im + this->im * n1.re };
}

void Complex::del(Complex n1)
{
	std::cout << (this->re * n1.re + this->im * n1.im) / (n1.re * n1.re + n1.im * n1.im) << " i" << (n1.re * this->im - this->re * n1.im);
}

void Complex::print()
{
	std::cout << this->re << " +i" << this->im;
}

double Complex::mod()
{
	return sqrt(this->re * this->re + this->im * this->im);
}

bool Complex::compare(Complex n1)
{
	if (this->mod() > n1.mod()) return true;
	else return false;
}

Complex::~Complex()
{
}
