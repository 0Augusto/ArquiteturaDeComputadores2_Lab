import java.io.*;

public class teste_envia_java
{
  public static void main (String [] args)
  throws Exception
  {

   ProcessBuilder pb;
	Process p;
	int j, tempo=70;
	String x;
   Long start_time;
   Long diff_time;

	for(int i=0;i<=10;i++)
		{
 			j=i%2;
			x = "0"+" "+"0"+" "+j;
  			pb = new ProcessBuilder("envia.exe","com10",x); // NÃO SE ESQUEÇA DE COLOCAR A PORTA DO ARDUINO !!!!!
			p = pb.start();
        
         start_time = System.nanoTime();
         p.waitFor( );
         diff_time = (System.nanoTime() - start_time)/1000000;

   		try { Thread.sleep(tempo); }
					catch(Exception e)
					{ 	System.out.println("Ups!"); }

   		System.out.println("i= "+i+" j= "+j+" atraso="+diff_time+" ms"+" -- O que foi enviado: envia.exe com... "+x);
   	//	System.out.println("i= "+i+" j= "+j+"-- O que foi enviado: envia.exe com... "+x);
		}


	}
}