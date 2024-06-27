package compraDolar;

import java.util.Locale;
import java.util.Scanner;

import util.CurrencyConverter;

public class Program {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);

		System.out.println("What is the dollar price? ");
		double value = sc.nextDouble();
		System.out.println("How many dollars will be bought? ");
		double dollarsBought = sc.nextDouble();
		double finalValue = CurrencyConverter.finalPrice(value, dollarsBought);
		System.out.println("Amount to be paid in reais = " + finalValue);

		sc.close();

	}

}
