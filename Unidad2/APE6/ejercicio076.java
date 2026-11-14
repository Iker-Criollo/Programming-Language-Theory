import java.util.Scanner;

public class ejercicio076 {
    public static void main(String[] args) {
        int a = 0;

        // Nota: Para usar 'when', debes usar el tipo envoltorio 'Integer' en lugar de
        // 'int' primitivo
        switch ((Integer) a) {
            case Integer n when (n > 0 && n < 10) -> System.out.println("Está entre 1 y 9");
            case Integer n when (n >= 10) -> System.out.println("Es 10 o mayor");
            default -> System.out.println("Es menor o igual a 0");
        }


        
    }
}
