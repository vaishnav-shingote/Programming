// Input : my name is amit
// Output : My Name Is Amit

// Input : my nAme is amIt
// Output : My Name Is Amit

import java.util.*;

class program740
{
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+", " ");

        str = str.toLowerCase();

        System.out.println(str);
        
    }
}