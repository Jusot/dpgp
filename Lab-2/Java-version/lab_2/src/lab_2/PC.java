package lab_2;
public class PC extends Computer {
	double cost=3000;//basic price
	Computer computer;
	String desc;
	public Computer getComputer() {
		return computer;
	}
	public void setComputer(Computer computer) {
		this.computer = computer;
	}
	public void setCost(double cost) {
		this.cost = cost;
	}
	public PC() {
		this.desc="PC machine "+getCost()+"$";
	}
	public double getCost() {
		 return cost; 
	}
	public String getDesc() {
		return desc;
	}
	public void setDesc(String desc) {
		this.desc = desc;
	}


}
