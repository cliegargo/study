// https://www.codewars.com/kata/52c31f8e6605bcc646000082/train/java


import java.util.Scanner;

public class TwoSum {
    public static int[] twoSum(int[] numbers, int target) {
        int[] index = new int[2];

        for(int i = 0; i < numbers.length; ++i) {
            for(int j = 0; j < i; ++j) {
                if((numbers[i] + numbers[j]) == target) {
                    index[0] = j;
                    index[1] = i;
                }
            }
        }

        return index;
    }

    public static void main(String[] arse) {
        Scanner scan = new Scanner(System.in);
        
        System.out.print("Input array size: ");
        int lim = scan.nextInt();
        int[] numbers = new int[lim];
        
        for(int i = 0; i < lim; ++i) {
            System.out.print("Input: ");
            numbers[i] = scan.nextInt();
        }
        
        System.out.print("Input target: ");
        int target = scan.nextInt();

        scan.close();
        int[] output = twoSum(numbers, target);
        for(int i : output) {
            System.out.print("i: " + i);
        }
    }
}