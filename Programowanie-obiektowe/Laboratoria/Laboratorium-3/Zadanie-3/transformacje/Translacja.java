package transformacje;

public class Translacja implements Transformacja {

	// Parametry
	private final double dX, dY;

	// Konstruktor
	public Translacja(double dX, double dY) {
		this.dX = dX;
		this.dY = dY;
	}

	// Gettery
	public double getdX() {
		return dX;
	}

	public double getdY() {
		return dY;
	}

	// Metody
	@Override
	public Transformacja getTransformacjaOdwrotna() {
		return new Translacja(-dX, -dY);
	}

	@Override
	public Punkt transformuj(Punkt p) {
		return new Punkt(p.getX() + dX, p.getY() + dY);
	}

	@Override
	public String toString() {
		return "Translacja o wektor (" + dX + "," + dY + ")";
	}
}
