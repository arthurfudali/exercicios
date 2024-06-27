/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package entities;

/**
 *
 * @author fatec-dsm1
 */
public class Employee {
    public String name;
    public double grossSalary;
    public double tax;
    
    public double netSalary(){
        return grossSalary - tax;
    }
    public void increaseSalary(){
        
    }
    public String toString(){
        return "EMPLOYEE: " + name + ", $ " + String.format("%.2f", netSalary());
    }
    
}
