// https://www.codewars.com/kata/5512a0b0509063e57d0003f5/train/java


import java.util.Scanner;

public class AplusB {
    public static byte sum(byte a, byte b) {
        return (byte) (a + b);
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        byte a = scan.nextByte();
        byte b = scan.nextByte();
        scan.close();
        System.out.print(sum(a, b));
    }
}
