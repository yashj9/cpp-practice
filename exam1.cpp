//practice at room program
//book class with Title, Author, Publisher, ISBN number. all data private, all members dynamically allocated, give proper read data and get data membr functions, use Sort_Books membr function for sorting books according to titles in descending.

#include<iostream>

using namespace std;

int my_strcmp (const char *st1, const char *st2) {
	int i;
	for ( i = 0 ; st1[i] ; i++ )
	{
		if( st1[i] != st2[i] )
		{
			break;
		}
	}
	if ( st1[i] < st2[i] )
	{
		return -1;
	}
	else if ( st1[i] > st2[i] )
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void my_strcpy (char *st1, const char *st2) {
	int i;
	for ( i = 0 ; st2[i] ; i++ )
	{
		st1[i] = st2[i];
	}
	st1[i] = st2[i];
}

class Book {
	char *Title;
	char *Author;
	char *Publisher;
	int *ISBN_number;
	public:
		Book () {
		Title = new 
