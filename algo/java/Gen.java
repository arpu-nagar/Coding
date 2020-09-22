import java.util.*;
class Pri<T>
{
    T arr[];

    void print(T arr[]){    
        for(T x : arr) System.out.println(x);
    }
}

public class Gen
{
    public static void main(String[] args) 
    { 
          
        //Upper Bounded Integer List 
        List<Integer extends ?> list1= Arrays.asList(4,5,6,7); 
          
        //printing the sum of elements in list 
        System.out.println("Total sum is:"+sum(list1)); 
  
        //Double list 
        //List<Number> list2=Arrays.asList(4.1,5.1,6.1); 
          
        //printing the sum of elements in list 
        //System.out.print("Total sum is:"+sum(list2)); 
    } 
  
    private static int sum(List<Integer extends ?> list)  
    { 
        int sum=0.0; 
        for (Number i: list) 
        { 
            sum+=i.integerValue(); 
        } 
  
        return sum; 
    } 
}