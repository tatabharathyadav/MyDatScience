import java.util.Scanner;
class Bubblesort
{
  public static void main(String args[])
  {
    int n,i,j,temp;
    int a[]=new int[20];
    Scanner s=new Scanner(System.in);
    System.out.println("enter number of elements");
    n=s.nextInt();
    System.out.println("enter elements");
    for(i=0;i<n;i++)
    { 
      a[i]=s.nextInt();
    }
    for(i=0;i<n;i++)
    {
      for(j=0;j<n-1;j++)
      { 
        if(a[j]>a[j+1])
        { 
          temp=a[j];
          a[j]=a[j+1];
          a[j+1]=temp;
        }
      }
    }
    System.out.println("the sorted elements are:");
    for(i=0;i<n;i++)
    { 
      System.out.println("\t"+a[i]);
    }
  }
}