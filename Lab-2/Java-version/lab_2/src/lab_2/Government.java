package lab_2;

public class Government {
	int quality=0;
	public void check(Computer computer,int i) {
		//Intel cpu and Samsung motherboard can not work together 
		if(computer.getDesc().contains("Intel CPU")&&computer.getDesc().contains("Samsung Motherboard"))
			quality=1;
	if(quality==0) {
		computer.id=IDpoolSingleton.getInstance(i);
		System.out.println("You get your unique Id");
		System.out.println(computer.id);
	}
	else {
		System.out.println("This is a pool quality computer,You can get your refund");
	}
	}
}
