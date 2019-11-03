package lab_2;
public class SamsungFactory {
	protected Computer createComputer(String type) {
		Computer computer=null;
		if(type.equals("CPU_Samsung")) {
			computer=new CPU_Samsung(computer);
		}else if (type.equals("Memory_Samsung")) {
			computer=new Memory_Samsung(computer);
		}else if (type.equals("Motherboard_Samsung")) {
			computer=new Motherboard_Samsung(computer);
		}
		return computer;
	}
}
