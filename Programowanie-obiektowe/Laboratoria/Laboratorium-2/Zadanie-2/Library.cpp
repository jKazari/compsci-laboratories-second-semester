#include "Library.h"

// Konstruktor bezparametrowy
Library::Library()
{
	book = nullptr;
	bookAmount = 0;
}

// Konstruktor z listą inicjalizacyjną
Library::Library(std::initializer_list<Book> list)
	: bookAmount{list.size()}, book{new Book[list.size()]}
{
	std::size_t i = 0;
	for (Book v : list)
	{
		book[i] = v;
		i++;
	}
}

// Konstruktor kopiujący
Library::Library(const Library &orig)
	: bookAmount{orig.bookAmount}, book{new Book[orig.bookAmount]}
{
	for (std::size_t i = 0; i < bookAmount; i++)
	{
		book[i] = orig.book[i];
	}
}

// Konstruktor przenoszący
Library::Library(Library &&orig)
{
	bookAmount = orig.bookAmount;
	book = orig.book;

	orig.bookAmount = 0;
	orig.book = nullptr;
}

// Kopiujący operator przypisania
Library &Library::operator=(const Library &right)
{
	Library tmp = right;
	std::swap(book, tmp.book);
	std::swap(bookAmount, tmp.bookAmount);
	return *this;
}

// Przenoszący operator przypisania
Library &Library::operator=(Library &&right)
{
	std::swap(bookAmount, right.bookAmount);
	std::swap(book, right.book);
	return *this;
}

// Operator []
Book &Library::operator[](std::size_t index)
{
	return book[index];
}

// Wersja const operatora []
const Book &Library::operator[](std::size_t index) const
{
	return book[index];
}

// Konstruktor z wielkością obiektu
Library::Library(std::size_t bookAmount)
	: bookAmount{bookAmount}, book{new Book[bookAmount]}
{
}

// Metoda GetSize
std::size_t Library::GetSize() const
{
	return bookAmount;
}

// Destruktor
Library::~Library()
{
	if (book != nullptr)
	{
		delete[] book;
	}
}