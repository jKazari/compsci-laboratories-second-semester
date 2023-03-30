package transformacje;

public class BrakTransformacjiOdwrotnejException extends Exception {

	// Konstruktor
	public BrakTransformacjiOdwrotnejException() {
	}

	// Konstruktor przyjmujący jako parametr tekst opisujący błąd
	public BrakTransformacjiOdwrotnejException(String message) {
		super(message);
	}

	// Konstruktor przyjmujący jako parametr referencje do innego
	// wyjątku, który spowodował błąd
	public BrakTransformacjiOdwrotnejException(Throwable cause) {
		super(cause);
	}

	// Konstruktor przyjmujący jako parametr tekst opisujący błąd
	// oraz wyjątek, który spowodował błąd.
	public BrakTransformacjiOdwrotnejException(String message, Throwable cause) {
		super(message, cause);
	}
}