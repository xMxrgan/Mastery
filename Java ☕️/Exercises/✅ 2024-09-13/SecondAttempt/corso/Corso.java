package corso;

/**
 * Un corso di laurea (per esempio, informatica), con nome e durata in anni.
 */
public class Corso {
	// aggiungete campi se servissero
	private String nomeCorso;
	private int durataCorso;

	public Corso(String nomeCorso, int durataCorso) {
		// completare
		this.nomeCorso = nomeCorso;
		this.durataCorso = durataCorso;
	}

	@Override
	public String toString() {
		// completare, restituisce il nome del corso
		return nomeCorso;
	}

	// aggiungete i metodi accessori pubblici getNome() e getDurata()
	public String getNome() {
		return nomeCorso;
	}

	public int getDurata() {
		return durataCorso;
	}
}