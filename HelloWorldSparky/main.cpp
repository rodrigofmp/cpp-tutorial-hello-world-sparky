#include <iostream>

#include "entity.h"
#include "header.h"
#include "player.h"

#define DEBUG 1;

#if DEBUG
#define LOG(x) std::cout << x << std::endl
#else
#define LOG(x) 
#endif

void incrementar(int *valor)
{
	(*valor)++;	
}

void incrementarPorReferencia(int& valor)
{
	valor++;
}

int somar(const int& a, const int& b)
{
	return a + b;
}

struct Vector3f
{
	float x, y, z;

	void metodo() 
	{

	}
};

void printEntity(const Entity& entity)
{
	LOG("Entity:");
	LOG(entity.getX());
	LOG(entity.getY());
}

int main(int argc, char *args[])
{
	// Os sinais << são similares a uma passagem de parâmetro para uma função.
	//std::cout << "Hello World!" << std::endl;
	print();
	LOG("Teste");

	// Tipos básicos

	// Type                 Size(bytes)         Range
	// 											Minimum         Maximum
	// char					1                   -128            127
	// unsigned char		1                   0	            255
	// signed char			1                   -128            127
	// int   				4                   -2.147.483.647  2.147.483.647
	// signed int			4                   -2.147.483.647	2.147.483.647
	// unsigned int			4                   0	            4.294.967.295
	// short int			2                   -32.768			32.767
	// signed short int		2                   -32.768			32.767
	// unsigned short int	2                   0	            65.535
	// float	            4                   1.8E-38	        3.4E+38
	// double	            8                   2.2E-308	    1.8E+308
	// long double	        8                   2.2E-308	    1.8E+308
	// bool	                1                   True / False	True / False
	// wchar_t	            2 or 4              0	            65.535

	// 2 bytes -> 32 bits
	// 4 bytes -> 64 bits

	long long a = 1;
	std::cout << sizeof(a) << std::endl;
	std::cout << a << std::endl;

	
	// Os argumentos do parâmetro começam na posição 1, porque na posição 0 vem o caminho para o executável.
	std::cout << args[0] << std::endl;

	int b = 5;
	int* p = &b;
	LOG(p); // endereço de memória
	LOG(*p); // valor

	incrementar(&b);
	incrementarPorReferencia(b);

	LOG(b);

	LOG(somar(a, b));

	// Objeto na stack só dura a execução da função.
	// Depois disso, a memória é liberada.

	//Entity e; // stack objeto
	Entity e(5, 8); // stack objeto
	LOG(e.getX());

	// Objeto na heap precisa ser gerenciado

	
	Entity* player = new Entity(11, 22); // heap objeto
	LOG(player->getX());
	LOG((*player).getY());
	delete player;

	printEntity(e);


	int array[50]; // 50 posições
	LOG(sizeof(array) / sizeof(int)); // 4 bytes x 50 caracteres / 4

	// stack
	int arrayB[5] =
	{
		2, 3, 4, 5, 6
	};

	// heap
	int *arrayC = new int[5];

	delete[] arrayC;

	LOG(Entity::a);

	LOG("PLayer");

	Player p1;
	printEntity(p1);

	//system("PAUSE"); 
	std::cin.get();

	return 0;
}

