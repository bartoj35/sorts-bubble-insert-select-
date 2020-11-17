void swap ( int * a, int * b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}




/** najde najmensi prvok vo zvysku pola, zameni najmensi prvok s 1.
  * opakuje len s polom o 1 kratsim
  *
  * @param *a pole cisiel, ktore chceme zoradit
  * @param n pocet prvkov pola a
*/



void selectSort ( int * a, int n )
{
	int i, j, imin;
	for ( i = 0; i < n-1; i++ )
	{
		imin = i;		/*index najmensieho prvku v zvysku pola*/
		for ( j = i+1; j < n; j++ )
		{
			if ( a[j] < a[imin] )
			imin = j;
		}
		if ( imin != i )
		{
			swap ( &a[imin], &a[i] );
		}
	}
}
