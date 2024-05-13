#ifndef ITER_HPP
# define ITER_HPP

# include<iostream>

template<typename T_array>
void iter(T_array *array, size_t length, void (*function)(T_array &))
{
	for (size_t i = 0; i < length; i++)
		function(array[i]);
}

#endif