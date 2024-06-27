/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exfuncionario;

import entities.Employee;
import java.util.Locale;
import java.util.Scanner;

/**
 *
 * @author fatec-dsm1
 */
public class ExFuncionario {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        Employee employee = new Employee();
        
        System.out.print("Name: ");
        employee.name = sc.nextLine();
        System.out.println();
        System.out.print("Gross salary: ");
        employee.grossSalary = sc.nextDouble();
        System.out.println();
        System.out.print("Tax: ");
        employee.tax = sc.nextDouble();
        System.out.println();
        System.out.println(employee);
        System.out.print("Which percentage to increase salary? ");
        
        
        sc.close();
    }
    
}
