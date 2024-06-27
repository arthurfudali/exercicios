package dadosEsfera;

import java.util.Locale;
import java.util.Scanner;

import util.Calculator;

public class Program {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Digite o raio da esfera: ");
		double radius = sc.nextDouble();
		double circumference = Calculator.circumference(radius);
		double volume = Calculator.volume(radius);
		System.out.println("Circumference: " + circumference);
		System.out.println("Volume: " + volume);
		System.out.println("PI value: " + Calculator.PI);
		
		
		
		sc.close();

	}

}
