package pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.beskidy;

import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.Atrakcja;

public class ChatkaStudencka extends Atrakcja {
    private final String opiekun;

    public ChatkaStudencka(String opiekun) {
        super(0.5);
        this.opiekun = opiekun;
    }

    @Override
    public String getNazwa() {
        return "Chatka studencka pod opieką " + this.opiekun;
    }

    public String getOpiekun() {
        return this.opiekun;
    }
}
