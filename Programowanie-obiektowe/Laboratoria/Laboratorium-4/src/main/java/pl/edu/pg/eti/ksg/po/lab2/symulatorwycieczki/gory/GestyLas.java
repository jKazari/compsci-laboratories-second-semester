package pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory;

public class GestyLas extends Las {
    public GestyLas(double odleglosc) {
        super(odleglosc);
    }

    @Override
    public int getTrudnoscNawigacyjna() {
        return 5;
    }

    @Override
    public String getNazwa() {
        return "Gesty Las";
    }
}
