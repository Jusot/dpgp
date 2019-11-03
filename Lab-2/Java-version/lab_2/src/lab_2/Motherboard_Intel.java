package lab_2;
public class Motherboard_Intel extends ComponentDecorator {
	Computer computer;
	double cost=1300;
	String desc = "Intel Motherboard "+cost+"$";
	
	public Computer getComputer() {
		return computer;
	}
	public void setComputer(Computer computer) {
		this.computer = computer;
	}
	public Motherboard_Intel(Computer computer) {
		super(computer);
	}
	public double getCost() {
		return cost+computer.getCost();
	}
	public void setCost(double cost) {
		this.cost = cost;
	}
	public String getDesc() {
		return computer.getDesc()+" + "+this.desc;
	}
	public void setDesc(String desc) {
		this.desc = desc;
	}
}
