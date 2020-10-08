import java.util.Scanner;
// Other imports go here
// Do NOT change the class name
class Main{
    public static void main(String[] args)
    {
      int a[] = new int[5];
      Scanner sc = new Scanner(System.in);
        for(int i=0;i<5;i++)
        {
          a[i]=sc.nextInt();
        }
      	int large =-32768 ,index=0,c=0;
      for(int i=0;i<5;i++)
      {
        if(a[i]>large)
        {
          large = a[i];
          index = i;
        }
        if(a[i]==0)
          c++;
      }
      int seclarge= -32768;
      for(int i=0;i<5;i++)
      {
        if(a[i]!=large&&i!=index)
        {
          if(a[i]>seclarge)
          {
            seclarge = a[i];
          }
        }
      }
      if(c!=5)
      System.out.print(seclarge);
      else
        System.out.println(0);
    }
}
