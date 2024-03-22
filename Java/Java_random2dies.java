/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
import java.util.Random;

public class Main
{
	public static void main(String[] args) {
		Random rand = new Random();
		int tries = 0;
		int die1;
		int die2;
		
		do{
		    die1 = rand.nextInt(6) + 1;
		    die2 = rand.nextInt(6) + 1;
		    System.out.println(die1 + " , " + die2);
		    tries++;
		}while(die1 != die2);
		
		System.out.println("It took you " + tries + " tries");
	}
}
