import java.util.Scanner;

public class Main{

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
	    System.out.print("size = ");
	    int size = scanner.nextInt();
        process(size);
    }

    public static void process(int size) {
        margins(size);
        first(size);
        second(size);
        margins(size);
    }

    public static void margins(int size) {
        System.out.print("+");
        for (int i = 1; i < size * 2 + 1; i++) {
            System.out.print("-");
        }
        System.out.println("+");
    }

    public static void first(int size) {
        int spaces = size - 1;
        int sign = 0, line = 0;
        do {
            if (spaces > 0) {
                System.out.print("|");
                for (int i = 0; i <= spaces * 2 - 1; i++) {
                    System.out.print(" ");
                    if (i == spaces - 1) {
                        System.out.print("/");
                        if (line % 2 != 0) {
                            for (int j = 0; j < sign; j++) {
                                System.out.print("-");
                            }
                        } else {
                            for (int j = 0; j < sign; j++) {
                                System.out.print("=");
                            }
                        }
                        System.out.print("\\");
                    }
                }
            }
            if (spaces == 0) {
                System.out.print("|");
                System.out.print("<");
                if (line % 2 != 0) {
                    for (int j = 0; j < sign; j++) {
                        System.out.print("-");
                    }
                } else {
                    for (int j = 0; j < sign; j++) {
                        System.out.print("=");
                    }
                }
                System.out.print(">");
            }
            spaces--;
            sign += 2;
            line++;
            System.out.println("|");
        } while (spaces >= 0);
    }

    public static void second(int size) {
        int spaces = 1;
        int sign = size * 2 - 4;
        int line = size;
        while (spaces != size) {
            System.out.print("|");
            for (int i = 0; i < spaces; i++) {
                System.out.print(" ");
                if (i == spaces - 1) {
                    System.out.print("\\");
                    if (line % 2 != 0) {
                        for (int j = 0; j < sign; j++) {
                            System.out.print("-");
                        }
                    } else {
                        for (int j = 0; j < sign; j++) {
                            System.out.print("=");
                        }
                    }
                    System.out.print("/");
                    for (int z = 0; z < spaces; z++) {
                        System.out.print(" ");
                    }
                }
            }
            System.out.println("|");
            spaces++;
            line++;
            sign -= 2;
        }
    }
}


