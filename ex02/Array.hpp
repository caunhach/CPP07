#ifndef ARRAY_HPP
# define ARRAY_HPP

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define RESET   "\033[0m"

# include <iostream>
# include <exception>

template<typename T>
class Array
{
	private:
		T				*_array;
		unsigned int	_size;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &src);
		~Array();

		Array	&operator=(const Array &src);
		T		&operator[](unsigned int i);
		T const	&operator[](unsigned int i) const;

		unsigned int	size() const;

		class OutOfBoundsException:	public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#include "Array.tpp"

#endif