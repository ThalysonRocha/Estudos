package Desafio;
import java.util.Scanner;

public class Principal {

	public static void main(String[] args) {
		
		//Variaveis para determinar parametros do objeto.
		float a, b, c;
		
		
		Scanner input = new Scanner(System.in);
			
		System.out.println("Qual a altura da moldura ?");
		a = input.nextFloat();
		
		System.out.println("Qual o comprimento da moldura ?");
		b = input.nextFloat();
		
		System.out.println("Qual a espessura da moldura ?");
		c = input.nextFloat();
		
		input.close();
		
		Moldura m1 = new Moldura(a, b, c);//Instanciação do objeto, com os parametros solicitados anteriormente.
		
		
		
		System.out.printf("A área da moldura é igual: %.2f cm", m1.calcularArea());		
				
	}

}
