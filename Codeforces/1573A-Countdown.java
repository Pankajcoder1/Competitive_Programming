/** 
    Developer: Pankaj Kumar
**/
import java.io.* ;
import java.util.*;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.StringTokenizer;


// Experience :
// Cp is nothing but only observation and mathematics.


// Change name of class here first, before compiling


public class Cf{
    public static void main(String []args){
        FastScanner fs = new FastScanner();
        int testcases = fs.nextInt();
        for(int tt=0;tt<testcases;tt++){

            int n=fs.nextInt();
            String s=fs.next();
            int ans=0;
            for(int i=0;i<n;i++){
                if(s.charAt(i)!='0'){
                    ans+=s.charAt(i)-'0';
                    if(i!=(n-1)){
                        ans++;
                    }
                }
            }
            System.out.println(ans);                

        }
    }
    static void sort(int[] a){
        ArrayList<Integer> l=new ArrayList<>();
        for(int i:a){
            l.add(i);
        }
        Collections.sort(l);
        for(int i=0; i<a.length; i++){
            a[i]=l.get(i);
        }
    }
    static class FastScanner{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer("");
        String next(){
            while(!st.hasMoreTokens()){
                try{
                    st = new StringTokenizer(br.readLine());
                }
                catch(IOException e){
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }
        int nextInt(){
            return Integer.parseInt(next());
        }
        int[] readArray(int n){
            int[] a = new int[n];
            for(int i=0; i<n; i++){
                a[i] = nextInt();
            }
            return a;
        }
        long nextLong(){
            return Long.parseLong(next());
        }
    }
}