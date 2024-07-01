/*
Diciamo che un array a[] è "quasi ordinato" se tutti i
valori negativi (se esistono) precedono i valori maggiori
o uguali di zero (se esistono); si noti che i valori negativi
possono comparire in ordine qualsiasi, come pure i
valori maggiori o uguali di zero. Ad esempio l'array a[] =
{-1, -7, 8, 10, 8, 1} è quasi ordinato, come pure l'array a[]
= {-9, -7, -1, -3} e a[] = {13, 9, 0, 21, 33},
mentre l'array a[] = {3, -1, 4, 5} (compare un valore >= 0
prima di uno negativo). Scrivere la funzione int
quasi_ordinato(int a[], int n) che, dato in input un array
a[] non vuoto e la sua lunghezza n, ritorna 1 se e solo se
a[] è quasi ordinato, 0 altrimenti.
*/
