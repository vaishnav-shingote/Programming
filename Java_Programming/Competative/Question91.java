
//Write a program to find the sum of all even numbers up to N.
import java.util.Scanner;

class SumofEven {
    private int number;

    public SumofEven(int number) {
        this.number = number;
    }

    public int getSumofEvenNumbers() {
        int sum = 0;

        for (int i = 2; i <= number; i += 2) {
            sum += i;
        }
        return sum;
    }
}

class Question91 {
    public static void main(String A[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter N : ");
        int number = sobj.nextInt();

        SumofEven eobj = new SumofEven(number);

        int result = eobj.getSumofEvenNumbers();

        System.out.println("Sum of even numbers up to " + number + " is : " + result);
    }
}
