
#ifndef __BOOK_H__
#define __BOOK_H__

#include <iostream>
#include <string>

using namespace std;

class Book
{
public:
	string title;
	string author;
	string genre;
	unsigned short int pages;
	bool available;
	
	Book (string a, string g, unsigned short int p, bool av) : author(a), genre(g), pages(p), available(av) {};
	
	friend ostream& operator << (ostream& stream, const Book& b) 
	{
		stream << b.author<<", "<<b.genre<<", "<< b.pages<< " pages, ";
		if(b.available==true) stream<<"available";
		else stream<<"unavailable";
		return stream;
	}
};

#endif
