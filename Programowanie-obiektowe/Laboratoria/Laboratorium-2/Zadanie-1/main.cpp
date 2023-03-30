#include <iostream>
#include <string>
#include "Book.h"
#include "Book.cpp"

using namespace std;

// Operator << wypisywania na strumień
std::ostream &operator<<(std::ostream &out, Book &book)
{
	out << "Book:(";
	out << book.GetAuthor();
	out << ", ";
	out << book.GetTitle();
	out << ")" << std::endl;

	return out;
}

int main()
{
	string a = "J.R.R. Tolkien", t = "The Hobbit";

	Book e;
	cout << "e: " << e << endl;

	Book b1 = {a, t};
	cout << "b1: " << b1 << endl;

	Book b2 = {"Arthur Conan Doyle", "A Study in Scarlet"};
	cout << "b2: " << b2 << endl;

	Book b3 = b1;
	cout << "b3: " << b3 << " b1: " << b1 << endl;

	e = std::move(b2);
	cout << "e: " << e << " b2:" << b2 << endl;

	e.SetAuthor("Boleslaw Prus");
	cout << "e: " << e << endl;

	e.SetTitle("The Doll");
	cout << "e: " << e << endl;

	return 0;
}
