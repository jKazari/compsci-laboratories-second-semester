package pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.beskidy;

import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.Wedrowka;

public class LakaPelneMuch extends Wedrowka {
    public LakaPelneMuch(double odleglosc) {
        super(odleglosc);
    }

    @Override
    public String getNazwa() {
        return "Blotostrada";
    }

    @Override
    public double modyfikujPredkoscGrupy(double predkosc) {
        return predkosc * 2;
    }

    @Override
    public int getTrudnoscNawigacyjna() {
        return 1;
    }
}
