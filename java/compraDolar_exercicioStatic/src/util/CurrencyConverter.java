package util;

public class CurrencyConverter {

	public static final double IOF = 0.06;

	public static double finalPrice(double value, double dollarsBought) {
		return dollarsBought * value * (1 + IOF);
	}
}
