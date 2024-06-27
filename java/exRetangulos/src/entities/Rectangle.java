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
public class Rectangle {
    public double width;
    public double height;
    
    public double area(){
        return width * height;
    }
    public double perimeter(){
        return 2 * (height + width);
    }
    public double diagonal(){
        return Math.sqrt( (width * width) + (height * height) );
    }
    public String toString(){
        return "AREA: " + String.format("%.2f", area()) + 
        "\nPERIMETER: " + String.format("%.2f", perimeter()) + 
        "\nDIAGONAL: " + String.format("%.2f", diagonal()) ;
    }
    
}
