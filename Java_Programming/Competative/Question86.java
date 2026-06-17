//Write a program to check whether a given year is leap year or not.

class Question86 {
    public static void main(String A[]) {
        Logic obj = new Logic();
        obj.checkLeapYear(2024);
    }
}

class Logic {
    void checkLeapYear(int year) {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
            System.out.println("Leap year");
        } else {
            System.out.println("Not a Leap Year");
        }
    }
}
