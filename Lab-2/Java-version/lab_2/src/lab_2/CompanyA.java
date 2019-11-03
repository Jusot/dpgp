package lab_2;

import java.util.ArrayList;

public class CompanyA {
	PC pc=new PC();
	public CompanyA() {
		computers.add(pc);
	}
	ArrayList<Computer> computers=new ArrayList<Computer>();
	Computer computer=new Computer();
	SamsungFactory samsungFactory=new SamsungFactory();
	IntelFactory intelFactory=new IntelFactory();
	double price;
	public Computer getComputer() {
		return computer;
	}
	public double getPrice() {
		AssembleComputer();
		return computer.getCost();
	}
	public Computer AssembleComputer() {
		 computer.setComputer(pc);
		for(int i=1;i<computers.size();i++) {
			Computer computer1=computers.get(i);
			Computer computer2=computers.get(i-1);
			computer1.setComputer(computer2);
			computer=computer1;
			}
			
		return computer;
	}
	public void GetCpu(int intelCpuNum,int SamCpuNum) {
		for(int i=0;i<intelCpuNum;i++) {
		 Computer block1=intelFactory.createComputer("CPU_Intel");
		 computers.add(block1);
		}
		for(int i=0;i<SamCpuNum;i++) {
			Computer block1=samsungFactory.createComputer("CPU_Samsung");
			 computers.add(block1);
			}
	}
	public void GetMotherboard(int intelMBNum,int SamMBNum) {
		for(int i=0;i<intelMBNum;i++) {
		 Computer block1=intelFactory.createComputer("Motherboard_Intel");
		 computers.add(block1);
		}
		for(int i=0;i<SamMBNum;i++) {
			Computer block1=samsungFactory.createComputer("Motherboard_Samsung");
			 computers.add(block1);
			}
	}
	public void GetMemboard(int intelMemNum,int SamMemNum) {
		for(int i=0;i<intelMemNum;i++) {
		 Computer block1=intelFactory.createComputer("Memory_Intel");
		 computers.add(block1);
		}
		for(int i=0;i<SamMemNum;i++) {
			Computer block1=samsungFactory.createComputer("Memory_Samsung");
			 computers.add(block1);
			}
		
	}
	

}
