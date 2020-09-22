
interface A
{
    void lmao();
}

interface B
{
    //int lol(int b);

    void l();
}

class m implements A,B
{
    public int lol(int x){
        return x+1;
    }
    // public void lmao(){
    //     //System.out.println(B.x);
    //     System.out.println("lmao");
    // }
    public void l(){
        System.out.println("l");
    }
}

public class Inf{
    public static void main(String args[]){
        m o = new m();
        System.out.println(o.lol(2));
       // o.lmao();
        o.l();
    }
}