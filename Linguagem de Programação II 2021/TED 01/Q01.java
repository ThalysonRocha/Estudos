import java.util.Scanner;
public class Q01 {

	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		
		//Declaração de variavel.
		double x;
		
		System.out.println("====Calculadora de peso lunar====\n");
		
		System.out.println("Digite seu peso em Kilogramas: ");
		x = input.nextDouble();
		
		//Calculando resultados
		x = x/9.8; //Transformando o peso na terra em massa
		x = x * 1.666; //Transformando a massa na estimativa de peso na lua.
		
		System.out.printf("\nSua massa na lua é %.3f Kg", x);
			
	}
}
