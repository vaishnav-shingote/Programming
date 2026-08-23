import javax.swing.*;

class program19
{
    public static void main(String[] args)
    {
        JFrame frame = new JFrame();

        JButton button = new JButton("exit");
        //JOptionPane.showMessageDialog(frame, "Registration successfully", "Success", JOptionPane.INFORMATION_MESSAGE);
        //JOptionPane.showMessageDialog(frame, "Please enter your age.", "Warning", JOptionPane.WARNING_MESSAGE);
        //JOptionPane.showMessageDialog(frame, "Invalid password!", "Error", JOptionPane.ERROR_MESSAGE);
        //JOptionPane.showConfirmDialog(frame, "save changes?", "save", JOptionPane.YES_NO_CANCEL_OPTION);

        /*
        String input = JOptionPane.showInputDialog("Enter number :");
        int number = Integer.parseInt(input);
        JOptionPane.showMessageDialog(null, "Number = "+number);
        */

        button.addActionListener(e ->
            {
                int result = JOptionPane.showConfirmDialog(frame, "Do you want ot exit?", "Exit", JOptionPane.YES_NO_CANCEL_OPTION);
                if(result == JOptionPane.YES_OPTION)
                {
                    System.exit(0);
                }
            }
        );

        button.setBounds(50, 50, 100, 50);

        frame.setSize(300, 400);

        frame.add(button);

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);   
    }
}