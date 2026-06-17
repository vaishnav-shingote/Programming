//Write a program to display the grade of a studend based on marks.

class Question87 {
    public static void main(String A[]) {
        Logic obj = new Logic();
        obj.displayGrade(82);
    }
}

class Logic {
    void displayGrade(int iMarks) {
        if (iMarks < 0) {
            System.out.println("Invalid Marks");
        }

        if (iMarks < 35) {
            System.out.println("Result : F");
        } else if (iMarks >= 35 && iMarks < 55) {
            System.out.println("Grade : C");
        } else if (iMarks >= 55 && iMarks < 75) {
            System.out.println("Grade : B");
        } else if (iMarks >= 75 && iMarks < 85) {
            System.out.println("Grade : A");
        } else {
            System.out.println("Grade : O");
        }
    }
}
