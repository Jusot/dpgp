package lab_2;
public class CPU_Intel extends ComponentDecorator{
	Computer computer;
	double cost=2200;
	String desc = "Intel CPU "+cost+"$";
	public CPU_Intel(Computer computer) {
		super(computer);
	}
	public double getCost() {
		return cost+computer.getCost();
	}
	public void setCost(double cost) {
		this.cost = cost;
	}
	public Computer getComputer() {
		return computer;
	}
	public void setComputer(Computer computer) {
		this.computer = computer;
	}
	public String getDesc() {
		return computer.getDesc()+" + "+this.desc;
	}
	public void setDesc(String desc) {
		this.desc = desc;
	}
}
