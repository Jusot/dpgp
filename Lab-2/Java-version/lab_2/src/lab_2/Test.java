package lab_2;
public class Test {
	public static void main(String[] args) {
		Computer computer;
		Government government=new Government();
		Customer customer1=new Customer();
		//computer type, PC or Laptop
		customer1.WantType("Laptop");
		customer1.SetCpu(0, 1);//Intel brand and samsung brand
		customer1.SetMem(1, 2);
		customer1.SetMotherboard(1, 0);
		System.out.println("Total price:"+customer1.getPrice());
		computer=customer1.check();
		System.out.println(computer.getDesc());
		government.check(computer,1);
		System.out.println("***************************");
		Computer computer1=new Computer();
		customer1.WantType("Laptop");
		customer1.SetCpu(1,1 );
		customer1.SetMem(1, 1);
		customer1.SetMotherboard(2, 1);
		System.out.println("Total price:"+customer1.getPrice());
		computer1=customer1.check();
		System.out.println(computer1.getDesc());
		government.check(computer1,6);
		
	}	
}
