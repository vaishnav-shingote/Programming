import java.awt.*;
import javax.swing.*;

public class program34 {

    public static void main(String[] args) {

        JFrame frame =
                new JFrame("Student Registration");

        // =========================
        // FRAME LAYOUT
        // =========================

        frame.setLayout(
                new BorderLayout()
        );


        // =========================
        // HEADER
        // =========================

        JPanel header =
                new JPanel(new FlowLayout());

        JLabel title =
                new JLabel(
                        "STUDENT REGISTRATION"
                );

        header.add(title);

        frame.add(
                header,
                BorderLayout.NORTH
        );


        // =========================
        // SIDEBAR
        // =========================

        JPanel sidebar =
                new JPanel();

        sidebar.setLayout(
                new BoxLayout(
                        sidebar,
                        BoxLayout.Y_AXIS
                )
        );

        sidebar.add(
                new JButton("Dashboard")
        );

        sidebar.add(
                Box.createVerticalStrut(10)
        );

        sidebar.add(
                new JButton("Students")
        );

        sidebar.add(
                Box.createVerticalStrut(10)
        );

        sidebar.add(
                new JButton("Courses")
        );

        sidebar.add(
                Box.createVerticalStrut(10)
        );

        sidebar.add(
                new JButton("Exams")
        );

        sidebar.add(
                Box.createVerticalStrut(10)
        );

        sidebar.add(
                new JButton("Settings")
        );

        frame.add(
                sidebar,
                BorderLayout.WEST
        );


        // =========================
        // FORM
        // =========================

        JPanel form =
                new JPanel(
                        new GridBagLayout()
                );

        GridBagConstraints gbc =
                new GridBagConstraints();

        gbc.insets =
                new Insets(5, 5, 5, 5);


        // NAME

        gbc.gridx = 0;
        gbc.gridy = 0;

        form.add(
                new JLabel("Name:"),
                gbc
        );

        gbc.gridx = 1;
        gbc.gridy = 0;

        form.add(
                new JTextField(20),
                gbc
        );


        // EMAIL

        gbc.gridx = 0;
        gbc.gridy = 1;

        form.add(
                new JLabel("Email:"),
                gbc
        );

        gbc.gridx = 1;
        gbc.gridy = 1;

        form.add(
                new JTextField(20),
                gbc
        );


        // BRANCH

        gbc.gridx = 0;
        gbc.gridy = 2;

        form.add(
                new JLabel("Branch:"),
                gbc
        );

        String[] branches = {
                "AI & DS",
                "Computer",
                "IT",
                "ENTC"
        };

        JComboBox<String> branch =
                new JComboBox<>(branches);

        gbc.gridx = 1;
        gbc.gridy = 2;

        form.add(
                branch,
                gbc
        );


        // GENDER

        gbc.gridx = 0;
        gbc.gridy = 3;

        form.add(
                new JLabel("Gender:"),
                gbc
        );

        JRadioButton male =
                new JRadioButton("Male");

        JRadioButton female =
                new JRadioButton("Female");

        ButtonGroup genderGroup =
                new ButtonGroup();

        genderGroup.add(male);
        genderGroup.add(female);

        JPanel genderPanel =
                new JPanel(
                        new FlowLayout()
                );

        genderPanel.add(male);
        genderPanel.add(female);

        gbc.gridx = 1;
        gbc.gridy = 3;

        form.add(
                genderPanel,
                gbc
        );


        // REGISTER BUTTON

        JButton register =
                new JButton("Register");

        gbc.gridx = 1;
        gbc.gridy = 4;

        form.add(
                register,
                gbc
        );


        frame.add(
                form,
                BorderLayout.CENTER
        );


        // =========================
        // FOOTER
        // =========================

        JPanel footer =
                new JPanel(
                        new FlowLayout()
                );

        footer.add(
                new JLabel("Status: Ready")
        );

        frame.add(
                footer,
                BorderLayout.SOUTH
        );


        // =========================
        // FRAME SETTINGS
        // =========================

        frame.setSize(700, 500);

        frame.setDefaultCloseOperation(
                JFrame.EXIT_ON_CLOSE
        );

        frame.setLocationRelativeTo(null);

        frame.setVisible(true);
    }
}