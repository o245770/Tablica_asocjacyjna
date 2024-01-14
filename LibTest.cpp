#include "Book.h"													
#include "Map.h"													
#include <iostream>

typedef string Title; 											
typedef Map<Title, Book> Library; 			

using namespace std;

void addBooks(Library& lib);
void modifyBooks(Library& lib);

int main() {
	Library lib;
	addBooks(lib);

	Library newLib = lib;									
	newLib.add("Kordian", Book("Juliusz Slowacki", "dramat", 123, true));	
	modifyBooks(newLib);

	cout << "Original library:" << endl << lib << endl;
	cout << "Modified library:" << endl << newLib << endl;

	lib = newLib;												

	cout << "library after the assignment:" << endl << lib << endl;
};

void addBooks(Library& lib) {
	lib.add("Lalka", Book("Boleslaw Prus", "powiesc", 680, true)); 	
	lib.add("Dziady czesc III", Book("Adam Mickiewicz", "dramat", 154, false));		
}

void modifyBooks(Library& lib) {
	Book* book_ptr;

	book_ptr = lib.find("Lalka");								
	book_ptr->available = false;								
	
	book_ptr = lib.find("Kordian");								
	book_ptr->pages = 130;											
}
