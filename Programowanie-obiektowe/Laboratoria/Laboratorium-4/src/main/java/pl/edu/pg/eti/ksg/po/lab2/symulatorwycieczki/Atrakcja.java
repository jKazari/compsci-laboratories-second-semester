package pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki;

public abstract class Atrakcja implements ElementWycieczki {

    protected final double czasZwiedzania;

    protected Atrakcja(double czasZwiedzania) {
        this.czasZwiedzania = czasZwiedzania;
    }

    public double getczasZwiedzania() {
        return czasZwiedzania;
    }
}
