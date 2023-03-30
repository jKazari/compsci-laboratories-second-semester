package pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory;

import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.Atrakcja;

public class Schronisko extends Atrakcja {
    private final String miejscowosc;

    public Schronisko(String miejscowosc) {
        super(0.75);
        this.miejscowosc = miejscowosc;
    }

    @Override
    public String getNazwa() {
        return "Schronisko w " + this.miejscowosc;
    }

    public String getMiejscowosc() {
        return this.miejscowosc;
    }
}
