/********************** BabaYaga Rules **********************/

import java.util.*;
import java.util.Map.Entry;
import java.io.*;

public class C{

	static int mod=(int)1e9+7;
	
	public static void main(String[] args) throws IOException {
//		PrintWriter out=new PrintWriter(System.out);
//		Reader in=new Reader(System.in);	
		FileWriter out = new FileWriter("C://Users/anurp/Desktop/ts.txt");
		Scanner in = new Scanner(new File("C://Users/anurp/Downloads/c.txt"));
		int ts=1;
//		ts=in.nextInt();
		while(ts-->0) solve(in, out);
		out.close();
	}
	
	static void solve(Scanner in, FileWriter out) throws IOException{
		
		int d=in.nextInt();
		int c=in.nextInt();
		int s=in.nextInt();
		int v=in.nextInt();
		int f=in.nextInt();
		
		Map<String, Integer> mp=new HashMap<>();
		street [] st=new street[s];
		
		Map<String, Integer> traf=new HashMap<>();
		
		for(int i=0; i<s; ++i) {
			int b=in.nextInt(), e=in.nextInt();
			String name=in.next();
			int l=in.nextInt();
			mp.put(name, i);
			st[i]=new street(b,e,name,l);
		}
		
		for(int i=0; i<v; ++i) {
			int p=in.nextInt();
			for(int j=0; j<p; ++j) {
				String str=in.next();
				if(traf.containsKey(str)) {
					traf.put(str, traf.get(str)+1);
				}else {
					traf.put(str, 1);
				}
			}
		}
	
		Map<Integer, ArrayList<String>> mpt = new HashMap<>();
		Map<Integer, Integer> totraf = new HashMap<>();
		
		for(Entry<String, Integer> e: traf.entrySet()) {
			String ts=e.getKey();
			int tr=e.getValue();
			int ind=mp.get(ts);
			
			int ending=st[ind].e;
			
			if(mpt.containsKey(ending)) {
				mpt.get(ending).add(ts);
			} else {
				ArrayList<String> tmp = new ArrayList<>();
				tmp.add(ts);
				mpt.put(ending, tmp);
			}
			
			if(totraf.containsKey(ending)) {
				totraf.put(ending, totraf.get(ending)+tr);
			} else {
				totraf.put(ending, tr);
			}
		}
		
		out.write(totraf.size()+"\n");
		
		for(Entry<Integer, Integer> e: totraf.entrySet()) {
			ArrayList<String> tmp=mpt.get(e.getKey());
			int total=e.getValue();
			
			out.write(e.getKey()+"\n");
			out.write(tmp.size()+"\n");
			
			int block=d/500;
			
			for(String tmps: tmp) {
				int toWrite = traf.get(tmps)*block/total;
				toWrite = Math.max(1, toWrite);
				out.write(tmps+" "+toWrite+"\n");
			}
			
		}
		
		
	}
	
	static class pair{
		String s;
		int t;
		pair(String g, int h){
			s=g; t=h;
		}
	}

	static class street{
		int b;
		int e;
		String name;
		int l;
		int traffic;
		street(int g, int h, String s, int len){
			b=g; e=h; name=s; l=len; traffic=0;
		}
	}
	
	static void sort(int a[]) {
		ArrayList<Integer> al=new ArrayList<>();
		for(int i: a) al.add(i);
		Collections.sort(al);
		for(int i=0; i<a.length; ++i) a[i]=al.get(i);
	}
	
	static class Reader{
		
		BufferedReader br;
		StringTokenizer to;
		
		Reader(InputStream stream){
			br=new BufferedReader(new InputStreamReader(stream));
			to=new StringTokenizer("");
		}
		String nextLine() {
			String line="";
			try {
				line=br.readLine();
			}catch(IOException e) {};
			return line;
		}
		String next() {
			while(!to.hasMoreTokens()) {
				try {
					to=new StringTokenizer(br.readLine());	
				}catch(IOException e) {}
			}
			return to.nextToken();
		}
		int nextInt() {
			return Integer.parseInt(next());
		}
		long nextLong() {
			return Long.parseLong(next());
		}
		int [] readArray(int n) {
			int a[]=new int[n];
			for(int i=0; i<n; i++) a[i]=nextInt();
			return a;
		}
		long [] readLongArray(int n) {
			long [] a =new long[n];
			for(int i=0; i<n; ++i) a[i]=nextLong();
			return a;
		}
	}	
	
}