// https://www.codewars.com/kata/568dcc3c7f12767a62000038/train/java


import java.util.Scanner;

public class L1SetAlarm {
    public static boolean setAlarm(boolean employed, boolean vacation) {
        return (employed == true && vacation == false) ? true : false;
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        boolean employed = scanner.nextBoolean();
        boolean vacation = scanner.nextBoolean();
        scanner.close();

        System.out.println(setAlarm(employed, vacation));
    }
}
