package transformacje;

import java.lang.Math;

public class Obrot implements Transformacja {

	// Parametr
	private final double angle;

	// Konstruktor
	public Obrot(double angle) {
		this.angle = angle;
	}

	// Getter
	public double getdX() {
		return angle;
	}

	// Metody
	@Override
	public Punkt transformuj(Punkt p) {
		return new Punkt(
				Math.round(p.getX() * Math.cos(angle) - p.getY() * Math.sin(angle)),
				Math.round(p.getX() * Math.sin(angle) + p.getY() * Math.cos(angle)));
	}

	@Override
	public Transformacja getTransformacjaOdwrotna() {
		return new Obrot(-angle);
	}

	@Override
	public String toString() {
		return "Obrot o " + angle / Math.PI + "pi";
	}
}
