#include <iostream>
#include "romano.hpp"

int main()
{
	romanos lista;
	std::string numero_romano; 

	std::cin >> numero_romano;
	std::cout << lista.retorna_numero(numero_romano) <<std::endl;

	return 0;
}