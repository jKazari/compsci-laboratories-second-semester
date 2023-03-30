package pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.ludzie;

import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.Wedrowka;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.PrzeprawaPrzezRzeke;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.beskidy.Blotostrada;

public class BagiennyBiegacz extends Czlowiek {

    public BagiennyBiegacz(String imie, String nazwisko, Plec plec) {
        super(imie, nazwisko, plec, 6, 12, 20);
    }

    @Override
    public int getUmiejetnosciNawigacyjne() {
        return 5;
    }

    @Override
    public void reagujNaWedrowke(Wedrowka w, double czas) {
        if (w instanceof Blotostrada || w instanceof PrzeprawaPrzezRzeke) {
            aktualizujZmeczenie(czas / 2);

        } else {
            super.reagujNaWedrowke(w, czas);
        }
    }
}
