/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/

import java.io.PrintStream;

public class Main
{
	public static void main(String[] args) {
	    
		for (int i = 1; i <= 5; i++) {
          for (int j = 1; j <= i-1; j++) {
            System.out.print(" ");
            }
           for (int j = 1; j <= 11-2*i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }     
	}
}
