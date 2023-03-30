#include "Book.h"

// Konstruktor bezparametrowy
Book::Book()
{
	this->author = "";
	this->title = "";
}

// Konstruktor l-referencja
Book::Book(const std::string &author, const std::string &title)
{
	this->author = author;
	this->title = title;
}

// Konstruktor r-referencja
Book::Book(std::string &&author, std::string &&title)
{
	this->author = move(author);
	this->title = move(title);
}

// Gettery
std::string Book::GetAuthor()
{
	return author;
}
std::string Book::GetTitle()
{
	return title;
}

// Settery z l-referencją
void Book::SetAuthor(const std::string &author)
{
	this->author = author;
}
void Book::SetTitle(const std::string &title)
{
	this->title = title;
}

// Settery z r-referencją
void Book::SetAuthor(std::string &&author)
{
	this->author = std::move(author);
}
void Book::SetTitle(std::string &&title)
{
	this->title = std::move(title);
}

// Konstruktor kopiujący
Book::Book(const Book &other)
	: title(other.title), author(other.author)
{
}

// Konstruktor przenoszący
Book::Book(Book &&other)
{
	title = move(other.title);
	author = move(other.author);
}

// Kopiujący operator przypisania
Book &Book::operator=(const Book &right)
{
	title = right.title;
	author = right.author;
	return *this;
}

// Przenoszący operator przypisania
Book &Book::operator=(Book &&right)
{
	std::swap(title, right.title);
	std::swap(author, right.author);
	return *this;
}