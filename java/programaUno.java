/*
    Desarrolla un programa que crea un vector de longitud N con numeros enteros positivos 
    y negativos, apartir de este vector generar un nuevo vector binario, donde los numeros negativos sean 0
    y los positivos sean 1;
*/
import java.util.Scanner;

class ProgramaUno {

    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.print("Ingresa las dimensiones del array: ");
        int size = scan.nextInt();
        int array[] = new int[size];
        int arrayBinario[] = new int[size]; 

        for( int i = 0; i < array.length; i++ ){
            System.out.print("Ingresa el valor ["+i+"]: ");
            array[i] = scan.nextInt();
            if( array[i] >= 0){
                arrayBinario[i] = 1;
            }  else{
                arrayBinario[i] = 0;
            }
        }
        for(int i = 0; i< arrayBinario.length; i++){
            System.out.println(arrayBinario[i]);
        }
    }
}