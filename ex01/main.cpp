#include "iter.hpp"

void	print(int &i)
{
	std::cout << i << " ";
}

void	increment(int &i)
{
	i++;
}

int	main(void)
{
	int	array[5] = {0, 1, 2, 3, 4};

	std::cout << "print before: ";
	iter(array, 5, print);
	std::cout << std::endl;
	iter(array, 5, increment);
	std::cout << "print after: ";
	iter(array, 5, print);
	std::cout << std::endl;

	return 0;
}