//this is the header file for my ownstring datatype mini project

#include<iostream>

using namespace std;

class my_string;

class my_string {
	char *str;
	int size;
	public:
		my_string () {
			str = 0;	
			size = 0;
		}
		my_string (const char *in) {
			int i;
			for(size = 0; in[size] ; size++);
			str = new char[size+1];
			for(i = 0; i < size + 1 ; i++)
			{
				str[i] = in[i] ;
			}
		}
		my_string (const my_string &in) {
			int i;
			str = new char[in.size+1];
			for(i = 0; i < in.size + 1 ; i++)
			{
				str[i] = in.str[i] ;
			}
			size = in.size;
		}
		my_string& operator = (const my_string &in) {
			int i;
			delete [] str;
			str = new char[in.size+1];
			for(i = 0; i < in.size + 1 ; i++)
			{
				str[i] = in.str[i] ;
			}
			size = in.size;
 			return *this;
		}
		~my_string () {
			delete [] str;
		}
		void get_str(void) {
			cout << str << endl;
		}
		void get_length(void) {
			cout << size << endl;
		}
		void get_data(void) {
			cout << str << endl << size << endl;
		}
		int length(void) {
			return size;
		}
		my_string& operator = (const char *ch) {
			int i, len;
			for( len = 0 ; ch[len] ; len++ );
			delete [] str;
			str = new char[len+1];
			for(i = 0; i < len + 1 ; i++)
			{
				str[i] = ch[i] ;
			}
			size = len;
 			return *this;
		}
		my_string& operator = (const string st) {
			int i;
			delete [] str;
			str = new char[st.size() + 1];
			for(i = 0; i < (st.length() + 1) ; i++)
			{
				str[i] = st[i] ;
			}
			size = st.length();
 			return *this;
		}
		bool operator == (const my_string &st) {
			int i;
			if ( size != st.size)
			{
				return false;
			}
			for( i = 0 ; str[i] ; i++ )
			{
				if ( str[i] != st.str[i] )
				{
					break;
				}
			}
			if ( str[i] == st.str[i] )
			{
				return true;
			}
			else
			{
				return false;
			}
			
		}
		bool operator == (const char *ch) {
			int i;
			for( i = 0 ; str[i] ; i++ )
			{
				if ( str[i] != ch[i] )
				{
					break;
				}
			}
			if ( str[i] == ch[i] )
			{
				return true;
			}
			else
			{
				return false;
			}
			
		}
		my_string operator + (const my_string &st) {
			my_string ret;
			int i, tlen, len;
			tlen = size + st.size;
			ret.str = new char[tlen+1] ;
			for ( i = 0 ; str[i] ; i++)
			{
				ret.str[i] = str[i] ;
			}
			for ( len = 0 ; st.str[len] ; len++, i++ )
			{
				ret.str[i] = st.str[len] ;
			}
			ret.str[i] = st.str[len] ;
			ret.size = tlen;
			return ret;
		}
		my_string operator + (const char *ch) {
			my_string ret;
			int i, tlen, len;
			for ( len = 0 ; ch[len] ; len++ );
			tlen = size + len;
			ret.str = new char[tlen+1] ;
			for ( i = 0 ; str[i] ; i++)
			{
				ret.str[i] = str[i] ;
			}
			for ( len = 0 ; ch[len] ; len++, i++ )
			{
				ret.str[i] = ch[len] ;
			}
			ret.str[i] = ch[len] ;
			ret.size = tlen;
			return ret;
		}
		char& operator [] (int index) {
			if( str == 0 )
			{
				cout << "not valid address available" << endl;
				return str[0];
			}
			return str[index];
		} 
		my_string operator () (const my_string &st) {
			int i;
			delete [] str;
			str = new char[st.size+1];
			for( i = 0 ; i < st.size + 1 ; i++ ) 
			{
				str[i] = st.str[i];
			}
			size = st.size;
			return *this;
		}
		my_string operator () (const char *ch) {
			int len, i;
			delete [] str;
			for( len = 0 ; ch[len] ; len++ );
			str = new char[len+1];
			for( i = 0 ; i < len + 1 ; i++ ) 
			{
				str[i] = ch[i];
			}
			size = len;
			return *this;
		}
		bool operator != (const my_string &st) {
			int i;
			for( i = 0 ; str[i] ; i++ )
			{
				if( str[i] != st.str[i] )
				{
					return true;
				}
			}
			if( str[i] == st.str[i] )
			{
				return false;
			}
		}
		bool operator != (const char *ch) {
			int i;
			for( i = 0 ; str[i] ; i++ )
			{
				if( str[i] != ch[i] )
				{
					return true;
				}
			}
			if( str[i] == ch[i] )
			{
				return false;
			}
		}
		bool operator < (const my_string &st) {
			int i;
			for( i = 0 ; str[i] ; i++)
			{
				if( str[i] == st.str[i] )
				{
					continue;
				}
				else if( str[i] < st.str[i] )
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			if( str[i] == st.str[i] )
			{
				return false;
			}
			else if( str[i] < st.str[i] )
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		bool operator < (const char *ch) {
			int i;
			for( i = 0 ; str[i] ; i++)
			{
				if( str[i] == ch[i] )
				{
					continue;
				}
				else if( str[i] < ch[i] )
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			if( str[i] == ch[i] )
			{
				return false;
			}
			else if( str[i] < ch[i] )
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		bool operator <= (const my_string &st) {
			int i;
			for( i = 0 ; str[i] ; i++)
			{
				if( str[i] == st.str[i] )
				{
					continue;
				}
				else if( str[i] < st.str[i] )
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			if( str[i] <= st.str[i] )
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		bool operator <= (const char *ch) {
			int i;
			for( i = 0 ; str[i] ; i++)
			{
				if( str[i] == ch[i] )
				{
					continue;
				}
				else if( str[i] < ch[i] )
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			if( str[i] <= ch[i] )
			{
				return false;
			}
			else
			{
				return false;
			}
		}
		bool operator > (const my_string &st) {
			int i;
			for( i = 0 ; str[i] ; i++)
			{
				if( str[i] == st.str[i] )
				{
					continue;
				}
				else if( str[i] > st.str[i] )
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			if( str[i] == st.str[i] )
			{
				return false;
			}
			else if( str[i] > st.str[i] )
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		bool operator > (const char *ch) {
			int i;
			for( i = 0 ; str[i] ; i++)
			{
				if( str[i] == ch[i] )
				{
					continue;
				}
				else if( str[i] > ch[i] )
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			if( str[i] == ch[i] )
			{
				return false;
			}
			else if( str[i] > ch[i] )
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		bool operator >= (const my_string &st) {
			int i;
			for( i = 0 ; str[i] ; i++)
			{
				if( str[i] == st.str[i] )
				{
					continue;
				}
				else if( str[i] > st.str[i] )
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			if( str[i] >= st.str[i] )
			{
				return false;
			}
			else
			{
				return false;
			}
		}
		bool operator >= (const char *ch) {
			int i;
			for( i = 0 ; str[i] ; i++)
			{
				if( str[i] == ch[i] )
				{
					continue;
				}
				else if( str[i] > ch[i] )
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			if( str[i] >= ch[i] )
			{
				return false;
			}
			else
			{
				return false;
			}
		}
	friend istream& operator >> (istream &, my_string &);
	friend ostream& operator << (ostream &, my_string &);
	friend int strlen ( const my_string & );
	friend my_string strcpy ( my_string &, const my_string &);
	friend string strcpy ( string &, const my_string & );
	friend my_string strcpy ( my_string &, const string & );
	friend int strcmp ( const my_string &, const my_string & );
	friend int strcmp ( const string &, const my_string & );
	friend int strcmp ( const my_string &, const string & );
	friend my_string strcat ( my_string &, const my_string & );
	friend string strcat ( string &, const my_string & );
	friend my_string strcat ( my_string &, const string & );
	friend my_string strrev ( my_string & );
	friend my_string strchr ( my_string &, char & );
	friend my_string strchr ( const my_string &, const char & );
	friend my_string strchr ( const char &, const my_string & );
	friend my_string strrchr ( const my_string &, const char & );
	friend my_string strrchr ( const char &, const my_string & );
	friend my_string strstr ( const my_string &, const my_string & );
	friend string strstr ( const string &, const my_string & );
	friend my_string strstr ( const my_string &, const string & );
	friend my_string strrstr ( const my_string &, const my_string & );
	friend string strrstr ( const string &, const my_string & );
	friend my_string strrstr ( const my_string &, const string & );
	friend my_string strncpy ( my_string &, const my_string &, int );
	friend string strncpy ( string &, const my_string &, int );
	friend my_string strncpy ( my_string &, const string &, int );
	friend int strncmp ( const my_string &, const my_string &, int );
	friend int strncmp ( const string &, const my_string &, int );
	friend int strncmp ( const my_string &, const string &, int );
	friend my_string strncat ( my_string &, const my_string &, int );
	friend string strncat ( string &, const my_string &, int );
	friend my_string strncat ( my_string &, const string &, int );
};

istream& operator >> (istream &in, my_string &temp) {
	int len = 0, i;
	char fill[1024];
	in.getline(fill,1024);
	fill[1023] = '\0';
	while(fill[len])
	{
		len++;
	}
	temp.str = new char[len];
	for( i = 0 ; i < len + 1 ; i++ )
	{
		temp.str[i] = fill[i] ;
	}
	temp.size = len;
	return in;
}

ostream& operator << (ostream &out, my_string &temp) {
	out << temp.str;
	return out;
}

int strlen ( const my_string &temp ) {
	return temp.size;
}

my_string strcpy ( my_string &temp1, const my_string &temp2 ) {
	int i;
	delete [] temp1.str;
	temp1.str = new char[temp2.size + 1];
	for ( i = 0 ; i < temp2.size + 1; i++ )
	{
		temp1.str[i] = temp2.str[i] ;
	}
	temp1.size = temp2.size;
	return temp1;
}

string strcpy ( string &temp1, const my_string &temp2 ) {
	temp1 = temp2.str;
	return temp1;
}

my_string strcpy ( my_string &temp1, const string &temp2 ) {
	int i;
	delete [] temp1.str;
	temp1.str = new char[temp2.length() + 1];
	for ( i = 0 ; i < temp2.length() + 1; i++ )
	{
		temp1.str[i] = temp2[i] ;
	}
	temp1.size = temp2.length();
	return temp1;
}

int strcmp ( const my_string &temp1, const my_string &temp2 ) {
	int i, j, k;
	if( temp1.size < temp2.size )
	{
		k = temp2.size;
	}
	else
	{
		k = temp1.size;
	}
	for ( i = 0 ; i < k ; i++ )
	{
		if ( temp1.str[i] == temp2.str[i] )
		{
			continue;
		}
		if ( temp1.str[i] < temp2.str[i] )
		{
			return -1;
		}
		else if ( temp1.str[i] > temp2.str[i] )
		{
			return 1;
		}
	}
	if ( temp1.str[i] == temp2.str[i] )
	{
		return 0;
	}
}

int strcmp ( const string &temp1, const my_string &temp2 ) {
	int i, j, k;
	if( temp1.length() < temp2.size )
	{
		k = temp2.size;
	}
	else
	{
		k = temp1.length();
	}
	for ( i = 0 ; i < k ; i++ )
	{
		if ( temp1[i] == temp2.str[i] )
		{
			continue;
		}
		if ( temp1[i] < temp2.str[i] )
		{
			return -1;
		}
		else if ( temp1[i] > temp2.str[i] )
		{
			return 1;
		}
	}
	if ( temp1[i] == temp2.str[i] )
	{
		return 0;
	}
}

int strcmp ( const my_string &temp1, const string &temp2 ) {
	int i, j, k;
	if( temp1.size < temp2.length() )
	{
		k = temp2.length();
	}
	else
	{
		k = temp1.size;
	}
	for ( i = 0 ; i < k ; i++ )
	{
		if ( temp1.str[i] == temp2[i] )
		{
			continue;
		}
		if ( temp1.str[i] < temp2[i] )
		{
			return -1;
		}
		else if ( temp1.str[i] > temp2[i] )
		{
			return 1;
		}
	}
	if ( temp1.str[i] == temp2[i] )
	{
		return 0;
	}
}

my_string strcat ( my_string &temp1, const my_string &temp2 ) {
	int i, j, k;
	my_string temp3;
	temp3 = temp1;
	delete [] temp1.str;
	temp1.str = new char[ k = (temp3.size + temp2.size + 1) ];
	for ( i = 0 ; temp3.str[i] ; i++ )
	{
		temp1.str[i] = temp3.str[i];
	}
	for ( j = 0 ; i <= k ; j++, i++ )
	{
		temp1.str[i] = temp2.str[j];
	}
	delete [] temp3.str;
	return temp1;
}

string strcat ( string &temp1, const my_string &temp2 ) {
	temp1 = temp1 + temp2.str;
	return temp1;
}

my_string strcat ( my_string &temp1, const string &temp2 ) {
	int i, j, k;
	my_string temp3;
	temp3 = temp1;
	delete [] temp1.str;
	temp1.str = new char[ k = (temp3.size + temp2.length() + 1) ];
	for ( i = 0 ; temp3.str[i] ; i++ )
	{
		temp1.str[i] = temp3.str[i];
	}
	for ( j = 0 ; i <= k ; j++, i++ )
	{
		temp1.str[i] = temp2[j];
	}
	delete [] temp3.str;
	return temp1;
}

my_string strrev ( my_string &temp ) {
	int i, j;
	char ch;
	for ( i = 0 , j = temp.size ; i < j ; i++, j--)
	{
		ch = temp.str[i];
		temp.str[i] = temp.str[j];
		temp.str[j] = ch;
	}
	return temp;
}

my_string strchr ( const my_string &temp, const char &ch ) {
	my_string ret;
	int i, j, k;
	for ( i = 0 ; i < temp.size ; i++ )
	{
		if( temp.str[i] == ch )
		{
			ret.size = temp.size - i;
			ret.str = new char[ret.size + 1];
			for ( j = i, k = 0 ; j <= temp.size ; j++, k++ )
			{
				ret.str[k] = temp.str[j];
			}
			return ret;
		}
	}
	return ret;
}

my_string strchr ( const char &ch, const my_string &temp ) {
	my_string ret;
	int i, j, k;
	for ( i = 0 ; i < temp.size ; i++ )
	{
		if( temp.str[i] == ch )
		{
			ret.size = temp.size - i;
			ret.str = new char[ret.size + 1];
			for ( j = i, k = 0 ; j <= temp.size ; j++, k++ )
			{
				ret.str[k] = temp.str[j];
			}
			return ret;
		}
	}
	return ret;
}

my_string strrchr ( const my_string &temp, const char &ch ) {
	my_string ret;
	int i, j, k, l;
	for ( i = 0, l = 0; i < temp.size ; i++ )
	{
		if( temp.str[i] == ch )
		{
			l = i;
		}
	}
	if( l == 0)
	{
		return ret;
	}
	else
	{
		ret.size = temp.size - l;
		ret.str = new char[ret.size + 1];
		for ( j = l, k = 0 ; k <= ret.size ; k++, j++ )
		{
			ret.str[k] = temp.str[j];
		}
		return ret;
	}
}

my_string strrchr ( const char &ch, const my_string &temp ) {
	my_string ret;
	int i, j, k, l;
	for ( i = 0, l = 0; i < temp.size ; i++ )
	{
		if( temp.str[i] == ch )
		{
			l = i;
		}
	}
	if( l == 0)
	{
		return ret;
	}
	else
	{
		ret.size = temp.size - l;
		ret.str = new char[ret.size + 1];
		for ( j = l, k = 0 ; k <= ret.size ; k++, j++ )
		{
			ret.str[k] = temp.str[j];
		}
		return ret;
	}
}

my_string strstr ( const my_string &temp1, const my_string &temp2 ) {
	int i, j, k, l;
	my_string ret;
	if( temp1.size < temp2.size )
	{
		cout << "Size (length) of the destination (Haystack) is less than source (Needle) ." << endl;
		return ret;
	}
	for ( i = 0, j = 0; i < temp1.size ; i++ )
	{
		if( temp1.str[i] == temp2.str[j] )
		{
			for( k = i ; j < temp2.size ; j++, k++ )
			{
				if ( temp1.str[k] != temp2.str[j] )
				{
					j = 0;
					break;
				}
			}
			if( j == temp2.size )
			{
				ret.size = temp1.size - i;
				ret.str = new char[ret.size + 1];
				for ( l = i, k = 0 ; l <= temp1.size ; l++, k++ )
				{
					ret.str[k] = temp1.str[l] ; 
				}
				return ret;
			}
		}
	}
	return ret;
}

string strstr ( const string &temp1, const my_string &temp2 ) {
	int i, j, k, l;
	string ret;
	if( temp1.length() < temp2.size )
	{
		cout << "Size (length) of the destination (Haystack) is less than source (Needle) ." << endl;
		return ret;
	}
	for ( i = 0, j = 0; i < temp1.length() ; i++ )
	{
		if( temp1[i] == temp2.str[j] )
		{
			for( k = i ; j < temp2.size ; j++, k++ )
			{
				if ( temp1[k] != temp2.str[j] )
				{
					j = 0;
					break;
				}
			}
			if( j == temp2.size )
			{
				for ( l = i, k = 0 ; l <= temp1.size() ; l++, k++ )
				{
					ret[k] = temp1[l] ; 
				}
				return ret;
			}
		}
	}
	return ret;
}

my_string strstr ( const my_string &temp1, const string &temp2 ) {
	int i, j, k, l;
	my_string ret;
	if( temp1.size < temp2.length() )
	{
		cout << "Size (length) of the destination (Haystack) is less than source (Needle) ." << endl;
		return ret;
	}
	for ( i = 0, j = 0; i < temp1.size ; i++ )
	{
		if( temp1.str[i] == temp2[j] )
		{
			for( k = i ; j < temp2.length() ; j++, k++ )
			{
				if ( temp1.str[k] != temp2[j] )
				{
					j = 0;
					break;
				}
			}
			if( j == temp2.length() )
			{
				ret.size = temp1.size - i;
				ret.str = new char[ret.size + 1];
				for ( l = i, k = 0 ; l <= temp1.size ; l++, k++ )
				{
					ret.str[k] = temp1.str[l] ; 
				}
				return ret;
			}
		}
	}
	return ret;
}

my_string strrstr ( const my_string &temp1, const my_string &temp2 ) {
	int i, j, k, l, n = 0;
	my_string ret;
	if( temp1.size < temp2.size )
	{
		cout << "Size (length) of the destination (Haystack) is less than source (Needle) ." << endl;
		return ret;
	}
	for ( i = 0, j = 0; i < temp1.size ; i++ )
	{
		if( temp1.str[i] == temp2.str[j] )
		{
			for( k = i ; j < temp2.size ; j++, k++ )
			{
				if ( temp1.str[k] != temp2.str[j] )
				{
					j = 0;
					break;
				}
			}
			if( j == temp2.size )
			{
				n = i;
			}
		}
	}
	if ( n == 0 )
	{
		return ret;
	}
	else
	{
		ret.size = temp1.size - n;
		ret.str = new char[ret.size + 1];
		for ( l = n, k = 0 ; l <= temp1.size ; l++, k++ )
		{
			ret.str[k] = temp1.str[l] ; 
		}
		return ret;
	}
}

string strrstr ( const string &temp1, const my_string &temp2 ) {
	int i, j, k, l, n = 0;
	string ret;
	if( temp1.length() < temp2.size )
	{
		cout << "Size (length) of the destination (Haystack) is less than source (Needle) ." << endl;
		return ret;
	}
	for ( i = 0, j = 0; i < temp1.length() ; i++ )
	{
		if( temp1[i] == temp2.str[j] )
		{
			for( k = i ; j < temp2.size ; j++, k++ )
			{
				if ( temp1[k] != temp2.str[j] )
				{
					j = 0;
					break;
				}
			}
			if( j == temp2.size )
			{
				n = i;
			}
		}
	}
	if ( n == 0 )
	{
		return ret;
	}
	else
	{
		for ( l = n, k = 0 ; l <= temp1.length() ; l++, k++ )
		{
			ret[k] = temp1[l] ; 
		}
		return ret;
	}
}

my_string strrstr ( const my_string &temp1, const string &temp2 ) {
	int i, j, k, l, n = 0;
	my_string ret;
	if( temp1.size < temp2.length() )
	{
		cout << "Size (length) of the destination (Haystack) is less than source (Needle) ." << endl;
		return ret;
	}
	for ( i = 0, j = 0; i < temp1.size ; i++ )
	{
		if( temp1.str[i] == temp2[j] )
		{
			for( k = i ; j < temp2.length() ; j++, k++ )
			{
				if ( temp1.str[k] != temp2[j] )
				{
					j = 0;
					break;
				}
			}
			if( j == temp2.length() )
			{
				n = i;
			}
		}
	}
	if ( n == 0 )
	{
		return ret;
	}
	else
	{
		ret.size = temp1.size - n;
		ret.str = new char[ret.size + 1];
		for ( l = n, k = 0 ; l <= temp1.size ; l++, k++ )
		{
			ret.str[k] = temp1.str[l] ; 
		}
		return ret;
	}
}

my_string strncpy ( my_string &temp1, const my_string &temp2, int n ) {
	int i;
	delete [] temp1.str;
	if ( temp2.size < n )
	{
		n = temp2.size;
	}
	temp1.str = new char[(temp1.size = n) + 1];
	for ( i = 0 ; i <= n ; i++ )
	{
		temp1.str[i] = temp2.str[i];
	}
	temp1.str[i] = '\0';
	return temp1;
}

string strncpy ( string &temp1, const my_string &temp2, int n ) {
	int i;
	if ( temp2.size < n )
	{
		n = temp2.size;
	}
	for ( i = 0 ; i <= n ; i++ )
	{
		temp1[i] = temp2.str[i];
	}
	temp1[i] = '\0';
	return temp1;
}

my_string strncpy ( my_string &temp1, const string &temp2, int n ) {
	int i;
	delete [] temp1.str;
	if ( temp2.length() < n )
	{
		n = temp2.length();
	}
	temp1.str = new char[(temp1.size = n) + 1];
	for ( i = 0 ; i <= n ; i++ )
	{
		temp1.str[i] = temp2[i];
	}
	temp1.str[i] = '\0';
	return temp1;
}

int strncmp ( const my_string &temp1, const my_string &temp2, int n ) {
	int i, j, k;
	if( ( temp1.size < n ) && ( temp2.size < n ) )
	{
		if( temp1.size < temp2.size )
		{
			k = temp2.size;
		}
		else
		{
			k = temp1.size;
		}
	}
	else
	{
		k = n;
	}
	for ( i = 0 ; i < k ; i++ )
	{
		if ( temp1.str[i] == temp2.str[i] )
		{
			continue;
		}
		if ( temp1.str[i] < temp2.str[i] )
		{
			return -1;
		}
		else if ( temp1.str[i] > temp2.str[i] )
		{
			return 1;
		}
	}
	if ( temp1.str[i] == temp2.str[i] )
	{
		return 0;
	}
}

int strncmp ( const string &temp1, const my_string &temp2, int n ) {
	int i, j, k;
	if( ( temp1.length() < n ) && ( temp2.size < n ) )
	{
		if( temp1.length() < temp2.size )
		{
			k = temp2.size;
		}
		else
		{
			k = temp1.length();
		}
	}
	else
	{
		k = n;
	}
	for ( i = 0 ; i < k ; i++ )
	{
		if ( temp1[i] == temp2.str[i] )
		{
			continue;
		}
		if ( temp1[i] < temp2.str[i] )
		{
			return -1;
		}
		else if ( temp1[i] > temp2.str[i] )
		{
			return 1;
		}
	}
	if ( temp1[i] == temp2.str[i] )
	{
		return 0;
	}
}

int strncmp ( const my_string &temp1, const string &temp2, int n ) {
	int i, j, k;
	if( ( temp1.size < n ) && ( temp2.length() < n ) )
	{
		if( temp1.size < temp2.length() )
		{
			k = temp2.length();
		}
		else
		{
			k = temp1.size;
		}
	}
	else
	{
		k = n;
	}
	for ( i = 0 ; i < k ; i++ )
	{
		if ( temp1.str[i] == temp2[i] )
		{
			continue;
		}
		if ( temp1.str[i] < temp2[i] )
		{
			return -1;
		}
		else if ( temp1.str[i] > temp2[i] )
		{
			return 1;
		}
	}
	if ( temp1.str[i] == temp2[i] )
	{
		return 0;
	}
}

my_string strncat ( my_string &temp1, const my_string &temp2, int n ) {
	int i, j, k;
	my_string temp3;
	temp3 = temp1;
	delete [] temp1.str;
	if( temp2.size < n )
	{
		n = temp2.size + 1;
	}
	temp1.str = new char[ k = (temp3.size + n + 1) ];
	for ( i = 0 ; temp3.str[i] ; i++ )
	{
		temp1.str[i] = temp3.str[i];
	}
	for ( j = 0 ; i <= k ; j++, i++ )
	{
		temp1.str[i] = temp2.str[j];
	}
	temp1.str[i] = '\0';
	delete [] temp3.str;
	return temp1;
}

string strncat ( string &temp1, const my_string &temp2, int n ) {
	int i, j, k;
	if( temp2.size < n )
	{
		n = temp2.size + 1;
	}
	for ( i = 0, j = temp1.length() ; i < n ; i++, j++ )
	{
		temp1[j] = temp2.str[i];
	}
	temp1[j] = '\0';
	return temp1;
}

my_string strncat ( my_string &temp1, const string &temp2, int n ) {
	int i, j, k;
	my_string temp3;
	temp3 = temp1;
	delete [] temp1.str;
	if( temp2.length() < n )
	{
		n = temp2.length() + 1;
	}
	temp1.str = new char[ k = (temp3.size + n + 1) ];
	for ( i = 0 ; temp3.str[i] ; i++ )
	{
		temp1.str[i] = temp3.str[i];
	}
	for ( j = 0 ; i <= k ; j++, i++ )
	{
		temp1.str[i] = temp2[j];
	}
	temp1.str[i] = '\0';
	delete [] temp3.str;
	return temp1;
}