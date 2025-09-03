/*
Si vuole implementare una carta del gioco del poker, il cui valore è uno fra questi:
2 3 4 5 6 7 8 9 10 J Q K 1
Tale valore può essere visto come un numero fra 0 e 12. Una carta ha anche un seme (in inglese: suit) che può essere:
spades (♠), clubs (♣), diamonds (♦) e hearts (♥).
Si completi la seguente classe, che rappresenta una carta:
 */

public class MainCard {
    public static void main(String[] args) {
        int attempts = 0;
        Card card1 = new Card();
        Card card2;

        do {
            card2 = new Card();
            attempts++;
            System.out.println("Attempt: " + attempts + "\nCards: " + card1.toString() + " vs " + card2.toString());
        } while (!card1.equals(card2));

    }
}
