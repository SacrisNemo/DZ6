#include "Compare.h"

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(nullptr));
	int n;
	std::cout << "Длина массива";
	std::cin >> n;
	std::cout << "\n";
	auto arr_i = new int [n];
	auto arr_d = new double [n];
	auto arr_c = new Complex*[n];
	int re, im = 0;
	for (int i = 0; i < n; i++)
	{
		arr_i[i] = rand() % 15;
		arr_d[i] = (static_cast<double>(rand() % 10) + static_cast<double>((rand() % 10)/10));
		std::cin >> re >> im;
		arr_c[i]->set(re,im);
	}
	sortP(arr_i, n);
	sortP(arr_d,n);
	sortVs(arr_i, n);
	sortVs(arr_d, n);
	sortVi(arr_i, n);
	sortVi(arr_d, n);

	delete [] arr_i;
	delete [] arr_d;
	for (int i =0; i < n; i++)
	{
		delete arr_c[i];
	}
	delete[] arr_c;
}
