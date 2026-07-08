import java.util.Scanner;

class program262 {
    public static void main(String A[]) {
        Scanner sobj = new Scanner(System.in);
        String Arr = null;

        System.out.println("Enter String : ");
        Arr = sobj.nextLine();

        System.out.println("Lenght of string is " + Arr.length());
        char str[] = Arr.toCharArray();

        for (int i = 0; i < str.length; i++) {
            System.out.println(str[i]);
        }

    }
}
