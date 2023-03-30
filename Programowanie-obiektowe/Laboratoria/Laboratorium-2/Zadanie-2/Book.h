#pragma once
#include <iostream>
#include <string>

class Book
{
private:
	std::string author, title;

public:
	// Konstruktor bezparametrowy
	Book();

	// Konstruktor l-referencja
	Book(const std::string &author, const std::string &title);

	// Konstruktor r-referencja
	Book(std::string &&author, std::string &&title);

	// Gettery
	std::string GetAuthor();
	std::string GetTitle();

	// Settery z l-referencją
	void SetAuthor(const std::string &author);
	void SetTitle(const std::string &title);

	// Settery z r-referencją
	void SetAuthor(std::string &&author);
	void SetTitle(std::string &&title);

	// Konstruktor kopiujący
	Book(const Book &other);

	// Konstruktor przenoszący
	Book(Book &&other);

	// Kopiujący operator przypisania
	Book &operator=(const Book &right);

	// Przenoszący operator przypisania
	Book &operator=(Book &&right);
};