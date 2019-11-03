package lab_2;

public class IDpoolSingleton {
    static IDpoolSingleton []singletons=new IDpoolSingleton[20];    
    String id;
    private IDpoolSingleton() {
    }

    public static String getInstance(int i) {
        if (singletons[i] == null) {
            synchronized (IDpoolSingleton.class) {
                if (singletons[i] == null) {
                	singletons[i]=new IDpoolSingleton();
                	singletons[i].id="2000"+i;
                }
            }
        } 
        return singletons[i].getId();
    }

	public String getId() {
		return id;
	}

	public void setId(String id) {
		this.id = id;
	}
}