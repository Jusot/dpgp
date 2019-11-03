package lab_2;
public class CPU_Samsung extends ComponentDecorator{
	Computer computer;
	double cost=2000;
	String desc ="Samsung CPU "+cost+"$";
	public CPU_Samsung(Computer computer) {
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
		return  computer.getDesc()+" + "+ this.desc;
	}
	public void setDesc(String desc) {
		this.desc = desc;
	}
	
}

