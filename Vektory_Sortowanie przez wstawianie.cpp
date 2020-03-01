// Mateusz Jasiak
#include <iostream>
#include <vector> // vektory

using namespace std;

// Sortowanie liczb przez wstawianie
/*
// Na tablicach statycznych
void Wypelnij_tablice( int tab[], const int R )
{
	cout << "Podaj dwie liczby ( int ): " << endl;
	for( int i = 0; i < R; i++ )
	{
		cin >> tab[ i ];
	}
}

void Sortuj_wstawianie( int tab[], const int R )
{
	for( int x = 1; x < R; x++ )
	{
		for( int i = x; 0 < i; i-- )
		{
			// Zamiana miejscami, jesli lewa większa od prawej
			if( tab[ i + 0 ] < tab[ i - 1 ] )
			{
				int pomocnicza = tab[ i + 0 ];
				tab[ i + 0 ] = tab[ i - 1 ];
				tab[ i - 1 ] = pomocnicza;
			}
			else
			{
				break;
			}
		}
	}
}

void Drukowanie_tablicy( const int tab[], const int R )
{
	for( int i = 0; i < R; i++ )
	{
		cout.width( 8 );
		cout << tab[ i ] << " ";
	}
	cout << endl;
}
*/

// Na vektorach
void Wypelnij_vektor_poczatkowo( vector<int> *vTab )
{
    cout << "Podaj dwie liczby ( int ): " << endl;
	for( int i = 0; i < 2; i++ )
	{
		//int x;
		//cin >> x;
		//vTab->push_back( x );
		cin >> ( *vTab )[ i ];
	}
}

void Sortuj_wstawianie( vector<int> *vTab )
{
	for( int x = 1; x < vTab->size(); x++ )
	{
		for( int i = x; 0 < i; i-- )
		{
			// Zamiana miejscami, jesli lewa większa od prawej
			if( ( *vTab )[ i + 0 ] < ( *vTab )[ i - 1 ] )
			{
				int pomocnicza = ( *vTab )[ i + 0 ];
				( *vTab )[ i + 0 ] = ( *vTab )[ i - 1 ];
				( *vTab )[ i - 1 ] = pomocnicza;
			}
			else
			{
				break;
			}
		}
	}
}

void Wczytaj_kolejna_liczbe( vector<int> *vTab )
{
    int x;
    cout << "Podaj kolejna liczbe ( int ): ";
    cin  >> x;
    vTab->push_back( x );
}

void Drukowanie_vektora( const vector<int> *vTab )
{
	for( int i = 0; i < vTab->size(); i++ )
	{
        cout.width( 8 );
		cout << ( *vTab )[ i ] << " ";
	}
	cout << endl;
}

int main()
{
    /*
    // Na tablicach statycznych
	const int R_0 = 2;
	const int R_1 = 3;
	const int R_2 = 4;

	int tab_0[ R_0 ];
	int tab_1[ R_1 ];
	int tab_2[ R_2 ];

	Wypelnij_tablice( tab_0, R_0 );
	Sortuj_wstawianie( tab_0, R_0 );
	Drukowanie_tablicy( tab_0, R_0 );

	for( int i = 0; i < R_0; i++ )
	{
		tab_1[ i ] = tab_0[ i ];
	}
	cout << "Podaj trzecia liczbe ( int ): ";
	cin  >> tab_1[ 2 ];
	Sortuj_wstawianie( tab_1, R_1 );
	Drukowanie_tablicy( tab_1, R_1 );

	for( int i = 0; i < R_1; i++ )
	{
		tab_2[ i ] = tab_1[ i ];
	}
	cout << "Podaj czwarta liczbe ( int ): ";
	cin  >> tab_2[ 3 ];
	Sortuj_wstawianie( tab_2, R_2 );
	Drukowanie_tablicy( tab_2, R_2 );
    */

    // Na vektorach
    //vector<int> vTab;
	vector<int> vTab( 2 );
	// Dwie liczby ( poczatkowe wartosci )
	Wypelnij_vektor_poczatkowo( &vTab );
	Sortuj_wstawianie( &vTab );
	Drukowanie_vektora( &vTab );
	// Kolejna ( trzy liczby )
	Wczytaj_kolejna_liczbe( &vTab );
	Sortuj_wstawianie( &vTab );
	Drukowanie_vektora( &vTab );
	// Kolejna ( cztery liczby )
	Wczytaj_kolejna_liczbe( &vTab );
	Sortuj_wstawianie( &vTab );
	Drukowanie_vektora( &vTab );


	return 0;
}
