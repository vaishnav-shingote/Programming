import java.awt.event.*;
import javax.swing.*;

class program9
{
    public static void main(String[] args) {
        JFrame frame = new JFrame();

        JButton button = new JButton("Click Me");

        button.setBounds(150, 100, 120, 40);

        button.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e)
            {
                System.out.println("Button was Clicked !");
            }
        });

        frame.add(button);

        frame.setSize(500, 400);
        frame.setLayout(null);

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
        
    }
}