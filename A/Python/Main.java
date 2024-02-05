import java.util.Scanner;

public
class Main
{
public
    static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);

        int capacity = 0;
        int oldPassenger = 0;

        int n = scanner.nextInt();
        int[] a = new int[n];
        int[] b = new int[n];

        for (int i = 0; i < n; ++i)
        {
            a[i] = scanner.nextInt();
            b[i] = scanner.nextInt();

            oldPassenger = oldPassenger - a[i] + b[i];
            if (capacity < oldPassenger)
            {
                capacity = oldPassenger;
            }
        }

        System.out.println(capacity);
    }
}
