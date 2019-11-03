package lab_2;
public class Customer {
	CompanyA a_PC=new CompanyA();
	CompanyB b_Laptop=new CompanyB();
	Computer computer;
	int label=0;
	double price;
	String type;
	//first decide your computer type
	public void  WantType(String type) {
		if(type.equals("PC")) {
			label=0;
		}else if(type.equals("Laptop")) {
			label=1;
		}
	}
	//get the payment
	public double getPrice() {
		if(label==0) {
			return a_PC.getPrice();
		}
		else {
			return b_Laptop.getPrice();
		}
	}
	//check the payment,and get your computer! 
	public Computer check() {
		if(label==0) {
			return a_PC.getComputer();
		}
		else {
			return b_Laptop.getComputer();
		}
	}
	//custom-made memories
	public void SetMem(int intelNumber,int SamNumber) {
		if(label==0) {
			a_PC.GetMemboard(intelNumber, SamNumber);
		}
		else if(label==1) {
			b_Laptop.GetMemboard(intelNumber, SamNumber);
		}	

	}
	//custom-made cpus
	public void SetCpu(int intelNumber,int SamNumber) {
		if(label==0) {
			a_PC.GetCpu(intelNumber,SamNumber);
		}
		else if(label==1) {
			b_Laptop.GetCpu(intelNumber,SamNumber);
		}	
	}
	//custom-made motherboard
	public void SetMotherboard(int intelNumber,int SamNumber) {
		if(label==0) {
			a_PC.GetMotherboard(intelNumber,SamNumber);
		}
		else if(label==1) {
			b_Laptop.GetMotherboard(intelNumber,SamNumber);
		}	
	}
}
