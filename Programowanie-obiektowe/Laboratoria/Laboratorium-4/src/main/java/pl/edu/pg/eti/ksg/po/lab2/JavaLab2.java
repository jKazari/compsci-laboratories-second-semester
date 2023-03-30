package pl.edu.pg.eti.ksg.po.lab2;

import java.util.HashSet;
import java.util.Set;

import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.*;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.*;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.beskidy.*;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.ludzie.Czlowiek;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.ludzie.PrzewodnikStudencki;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.ludzie.Student;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.ludzie.StudentKSG;

/**
 *
 * @author TB
 */
public class JavaLab2 {
    public static void main(String[] args) {
        Wycieczka w = doBabiejGory();
        
        PrzewodnikStudencki przewodnik = new PrzewodnikStudencki("Stefan", "Długonogi", Czlowiek.Plec.MEZCZYZNA);
        Set<Uczestnik> uczestnicy = new HashSet<>();
        uczestnicy.add(new Student("Alojzy", "Mechanik", Czlowiek.Plec.MEZCZYZNA));
        uczestnicy.add(new Student("Ada", "Lovelace", Czlowiek.Plec.KOBIETA));
        uczestnicy.add(new Student("Jan", "Elektronik", Czlowiek.Plec.MEZCZYZNA));
        uczestnicy.add(new StudentKSG("Piotr","Teledetekcyjny", Czlowiek.Plec.MEZCZYZNA));
        
        Grupa g = new Grupa(przewodnik, uczestnicy);
        
        SymulatorWycieczki symulator = new SymulatorWycieczki(g, w);
        symulator.dodajSluchacza(new PasekPostepu());
        
        symulator.symuluj();
    }

    public static class PasekPostepu implements SluchaczPostepow {
        @Override
        public void aktualizujPostep(ElementWycieczki elementWycieczki, int lp, int liczbaElementow) {
            System.out.println("Postęp: " + lp + "/" + liczbaElementow + " " + elementWycieczki.getNazwa());
        }
    }
    
    public static Wycieczka doDydiowki() {
        Wycieczka ret = new Wycieczka("Do Dydiówki");
        ret.dodajElementWycieczki(new Droga(1.0));
        ret.dodajElementWycieczki(new DrewnianaCerkiew("Smolnik"));
        ret.dodajElementWycieczki(new Droga(4.0));
        ret.dodajElementWycieczki(new PrzeprawaPrzezRzeke(1.0));
        ret.dodajElementWycieczki(new GestyLas(2.0));
        ret.dodajElementWycieczki(new Las(2.0));
        ret.dodajElementWycieczki(new Droga(5.0));
        
        return ret;
    }

    public static Wycieczka doBabiejGory() {
        Wycieczka ret = new Wycieczka("Do Babiej Góry");
        ret.dodajElementWycieczki(new Droga(4.0));
        ret.dodajElementWycieczki(new Tory(1.0));
        ret.dodajElementWycieczki(new ChatkaStudencka("Babia Góra"));
        ret.dodajElementWycieczki(new Droga(2.0));
        ret.dodajElementWycieczki(new LakaPelneMuch(1.0));
        ret.dodajElementWycieczki(new CmentarzZIWojny("Kościółek"));
        ret.dodajElementWycieczki(new Droga(2.0));
        ret.dodajElementWycieczki(new Schronisko("Markowe Szczawiny"));
        ret.dodajElementWycieczki(new PoleBarszczuSosnowskiego(3.0));
        ret.dodajElementWycieczki(new GestyLas(1.0));
        ret.dodajElementWycieczki(new ElektrowniaWodna("Babia Góra"));
        ret.dodajElementWycieczki(new Blotostrada(3.0));
        return ret;
    }
    }
