import java.util.Scanner;  
public class Main   
{  
    public static void main(String[] args)   
    {  
        int n = 4;  
        Scanner sc=new Scanner(System.in);  

        String[] array = new String[4];  
        System.out.println("Enter the names of the cities: ");  
        for(int i=0; i<n; i++) 
        {    
            array[i]=sc.next();  
        }  
        System.out.println("Cities: ");  

        for (int i=0; i<n; i++)   
        {  
            if(array[i].equals("Mumbai"))
                continue;
            
            System.out.println(array[i]+ ",");
        }  
    }  
}