import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        //Declaración de variables
        float NOTA_MIN = 7.0f;
        float nota_eval_ind, nota_eval_final, nota_trabajo_grup, notafinal = 0.0f;
        float nota_eval_ind_p, nota_eval_final_p, nota_trabajo_grup_p = 0.0f;
        Scanner sc = new Scanner(System.in);
        
        //Registro de las notas
        System.out.println("Ingrese la nota de la evaluación individual");
        nota_eval_ind = sc.nextFloat();
        System.out.println("Ingrese la nota de la evaluación final");
        nota_eval_final = sc.nextFloat();
        System.out.println("Ingrese la nota del trabajo grupal");
        nota_trabajo_grup = sc.nextFloat();

        //Validación de las notas
        if (nota_eval_ind >= 0 && nota_eval_ind <= 10 && nota_eval_final >= 0 && nota_eval_final <= 10
                && nota_trabajo_grup >= 0 && nota_trabajo_grup <= 10) {
            nota_eval_ind_p = nota_eval_ind * 0.30f;
            nota_eval_final_p = nota_eval_final * 0.40f;
            nota_trabajo_grup_p = nota_trabajo_grup * 0.30f;
            notafinal = nota_eval_final_p + nota_eval_ind_p + nota_trabajo_grup_p;
        }
        else{
            System.out.println("Error: las notas deben estar entre 0 y 10");
        }
        
        System.out.println("La nota de la evaluación individual es: " + nota_eval_ind);
        System.out.println("La nota del trabajo en grupo es: " + nota_trabajo_grup);
        System.out.println("La nota de la evaluación final es: " + nota_eval_final);
        System.out.println("El promedio ponderado del estudiante es: " + notafinal);

        //Comprobación si el estudiante aprobo o no la unidad
        if (notafinal < NOTA_MIN) {
            System.out.println("El estudiane reprobo la unidad");
        }
        else{
            System.out.println("El estudiante aprobo la unidad");
        }

        //Comprobación del nivel de desempeño del estudiante
        if (notafinal >= 9 && notafinal <=10) {
            System.out.println("El nivel de desempeño del estudiante es Exelente");
        }
        else if (notafinal >= 8 && notafinal <= 8.99) {
            System.out.println("El nivel de desempeño del estudiante es Muy Bueno");
        }
        else if (notafinal >= 7 && notafinal <= 7.99) {
            System.out.println("El nivel de desempeño del estudiante es Bueno");
        }
        else if (notafinal >= 5 && notafinal <= 6.99) {
            System.out.println("El nivel de desempeño del estudiante es Regular");
        }
        else if (notafinal >= 0 && notafinal <= 4.99) {
            System.out.println("El nivel de desempeño del estudiante es Deficiente");
        }

        //Mensaje si el estudiante necesita refuerzo academico o si sobresale academicamente
        if (notafinal < 7) {
            System.out.println("El estudiante requiere refuerzo academico");
        }
        else if (notafinal >9) {
            System.out.println("¡Felicitaciones! Rendimiento sobresaliente");   
        }

        


        sc.close();
    } 

    

}
