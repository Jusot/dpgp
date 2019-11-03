package lab_2;
public class ComponentDecorator extends Computer {
	Computer computer;
	double cost;
	public ComponentDecorator(Computer computer) {
		this.computer=computer;
	}
	public Computer getComputer() {
		return computer;
	}
	
	public void setComputer(Computer computer) {
		this.computer = computer;
	}
	public double getCost() {
		return cost;
	}

	public void setCost(double cost) {
		this.cost = cost;
	}

	
	
}
