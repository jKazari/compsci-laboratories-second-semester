package transformacje;

public class ZlozenieTransformacji implements Transformacja {

	// Parametr
	private final Transformacja[] transformacje;

	// Konstruktor
	public ZlozenieTransformacji(Transformacja... transformacje) {
		this.transformacje = transformacje;
	}

	// Getter
	public Transformacja[] getTransformacje() {
		return transformacje;
	}

	// Metody
	@Override
	public Punkt transformuj(Punkt p) {
		Punkt wynik = p;
		for (Transformacja t : transformacje) {
			wynik = t.transformuj(wynik);
		}
		return wynik;
	}

	@Override
	public Transformacja getTransformacjaOdwrotna() {

		Transformacja[] odwrotnosci = new Transformacja[transformacje.length];

		try {
			for (int i = 0; i < transformacje.length; i++) {
				odwrotnosci[i] = transformacje[transformacje.length - i - 1].getTransformacjaOdwrotna();
			}
		} catch (Exception e) {
			System.out.println("Nie mozna odwrocic co najmniej jednej transformacji");
		}
		return new ZlozenieTransformacji(odwrotnosci);
	}

	@Override
	public String toString() {
		StringBuilder sb = new StringBuilder();

		for (Transformacja t : transformacje) {
			sb.append(t.toString()).append(", ");
		}
		sb.delete(sb.length() - 2, sb.length());

		return sb.toString();
	}
}