package lab_2;
public class Laptop extends Computer {
	double cost=3000;//basic price
	Computer computer;
	public Laptop() {
	 this.desc="Laptop machine "+cost+"$";
	}
	public double getCost() {
		 return cost; 
	}

	protected void setComputer(Computer computer) {
		this.computer=computer;	
	}
	public Computer getComputer() {
		return computer;
	}
	public void setCost(double cost) {
		this.cost = cost;
	}
}
