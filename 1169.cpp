import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;
 
public class Main {
 
    public static void main(String[] args) throws IOException {
        BufferedReader stdin = new BufferedReader(new InputStreamReader(System.in));
         
        int n = Integer.parseInt(stdin.readLine());
        for (int i = 0; i < n; i++) {
            int x = Integer.parseInt(stdin.readLine());
            BigInteger ans = new BigInteger("2");
            ans = ans.pow(x);
            ans = ans.divide(new BigInteger("12000"));
            System.out.println(ans + " kg");
             
        }
 
    }
 
}
