import java.util.Random;

public class Card {
    Random random = new Random();

    private final int value;
    private final int suit;
    public int min = 0;

    private final String[] suitsList = {
            "♠", "♣", "♦", "♥"
    };

    public Card() {
        this.value = random.nextInt(12);
        this.suit = random.nextInt(4);
        verify();
    }

    private void verify() {
        if (this.value < 0 || this.value > 12) {
            System.out.println("There is an error mate!");
        }
    }

    public boolean equals(Card other) {
        return this.value == other.value && this.suit == other.suit;
    }

    public int getValue() {
        return this.value;
    }

    public String getSuit() {
        return suitsList[this.suit];
    }

    public String toString() {
        return this.value + "" + suitsList[this.suit];
    }
}
