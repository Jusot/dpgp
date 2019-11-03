package lab_2;
 public class Computer {
	double cost=0;
	String id;
	String desc = "µçÄÔÅäÖÃ";
	public Computer() {}
	
	public String getDesc() {
		return desc;
	}
	public void setDesc(String desc) {
		this.desc = desc;
	}
	public double getCost() {
		return cost;
	}
	public void setCost(double cost) {
		this.cost = cost;
	}
	protected void setComputer(Computer computer) {
	}
	
	public String getId() {
	return id;
	}

}	    
