import java.util.Scanner;

public class ejercicio076 {
    public static void main(String[] args) {
        int TRAMO_1 = 10000;
        int TRAMO_2 = 30000;
        int TRAMO_3 = 60000;
        float TASA_1 = 0.10f;
        float TASA_2 = 0.15f;
        float TASA_3 = 0.20f;
        float TASA_4 = 0.30f;

        float ingreso = 0.0f;
        float impuesto1 = 0.0f;
        float impuesto2 = 0.0f;
        float impuesto3 = 0.0f;
        float impuesto4 = 0.0f;
        float impuesto_total = 0.0f;
        float minimo = 0.0f;

        Scanner sc = new Scanner(System.in);

        System.out.println("Ingrese el ingreso anual");
        ingreso = sc.nextFloat();

        if (ingreso < 0) {
            System.out.println("Error: el ingreso no puede ser negativo");

        }
        else{
            if (ingreso <= TRAMO_1) {
                impuesto1 = ingreso *TASA_1;
            }
            else if (ingreso <= TRAMO_2) {
                impuesto1 = ingreso * TASA_1;
                impuesto2 = (ingreso - TRAMO_1) * TASA_2;
                
            }
            else if (ingreso <= TASA_3) {
                impuesto1 = ingreso * TASA_1;
                impuesto2 = (TRAMO_2 - TASA_1) *TASA_2;
                impuesto3 = (ingreso - TRAMO_2) * TASA_3;

            }
            else{
                impuesto1 = ingreso * TASA_1;
                impuesto2 = (TRAMO_2 - TASA_1) * TASA_2;
                impuesto3 = (TRAMO_3 - TRAMO_2) *TASA_3;
                impuesto4 = (ingreso - TRAMO_3) * TASA_4;
            }

            impuesto_total = impuesto1 + impuesto2 + impuesto3 + impuesto4;

            minimo = ingreso;

            if (impuesto1 < minimo) {
                minimo = impuesto1;
            }
            if (impuesto2 < minimo) {
                minimo = impuesto2;
            }
            if (impuesto3 < minimo) {
                minimo = impuesto3;
            }
            if (impuesto4 < minimo) {
                minimo = impuesto4;
            }
            if (impuesto_total < minimo) {
                minimo = impuesto_total;
            }

            System.out.println("El impuesto del tramo 1 es " + impuesto1);
            System.out.println("El impuesto del tramo 2 es " + impuesto2);
            System.out.println("El impuesto del tramo 3 es " + impuesto3);
            System.out.println("El impuesto del tramo 4 es " + impuesto4);
            System.out.println("El impuesto total es " + impuesto_total);
            System.out.println("El valor minimo de las variables utilizadas es " + minimo);
        }

        sc.close();


        
    }
}
