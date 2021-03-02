import java.util.Scanner;
public class Q02 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		//Declaração de variáveis
		double comprimento, angulo, resultado;
		
				
		System.out.println("====Alcance da escada====\n");
		
		System.out.println("Qual o comprimento da escada em pés ?");
		comprimento = input.nextDouble();
		
		System.out.println("\nQual o angulo formado pela escada em relação ao solo em graus ?");
		angulo = input.nextDouble();
		
		
		//Convertendo valores
		angulo = Math.toRadians(angulo);  //Angulo de Graus para Radianos.
		comprimento = (comprimento * 0.305);  //Comprimento de Pés para Metros.
		
		
		//Calculando o resultado
		resultado = comprimento * Math.sin(angulo);
		
		
		//Exibindo o resultado
		System.out.printf("\nA altura que essa escada alçanca é de %.2f m", resultado);
		
	}

}
