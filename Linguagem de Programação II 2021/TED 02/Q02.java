package questoes;

import java.util.Scanner;

public class Q02 {
	
	public static void main(String args[]) {
		
		Scanner input = new Scanner(System.in);
		
		//Variables
		double weight;
		String name, lastname, category;
		
		
		System.out.println("=====Classifying Fighters=====");
		
		System.out.println("\nFirst Name: ");
		name = input.nextLine().toUpperCase();
		
		System.out.println("\nLast Name: ");
		lastname = input.nextLine().toUpperCase();
		
		System.out.println("\nWeight(Kg): ");
		weight = input.nextDouble();
		
		input.close();
		
		//Classifying
		if(weight < 65) {category = "Featherweight";}
		if(weight >= 65 && weight < 72) {category = "Lightweight";}
		if(weight >= 72 && weight < 79) {category = "Nimbleweight";}
		if(weight >= 79 && weight < 86) {category = "Welterweight";}
		if(weight >= 86 && weight < 93) {category = "Middleweight";}
		if(weight >= 93 && weight < 100) {category = "Light Heavyweight";}
		else {category = "Heavyweight";}
		
		//Result
		System.out.printf("\nThe fighter %s %s weighs %.3f Kg and fits into the %s category", name, lastname, weight, category.toUpperCase());
		
		
	}
}
