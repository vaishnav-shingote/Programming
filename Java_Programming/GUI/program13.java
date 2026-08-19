import java.awt.event.*;
import javax.swing.*;

class program13
{
    public static void main(String[] args) {
        JFrame frame = new JFrame();

        JLabel label1 = new JLabel();
        JLabel label2 = new JLabel();
        JLabel label3 = new JLabel();

        JTextField textField1 = new JTextField();
        JTextField textField2 = new JTextField();
        JTextField textField3 = new JTextField();

        JButton button = new JButton("Click Me !");

        frame.setTitle("Student Information");

        label1.setText("Name : ");
        label2.setText("Age : ");
        label3.setText("Branch : ");

        frame.setSize(600, 500);

        label1.setBounds(50, 50, 100, 50);
        label2.setBounds(50, 120, 100, 50);
        label3.setBounds(50, 190, 100, 50);

        textField1.setBounds(150, 50, 200, 50);
        textField2.setBounds(150, 120, 200, 50);
        textField3.setBounds(150, 190, 200, 50);

        button.setBounds(125, 300, 150, 50);

        button.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e)
            {
                String name = textField1.getText();
                String age = textField2.getText();
                String branch = textField3.getText();

                JOptionPane.showMessageDialog(frame, "Hello "+ name + "\n" + "Age : "+age+"\n"+ "Branch : "+branch);

                textField1.setText("");
                textField2.setText("");
                textField3.setText("");
            }
        });

        frame.add(label1);
        frame.add(label2);
        frame.add(label3);

        frame.add(textField1);
        frame.add(textField2);
        frame.add(textField3);

        frame.add(button);

        frame.setSize(500, 600);
        frame.setLayout(null);

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}