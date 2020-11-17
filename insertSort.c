/** vkladanie cisla na istu poziciu
  *
  * @param *a pole do ktoreho vkladame
  * @param n pocet prvkov pola a
  * x prvok, ktory chceme vlozit
*/


void insert ( int * a, int n, int x )
{
	int i;
	for ( i = n-1; i >= 0 && a[i] > x; i-- )
	{
		a[i+1] = a[i];
	}
	a[i+1] = x;
}




/** zaciatok je 1. prvok pola, pole dlzky 1 je zoradene
  * vezmeme 1. polok zvysku pola a zaradi sa do uz zoradeneho pola
  * to to sa opakuje s indexmi 2, 3, 4... az dokial nie je pole zoradene
  *
  * @param *a pole cisiel, ktore chceme zoradit
  * @param n pocet prvkov pola a
*/

void insertSort ( int * a, int n )
{
	int i;
	for ( i = 1; i < n; i++ )
	{
		insert( a, i, a[i] );
	}

}
