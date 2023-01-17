#include "book_def.h"
BOOK newBook(int ID, SHELF shelfNum, float price)
{
	BOOK book = {ID, shelfNum, price};
    // book.resalePrice = price;
	// BOOK book;
    // book.ID=ID;
    // book.shelfNum=shelfNum;
    // book.price=price;
    return book;
}

void printBook(BOOK book1)
{
   printf("The Details of the Book are : \n");
   printf("ID of the book : %i\n",book1.ID);
   printf("The Shelf Number of the Book : %i\n",book1.shelfNum);
   printf("Price of the Book : %f\n",book1.price);
   printf("=----------------------------------=\n");
   return;
}