#pragma once
#include <iostream>
#include <string>
#include <initializer_list>
#include "Book.h"

class Library
{
	Book *book;
	std::size_t bookAmount;

public:
	// Konstruktor bezparametrowy
	Library();

	// Konstruktor z listą inicjalizacyjną
	Library(std::initializer_list<Book> list);

	// Konstruktor kopiujący
	Library(const Library &orig);

	// Konstruktor przenoszący
	Library(Library &&orig);

	// Kopiujący operator przypisania
	Library &operator=(const Library &right);

	// Przenoszący operator przypisania
	Library &operator=(Library &&right);

	// Operator []
	Book &operator[](std::size_t index);

	// Wersja const operatora []
	const Book &operator[](std::size_t index) const;

	// Konstruktor z wielkością obiektu
	Library(std::size_t bookAmount);

	// Metoda GetSize
	std::size_t GetSize() const;

	// Destruktor
	~Library();
};