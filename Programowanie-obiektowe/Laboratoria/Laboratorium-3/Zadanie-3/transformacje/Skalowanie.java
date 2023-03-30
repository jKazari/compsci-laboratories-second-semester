package transformacje;

public class Skalowanie implements Transformacja {

	// Parametry
	private final double skalaX, skalaY;

	// Konstruktor
	public Skalowanie(double skalaX, double skalaY) {
		this.skalaX = skalaX;
		this.skalaY = skalaY;
	}

	// Gettery
	public double getSkalaX() {
		return skalaX;
	}

	public double getSkalaY() {
		return skalaY;
	}

	// Metody
	@Override
	public Transformacja getTransformacjaOdwrotna() throws BrakTransformacjiOdwrotnejException {
		if (skalaX == 0 || skalaY == 0)
			throw new BrakTransformacjiOdwrotnejException(
					"Brak transformacji odwrotnej. Przynajmniej jeden z czynnikow skalowania jest rowny 0.");
		return new Skalowanie(1 / skalaX, 1 / skalaY);
	}

	@Override
	public Punkt transformuj(Punkt p) {
		return new Punkt(skalaX * p.getX(), skalaY * p.getY());
	}

	@Override
	public String toString() {
		return "Skalowanie " + skalaX + "x oraz " + skalaY + "y";
	}

}
