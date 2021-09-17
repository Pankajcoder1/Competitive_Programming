import java.io.* ;
import java.util.*;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.StringTokenizer;


// Change name of class here first, before compiling

public class Cf{
    public static void main(String []args){
        FastScanner fs = new FastScanner();
        int testcases = fs.nextInt();
        for(int tt=0;tt<testcases;tt++){
            int n=fs.nextInt();
            Node[] nodes = new Node[n];
            for(int i=0;i<n;i++){
                nodes[i]=new Node();
            }
            for(int j=1;j<n;j++){
                int a=fs.nextInt()-1,b=fs.nextInt()-1;
                nodes[a].children.add(nodes[b]);
                nodes[b].children.add(nodes[a]);
            }
            nodes[0].dfs(null);
            int ans=1;
            for(Node nn:nodes){
                if(nn.isRoot){
                     ans--;
                }
                if(!nn.cutAbove){
                    ans++;
                }
                else if(!nn.isRoot){
                    ans--;
                }
            }
            System.out.println(ans);
        }
    }

    static class Node{
        ArrayList<Node> children = new ArrayList<>();
        boolean isRoot;
        boolean cutAbove;

        public void dfs(Node parent){
            if(parent==null){
                isRoot=true;
            }
            else{
                children.remove(parent);
            }
            for(Node pr:children){
                pr.dfs(this);
                if(!pr.cutAbove){
                    cutAbove=true;
                }
            }
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

