/*
Si completi la classe concreta CamelStyleIdentifier, sottoclasse di MultiWordIdentifier. Si noti
che la classe ha tre costruttori: il primo costruisce l’identificatore a partire dalle stringhe componenti, il secondo a partire da un qualsiasi iterabile e il terzo concatenando le componenti di altri identificatori:
 */

public class CamelStyleIdentifier extends MultiWordIdentifier {
    private String words;
    private int check = 0;

    public CamelStyleIdentifier(String... words) {

    }

    // TODO
    public CamelStyleIdentifier(Iterable<String> words) {

    }

    // TODO
    public CamelStyleIdentifier(MultiWordIdentifier... ids) {

    }
    //
}
