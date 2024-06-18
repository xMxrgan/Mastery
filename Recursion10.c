/*
Si scriva un programma C che definisce le funzioni:
 leggi(), che legge da tastiera un numero intero non negativo
e lo restituisce. Se fosse negativo, deve continuare a chiederlo
all'utente;
 stampa(int numero), che stampa le cifre del numero
indicato, in italiano. Per esempio, se numero e 4301 allora
deve stampare quattro tre zero uno; se numero e 0 allora deve
stampare zero.
 È possibile denire ulteriori funzioni ausiliarie, se servono. La funzione stampa()deve essere ricorsiva o chiamare una
vostra funzione ricorsiva.
 Caso base: numero = 0;
 Passo ricorsivo: stampa( numero/10 );
 Infine, tale programma deve avere anche un main()che
chiama leggi()per leggere un numero non negativo e poi
chiama stampa()per stamparne le cifre in italiano.
*/
