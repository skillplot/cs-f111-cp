#include "books_catalog.h"

void addBookToCatalog(BOOK book1)
{	
    booksCatalog[count]=book1;
    count++;
    return;
    
}

void printBookCatalog()
{
    for(int i=0;i<count;i++)
    {
    	printBook(booksCatalog[i]);
    }

    return;
}

void sortBookCatalogOnID()
{
	BOOK temp;
    for(int i=0;i<count;i++)
    {
        for(int j=i+1;j<count;j++)
        {
            if(booksCatalog[i].ID > booksCatalog[j].ID )
            {
                temp=booksCatalog[i];
                booksCatalog[i]=booksCatalog[j];
                booksCatalog[j]=temp;
            }
        }
    }
    return;
}