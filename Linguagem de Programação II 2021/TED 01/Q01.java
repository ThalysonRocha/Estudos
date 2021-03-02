import java.util.Scanner;
public class Q01 {

	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		
		double x;
		
		System.out.println("====Calculadora de massa lunar====\n");
		
		System.out.println("Digite seu peso em Kilogramas: ");
		x = input.nextDouble();
		
		x = x/9.8;
		x = x * 1.666;
		
		System.out.printf("\nSua massa na lua é %.3f Kg", x);
			
		
	}
}
