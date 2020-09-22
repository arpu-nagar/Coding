import java.util.*;

class A
{
    int a,b;
    A(){
        a = b=0;
    }

     void m1(){
        System.out.println("m1 in A");
    }

     void m2(){
        System.out.println("m2 in A");
    }
}

class B extends A
{
    int b,c;
    B(){
        super();
        b=c=1;
    }

     void m2(){
        System.out.println("m2 in B");
    }

     void m3(){
        System.out.println("m3 in B");
    }
}

class C extends B
{
    int c,a;
    C(){
        super();
        c=a=2;
    }

    void m1(){
        System.out.println("m1 in C");
    }
     void m2(){
        System.out.println("m2 in C");
    }

     void m4(){
        System.out.println("m4 in C");
    }
}

public class In {
    public static void main(String args[]){
        C o = new C();
        o.m1();
        o.m3();
        System.out.println(o.b + o.c);
        //o.m4();
        //o.m3();
    }
}