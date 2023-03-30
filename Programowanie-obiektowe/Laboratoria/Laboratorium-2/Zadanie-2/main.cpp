#include <iostream>
#include <string>
#include "Book.h"
#include "Book.cpp"
#include "Library.h"
#include "Library.cpp"

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

// Opeerator << wypisywania na strumień
std::ostream &operator<<(std::ostream &out, Library &library)
{
	out << "Library:{" << std::endl;
	for (std::size_t i = 0; i < library.GetSize(); i++)
	{
		out << library[i];
	}
	out << "}" << std::endl;

	return out;
}

int main()
{
	Library e;
	cout << "e: " << e << endl;

	Library l1 = {{"Keiichi Arawi", "Nichijou"},
				  {"Carlo Zen", "Youjo Senki"},
				  {"Hajime Isayama", "Shingeki no Kyojin"}};
	cout << "l1: " << l1 << endl;

	Library l2(2);
	cout << "l2: " << l2 << endl;

	l2[0] = {"Yoshiyuki Sadamoto", "Shin Seiki Evangelion"};
	l2[1] = {"Tatsuki Fujimoto", "Chainsaw Man"};
	cout << "l2: " << l2 << endl;

	e = std::move(l2);
	cout << "e: " << e << " l2: " << l2 << endl;

	l1[0] = std::move(e[1]);
	cout << "l1: " << l1 << " e: " << e << endl;

	return 0;
}