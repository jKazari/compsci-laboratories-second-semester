package pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.beskidy;

import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.Atrakcja;

public class CmentarzZIWojny extends Atrakcja {
    private final String miejscowosc;

    public CmentarzZIWojny(String miejscowosc) {
        super(1 / 3);
        this.miejscowosc = miejscowosc;
    }

    @Override
    public String getNazwa() {
        return "Cmentarz z I wojny światowej w " + this.miejscowosc;
    }

    public String getMiejscowosc() {
        return this.miejscowosc;
    }
}
