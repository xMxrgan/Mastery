Si vuole implementare una carta del gioco del poker, il cui valore è uno fra questi:
2 3 4 5 6 7 8 9 10 J Q K 1

Tale valore può essere visto come un numero fra 0 e 12. Una carta ha anche un seme (in inglese: suit) che può essere:

spades (♠), clubs (♣), diamonds (♦) e hearts (♥).

Si completi la seguente classe, che rappresenta una carta:

public class Card {

  /**
   * Il valore della carta.
   */
  private final int value;

  /**
   * Il seme della carta.
   */
  private final int suit;
 
  /**
   * Genera una carta a caso con un valore da min (incluso) in su.
   * 
   * @param min il valore minimo (0-12) della carta che può essere generata
   */
  public Card(int min) { ... }
  
  /**
   * Genera una carta a caso con un valore da 0 (incluso) in su.
   */
  public Card() { ... }
 
  public int getValue() { ...ritorna il valore della carta (0-12) }
 
  public int getSuit() { ...ritorna il seme della carta (0-3) }
 
  /**
   * Ritorna una descrizione della carta sotto forma di stringa, del tipo 10♠ oppure J♥.
   */
  public String toString() { ... }
 
  /**
   * Determina se questa carta è uguale ad other.
   * 
   * @param other l'altra carta con cui confrontarsi
   * @return true se e solo se le due carte sono uguali
   */
  public boolean equals(Card other) { ... }
}
Si scriva una classe Main con un metodo iniziale main che crea una carta card1 a caso, quindi crea ripetutamente una carta card2 a caso finché non risulta che card1 è equals con card2. A quel punto termina. Sia card1 che tutte le card2 dovranno venire stampate sul video man mano che vengono generate.
Si definiscano due enumerazioni Value e Suit, che rappresentano, rispettivamente, le 13 alternative per il valore delle carte e le quattro alternative per il loro seme. Si modifichi la classe Card in modo da usare queste enumerazioni al posto degli interi come valore e seme delle carte.
Si aggiunga un metodo public int compareTo(Card other) alla classe Card, che confronta una carta con un'altra e determina chi viene prima: le carte devono venire ordinate per valore; a parità di valore, devono venire ordinate per seme (picche, fiori, quadri, cuori).
Si generino le pagine JavaDoc da Eclipse.