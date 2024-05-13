template <typename T>
Array<T>::Array(): _array(NULL), _size(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n): _array(new T[n]), _size(n)
{
}

template <typename T>
Array<T>::Array(const Array &src): _array(new T[src._size]), _size(src._size)
{
	for (unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = src._array[i];
}

template <typename T>
Array<T>::~Array()
{
	delete [] this->_array;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &src)
{
	if (this != &src)
	{
		delete [] this->_array;
		this->_size = src._size;
		this->_array = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = src._array[i];
	}
	return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int i)
{
	if (i >= this->_size)
		throw OutOfBoundsException();
	return (this->_array[i]);
}

template <typename T>
T const &Array<T>::operator[](unsigned int i) const
{
	if (i >= this->_size)
		throw OutOfBoundsException();
	return (this->_array[i]);
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (this->_size);
}

template <typename T>
const char *Array<T>::OutOfBoundsException::what() const throw()
{
	return ("Index is out of bounds");
}