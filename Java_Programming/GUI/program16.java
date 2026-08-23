import javax.swing.*;

class program16
{
    public static void main(String[] args) {
        JFrame frame = new JFrame();

        JLabel label = new JLabel("Select Gender : ");

        JRadioButton male = new JRadioButton("male");
        JRadioButton female = new JRadioButton("female");
        JRadioButton other = new JRadioButton("Female");

        JButton button = new JButton("Submit");

        ButtonGroup group = new ButtonGroup();

        group.add(male);
        group.add(female);
        group.add(other);

        label.setBounds(50, 10, 100, 20);

        male.setBounds(50, 50, 100, 30);
        female.setBounds(50, 90, 100, 30);
        other.setBounds(50, 130, 100, 30);

        button.setBounds(50, 170, 100, 30);

        frame.add(label);

        frame.add(male);
        frame.add(female);
        frame.add(other);

        frame.add(button);

        button.addActionListener(e -> {
            if(male.isSelected())
        {
            System.out.println("Male selected");
        }
        else if(female.isSelected())
        {
            System.out.println("Female selected");
        }
        else if(other.isSelected())
        {
            System.out.println("Other selected");
        }    
        });

        frame.setSize(350, 250);
        frame.setLayout(null);

        frame.setTitle("Radio Button Example");

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}

