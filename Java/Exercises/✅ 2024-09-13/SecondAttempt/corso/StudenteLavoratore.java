package corso;

import java.time.Year;

/**
 * Uno studente lavoratore è identico a uno studente ma finisce fuori corso
 * nel doppio di anni rispetto a uno studente non lavoratore.
 */
public class StudenteLavoratore extends Studente {
	// aggiungete campi se servissero

	public StudenteLavoratore(String nome, String cognome, int matricola, int annoDiImmatricolazione)
			throws StudenteIllegaleException {
		// completare
		super(nome, cognome, matricola, annoDiImmatricolazione);
	}

	// forse dovete ridefinire qualcosa?
	@Override
	public boolean fuoriCorso(Corso corso) {
		// completare
		return Year.now().getValue() - getAnnoDiImmatricolazione() > (corso.getDurata() * 2);
	}
}
