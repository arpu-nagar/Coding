import java.util.*;

abstract class lol
{
    int a,b;
    lol(){
        a=1;
        b=2;
    }
   abstract void m();

    void lmao(int a,int b){
        System.out.println(a+b);
    }
}

class m1 extends lol 
{
    m1(){
    super();
    //System.out.println(a+b);
    }

    void m(){
        System.out.println("Heya");
    }

    void lmao(){
        System.out.println("Heyaaa");
    }


}

public class Abs 
{
    public static void main(String args[]){
        lol ab;
        ab = new m1();
       ab.m();
        ab.lmao(2,3);
    }
}