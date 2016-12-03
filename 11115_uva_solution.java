/*
    In the name ALLAH
*/

import java.util.*;
import java.io.*;
import java.math.BigDecimal;
import java.math.BigInteger;

/**
 *
 * @author shuvo
*/

public class Main {
    public static void main (String [] args) {
        Scanner cin = new Scanner (System.in);
        while (true) {
            BigInteger x = cin.nextBigInteger();
            int y = cin.nextInt();
            if (x.equals(BigInteger.ZERO) && y == 0) {
                break;
            }
            BigInteger z = x.pow(y);
            System.out.println (z);
        }
    }
}
