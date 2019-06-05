
public class Singleton {

    private int _number;

    static Singleton _INSTANCE;

    private Singleton() {

    }

    public static Singleton getInstance() {
        if (_INSTANCE == null) {
            _INSTANCE = new Singleton();
        }
        
        return _INSTANCE;
    }

    public void setNumber(int number) {
        this._number = number;
    }

    public int getNumber() {
        return this._number;
    }
    
}