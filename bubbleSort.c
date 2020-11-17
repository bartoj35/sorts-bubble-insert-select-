void swap ( int * a, int * b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}




/** porovnava susedne prvky pola, ak sa susedne nerovnaju prehodi pozicie
  * opakuje kym nie su vsetky susedne zoradene
  *
  * @param *a pole cisiel, ktore chceme zoradit
  * @param n pocet prvkov pola a
*/



void bubbleSort ( int * a, int n )
{
	int i, sorted;
	do
	{
		sorted = 1;
		for ( i = 0; i < n-1; i++ )
		{
			swap( &a[i], &a[i+1] );
			sorted = 0;
		}
	}
	while( !sorted );
}
