public class Punkt {

	private final double x, y;

	// Konstruktor
	public Punkt(double x, double y) {
		this.x = x;
		this.y = y;
	}

	// Gettery
	public double getX() {
		return this.x;
	}

	public double getY() {
		return this.y;
	}

	// Nadpisania metod
	@Override
	public boolean equals(Object obj) {
		if (obj instanceof Punkt) {
			Punkt other = (Punkt) obj;
			return this.x == other.x && this.y == other.y;
		}
		return false;
	}

	@Override
	public int hashCode() {
		return 59 * Double.hashCode(x) + 7 * Double.hashCode(y);
	}

	@Override
	public String toString() {
		return "Instancja klasy Punkt zawierająca punkt (" + x + "," + y + ")";
	}

	// Układ współrzędnych
	public static final Punkt O = new Punkt(0, 0);
	public static final Punkt E_X = new Punkt(1, 0);
	public static final Punkt E_Y = new Punkt(0, 1);
}
