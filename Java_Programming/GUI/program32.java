import java.awt.*;
import javax.swing.*;

public class program32 {

    public static void main(String[] args) {

        JFrame frame =
                new JFrame("Student Management");

        // =========================
        // HEADER
        // =========================

        JPanel header =
                new JPanel(new FlowLayout());

        JLabel title =
                new JLabel("STUDENT MANAGEMENT");

        JButton logout =
                new JButton("Logout");

        header.add(title);
        header.add(logout);


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

        JButton dashboard =
                new JButton("Dashboard");

        JButton students =
                new JButton("Students");

        JButton courses =
                new JButton("Courses");

        JButton settings =
                new JButton("Settings");

        sidebar.add(dashboard);
        sidebar.add(
                Box.createVerticalStrut(10)
        );

        sidebar.add(students);
        sidebar.add(
                Box.createVerticalStrut(10)
        );

        sidebar.add(courses);
        sidebar.add(
                Box.createVerticalStrut(10)
        );

        sidebar.add(settings);


        // =========================
        // MAIN CONTENT
        // =========================

        JPanel content =
                new JPanel(
                        new FlowLayout()
                );

        content.add(
                new JButton("Add Student")
        );

        content.add(
                new JButton("Update Student")
        );

        content.add(
                new JButton("Delete Student")
        );


        // =========================
        // FOOTER
        // =========================

        JPanel footer =
                new JPanel(new FlowLayout());

        footer.add(
                new JLabel("Status: Ready")
        );


        // =========================
        // FRAME
        // =========================

        frame.setLayout(
                new BorderLayout()
        );

        frame.add(
                header,
                BorderLayout.NORTH
        );

        frame.add(
                sidebar,
                BorderLayout.WEST
        );

        frame.add(
                content,
                BorderLayout.CENTER
        );

        frame.add(
                footer,
                BorderLayout.SOUTH
        );


        frame.setSize(700, 500);

        frame.setDefaultCloseOperation(
                JFrame.EXIT_ON_CLOSE
        );

        frame.setLocationRelativeTo(null);

        frame.setVisible(true);
    }
}