package myPackage;
import java.util.Scanner;

import pack.*;

class calc{
	public static void main(String args[]){
		hello obj = new hello();
		Scanner s = new Scanner(System.in);
		System.out.println("Enter two number: ");
		int a = s.nextInt();
		int b = s.nextInt();
		
		System.out.println("Choose the operation: \n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
		int ch = s.nextInt();
		switch(ch){
			case 1: obj.sum(a, b);
				break;
			case 2: obj.sub(a, b);
				break;
			case 3: obj.mul(a, b);
				break;
			case 4: obj.div(a, b);
				break;
			default: System.out.println("Wrong Input");
				break;
		}
	}
}