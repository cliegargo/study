// https://www.codewars.com/kata/55a70521798b14d4750000a4/train/java


import java.util.Scanner;

public class ReturningStrings {
    public static String greet(String name) {
        return "Hello, " + name + " how are you doing today?";
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        String name = scan.nextLine();
        scan.close();

        System.out.println(greet(name));
    }
}