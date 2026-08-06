public class amount {
    static void withdraw(double amount) {
        if (amount <= 0) {
            throw new InvalidAmountException("Amount must be greater than zero.");
        }
        System.out.println("Withdrawal successful.");
    }

    public static void main(String[] args) {
        withdraw(-100);
    }
}
