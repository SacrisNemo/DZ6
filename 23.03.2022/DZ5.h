#ifndef DZ5_H
#define DZ5_H
#include <iostream>


class massiv
{
private:

	int n = 0;
	int m = 0;
	double** arr = 0;

public:

	void set_m(int);
	int get_m();
	void set_n(int);
	int get_n();
	void memory();
	void print();
	void data();
	void del();
	void swap();
};

#endif // !DZ5_H

