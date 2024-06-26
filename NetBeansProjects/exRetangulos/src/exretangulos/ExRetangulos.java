/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exretangulos;

import java.util.Locale;
import java.util.Scanner;
import entities.Rectangle;
/**
 *
 * @author fatec-dsm1
 */
public class ExRetangulos {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        Rectangle rectangle = new Rectangle();
        
        System.out.println("Enter rectangle width and height: ");
        System.out.print("Width: ");
        rectangle.width = sc.nextDouble();
        
        System.out.print("Height: ");
        rectangle.height = sc.nextDouble();
        System.out.println();
        System.out.print(rectangle);
        
        
        sc.close();
    }
    
}
