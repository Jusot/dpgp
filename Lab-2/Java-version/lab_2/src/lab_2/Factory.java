package lab_2;
public abstract class Factory{
	public Computer sellComputer(String type) {
		Computer computer=createComputer(type);
		return computer;
	}

	protected abstract Computer createComputer(String type);
}

