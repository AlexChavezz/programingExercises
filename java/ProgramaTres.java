
/*
    Una empresa de importaciones requiere calcular el monto de compra de productos a pagar por parte del cliente
    , el ingreso de productos terminara cuando se ingrese una cantidad igual a 0 
*/
import java.util.Scanner;

class ProgramaTres {
    Scanner scanner = new Scanner(System.in);

    public int getRes() {
        int i = 1, res = 0;
        int value;
        do {
            System.out.print("Ingresa el precio del producto [" + i + "]: ");
            value = scanner.nextInt();
            res = res + value;
            i++;
        } while (value != 0);
        return res;
    }

    public static void main(String args[]) {
        ProgramaTres object = new ProgramaTres();
        int response = object.getRes();
        System.out.println("El total es: " + response);
    }
}