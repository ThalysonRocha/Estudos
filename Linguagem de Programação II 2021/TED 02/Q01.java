package questoes;

import java.util.Scanner;

public class Q01{
	public static void main(String args[]) {
				
		Scanner input = new Scanner(System.in);
		
		//Variables
		double a, b, c;
		boolean valid = true;
		
		System.out.println("=====Triangle classification=====");
		
		
		System.out.println("\nWhat is the size of the first side of the triangle ?");
		a = input.nextDouble();
		
		System.out.println("\nWhat is the size of the second side of the triangle ?");
		b = input.nextDouble();
		
		System.out.println("\nWhats is the size of the last side of the triangle ?");
		c = input.nextDouble();
		
		input.close();
		
		
		//Checking if these sides can compose a triangle
		if(((a+b) < c) || ((a+c) < b) || ((b+c) < a)) {
			valid = false;
		}
		
		
		//Triangles Classification
		if(valid == true){ 
			if (a == b && b == c) {
			System.out.println("\nThis is a EQUILATERAL TRIANGLE !");
			}
		
			if (a != b && b != c && a != c) {
			System.out.println("\nThis is a SCALENE TRIANGLE !");
			}
		
			if ((a == b && b != c) || (a != b && b == c) || (a == c && b != c)) {
			System.out.println("\nThis is a ISOSCELES TRIANGLE !");
			}
		}
			
			
		if(valid == false) System.out.println("\nThis is not a Triangle.");
	}
}