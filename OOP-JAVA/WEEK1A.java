/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package week1a;

/**
 *
 * @author anyamu
 */
//import the scanner library class
import java.util.Scanner;

public class WEEK1A {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        System.out.println("Hello World");
        //import the library scanner
        //gets input from the user 
        Scanner input = new Scanner(System.in);
        //promt the user for a response
        System.out.println("Say hello back");
        //whatever the user types is stored in the string variable answer
        String answer = input.nextLine();
        //print what the user typed in 
        System.out.println(answer);
        
    }
    
}
