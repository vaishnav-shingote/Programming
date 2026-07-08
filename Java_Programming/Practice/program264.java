import java.util.Scanner;

class program262 {
    public static void main(String A[]) {
        Scanner sobj = new Scanner(System.in);
        String Arr = null;

        System.out.println("Enter String : ");
        Arr = sobj.nextLine();

        for (int i = 0; i < Arr.length(); i++) {
            System.out.println(Arr.charAt(i));
        }

    }
}
