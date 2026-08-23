import javax.swing.*;

public class program17
{
    public static void main(String[] args) {
        JFrame frame = new JFrame();

        JLabel label = new JLabel("Select Branch : ");

        JComboBox<String> branch = new JComboBox<>();

        branch.addItem("AI&DS");
        branch.addItem("Computer");
        branch.addItem("IT");
        branch.addItem("Mechanical");
        /*
            String[] branches = {
                "AI&DS",
                "Computer",
                "IT",
                "Mechanical"
            };

            JComboBox<String> branch = new JComboBox<>(branches);
        */

        JButton button = new JButton("Submit");

        label.setBounds(50, 30, 120, 30);
        branch.setBounds(50, 70, 200, 30);
        button.setBounds(100, 120, 100, 30);

        branch.addItem("Civil");
        branch.removeItem("Mechanical");

        button.addActionListener(e -> {
            String selected = branch.getSelectedItem().toString();

            JOptionPane.showMessageDialog(frame, "You selected : "+ selected);
        });
    
        frame.add(label);
        frame.add(branch);
        frame.add(button);

        frame.setSize(350, 200);
        frame.setLayout(null);

        frame.setTitle("ComboBox Example");

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}
