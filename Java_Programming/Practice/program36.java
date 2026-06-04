import java.util.Scanner;

class program36 {
    public static void main(String A[]) {
        Scanner sobj = new Scanner(System.in);

        String sName = null;
        int iAge = 0;
        float fMarks = 0.0f;

        System.out.print("Enter your Name : ");
        sName = sobj.nextLine();

        System.out.print("Enter your Age : ");
        iAge = sobj.nextInt();

        System.out.print("Enter your Marks : ");
        fMarks = sobj.nextFloat();

        System.out.println("------------------------");
        System.out.println("Name : " + sName);
        System.out.println("Age : " + iAge);
        System.out.println("Marks : " + fMarks);

        sobj.close();
    }
}
