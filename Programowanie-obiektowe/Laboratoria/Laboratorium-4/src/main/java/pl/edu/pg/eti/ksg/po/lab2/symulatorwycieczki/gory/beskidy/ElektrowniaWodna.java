package pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.beskidy;

import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.Atrakcja;

public class ElektrowniaWodna extends Atrakcja {
    private final String miejscowosc;

    public ElektrowniaWodna(String miejscowosc) {
        super(0.75);
        this.miejscowosc = miejscowosc;
    }

    @Override
    public String getNazwa() {
        return "Elektrownia wodna w " + this.miejscowosc;
    }

    public String getMiejscowosc() {
        return this.miejscowosc;
    }
}
