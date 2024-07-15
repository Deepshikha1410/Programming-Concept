public class PrimeNumbers {

    public static void main(String[] args) {

        System.out.println("Prime numbers between 1 and 100:");

        // Loop through numbers from 2 to 100 (1 is not prime)
        for (int num = 2; num <= 100; num++) {
            if (isPrime(num)) {
                System.out.print(num + " ");
            }
        }
    }

    // Function to check if a number is prime
    public static boolean isPrime(int num) {
        if (num <= 1) {
            return false;
        }
        // Check divisibility only up to the square root of num
        for (int i = 2; i <= Math.sqrt(num); i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }
}
