package Stack;

import java.util.Stack;

public class stackBracket {

  private char getReversedBracket(char bracket) {
    switch (bracket) {
      case ')':
        return '(';
      case ']':
        return '[';
      case '}':
        return '{';
      default:
        return '\0';
    }
  }

  private boolean isLeftBracket(char bracket) {
    return bracket == '[' || bracket == '(' || bracket == '{';
  }

  public boolean isValid(String bracket_string) {
    Stack<Character> s = new Stack<>();

    for (int i = 0; i < bracket_string.length(); i++) {
      char bracket = bracket_string.charAt(i);
      char rev = getReversedBracket(bracket);
      if (isLeftBracket(bracket)) {
        s.push(bracket);
      } else {
        if (s.isEmpty() || s.pop() != rev) {
          return false;
        }
      }
    }
    return s.isEmpty();
  }

  public static void main(String[] args) {
    stackBracket checker = new stackBracket();
    String bracket_string = "[(({}))]()";
    boolean result = checker.isValid(bracket_string);
    System.out.println(result ? "Is valid" : "Is invalid");

  }

}
