// https://www.codewars.com/kata/50654ddff44f800200000004/train/java


import java.util.Scanner;

public class Multiply {
    public static Double multiply(Double a, Double b) {
        return a * b;
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        Double a = scan.nextDouble();
        Double b = scan.nextDouble();
        scan.close();
        System.out.print(multiply(a, b));

    }
}