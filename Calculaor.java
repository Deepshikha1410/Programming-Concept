//imple Calculator:
`// Menu:
// Addition
// Subtraction
// Multiplication
// Division
// Exit
// Functionality:
// Prompt the user to enter two numbers for each operation.
// Perform the chosen calculation and display the result.
// Handle division by zero gracefully (e.g., display an error message).
// Validate user input to ensure they enter valid numbers (integers or doubles).


import java.util.scanner;

public class Calculaor {
    public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    int choice;

    do {
        System.out.println("\nMenu:");
        System.out.println("1. Addition");
        System.out.println("2. Subtraction");
        System.out.println("3. Multiplication");
        System.out.println("4. Division");
        System.out.println("5. Exit");
        System.out.print("Enter your choice: ");

            while (!scanner.hasNextInt()) {
                System.out.println("Invalid input. Please enter a number.");
                scanner.next(); // Consume the non-integer input
            }
            choice = scanner.nextInt();

            if (choice >= 1 && choice <= 4) {
                System.out.print("Enter the first number: ");
                double num1 = scanner.nextDouble();

                System.out.print("Enter the second number: ");
                double num2 = scanner.nextDouble();

                switch (choice) {
                    case 1:
                        System.out.println(num1 + " + " + num2 + " = " + (num1 + num2));
                        break;
                    case 2:
                        System.out.println(num1 + " - " + num2 + " = " + (num1 - num2));
                        break;
                    case 3:
                        System.out.println(num1 + " * " + num2 + " = " + (num1 * num2));
                        break;
                    case 4:
                        if (num2 == 0) {
                            System.out.println("Division by zero is not allowed.");
                        } else {
                            System.out.println(num1 + " / " + num2 + " = " + (num1 / num2));
                        }
                        break;
                }
            } else if (choice == 5) {
                System.out.println("Exiting calculator...");
            } else {
                System.out.println("Invalid choice. Please try again.");
            }
        } while (choice != 5);

        scanner.close();
    }
}
