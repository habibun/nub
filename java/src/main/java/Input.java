/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author habibun
 */
import java.util.Scanner;

public class Input {
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter username");
        
        String username = scanner.nextLine();
        System.out.println("Your username is " + username);
    }
}
