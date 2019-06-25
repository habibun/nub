/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author habibun
 */
public class Test1 {
    public int x = 10;
    public static void main(String[] args)
    {
//        Test2 obj = new Test2();
//        System.out.println(obj.x);
        
//        myMethod();
        
        Test1 ob = new Test1();
        ob.getName();
    }
    
    static void myMethod()
    {
        System.out.println("Yes");
    }
    
    public void getName()
    {
        System.out.println("John");
    }
}
