/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author habibun
 */
public class Test {
    public static void main(String[] args)
    {
        ThreadDemo td1 = new ThreadDemo("Thread-1");
        td1.start();
        
        ThreadDemo td2 = new ThreadDemo("Thread-2");
        td2.start();
    }
}
