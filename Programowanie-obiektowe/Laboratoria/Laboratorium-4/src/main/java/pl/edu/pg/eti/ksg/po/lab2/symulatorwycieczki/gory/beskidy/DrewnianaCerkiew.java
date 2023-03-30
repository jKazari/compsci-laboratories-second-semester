package pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.beskidy;

import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.Atrakcja;

public class DrewnianaCerkiew extends Atrakcja {
    private final String miejscowosc;

    public DrewnianaCerkiew(String miejscowosc) {
        super(0.5);
        this.miejscowosc = miejscowosc;
    }

    @Override
    public String getNazwa() {
        return "Drewniana Cerkiew w " + this.miejscowosc;
    }

    public String getMiejscowosc() {
        return this.miejscowosc;
    }
}
