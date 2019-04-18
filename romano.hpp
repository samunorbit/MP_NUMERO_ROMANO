#include <iostream>
#include <vector>

// a classe romanos ao ser inicializada gera uma lista de todos os numeros romanos
// a funcao retorna_numero procura na lista uma string e retorna o valor correspondete do numero
// caso nao se encontre na lista a string nao eh um numero romano valido e a funcao retorna -1 

class romanos
{
private:
	std::string numero_romano;
	std::vector<std::string> v;

	std::string m[4]  = {"","M","MM","MMM"};
	std::string c[10] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    std::string d[10] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
	std::string u[10] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};

public:

	romanos()
	{
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				for (int k = 0; k < 10; k++)
					{
						for (int l = 0; l < 10; l++)
							{
								numero_romano = m[i]+ c[j] + d[k] + u[l];
								v.push_back(numero_romano);
							}	
					}	
			}
		}
	}

	int retorna_numero(std::string romano)
	{
		for(int i=0;i<=3000;i++)
		{
			if(romano == v[i])
			{
				return i;
			}
		}
		return -1;
	}	
};
