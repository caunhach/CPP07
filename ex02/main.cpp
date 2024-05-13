#include "Array.hpp"
#include <iostream>

int	main(void)
{
	Array<int>	empty;
	Array<char>	_arr_char(5);

	std::cout << GREEN << "<< Int Array: empty >>" << RESET << std::endl;
	std::cout << "size: " << empty.size() << std::endl;
	try {
		std::cout << "empty[0]: " << empty[0] << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << GREEN << "<< Char Array: _arr_char[5] >>" << RESET << std::endl;
	std::cout << "size: " << _arr_char.size() << std::endl;
	for (int i = 0; i < 6; i++)
	{
		try {
			_arr_char[i] = 'a' + i;
			std::cout << "_arr_char[" << i << "]: " << _arr_char[i] << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}

	const Array<char> _arr_char_copy(_arr_char);

	std::cout << GREEN << "<< const Char Array(copy): _arr_char_copy(_arr_char) >>" << RESET << std::endl;
	std::cout << "size: " << _arr_char_copy.size() << std::endl;
	for (int i = 0; i < 6; i++)
	{
		try {
			_arr_char[i] = 'A' + i;
			std::cout << "_arr_char[" << i << "]: " << _arr_char[i] << std::endl;
			std::cout << "_arr_char_copy[" << i << "]: " << _arr_char_copy[i] << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}

	Array<std::string>	_arr_str(5);

	for (int i = 0; i < 5; i++)
	{
		_arr_str[i] = "String ";
		_arr_str[i] += _arr_char[i];
	}
	for (int i = 0; i < 6; i++)
	{
		try {
			std::string str = _arr_str[i];
			std::cout << "_arr_str[" << i << "]: " << _arr_str[i] << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
}