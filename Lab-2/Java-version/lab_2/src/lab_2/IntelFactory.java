package lab_2;
public class IntelFactory extends Factory {
	protected Computer createComputer(String type) {
		Computer computer=null;
		if(type.equals("CPU_Intel")) {
			computer=new CPU_Intel(computer);
		}else if (type.equals("Memory_Intel")) {
			computer=new Memory_Intel(computer);
		}else if (type.equals("Motherboard_Intel")) {
			computer=new Motherboard_Intel(computer);
		}
		return computer;
	}

}
