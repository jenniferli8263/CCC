import java.util.*;

public class Main {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
		String str = in.next();
		int[] arr = {1,2};
		int[] arr1 = {3,4};
		int h = 0;
		int v = 0;
		for(int i=0;i<str.length();i++){
			if (str.charAt(i)=='H'){
				h++;
			}
			else{
				v++;
			}
		}
		h%=2;
		v%=2;
		if (v==1){
			int tmp = arr[1];
			arr[1] = arr[0];
			arr[0]=tmp;
			tmp = arr1[1];
			arr1[1] = arr1[0];
			arr1[0]=tmp;
		}
		if (h==1){
			int tmp[] = arr1.clone();
			arr1 = arr;
			arr=tmp;
		}
		for(int i=0;i<2;i++){
			System.out.print(arr[i]);
			System.out.print(" ");
		}
		System.out.println();
		for(int i=0;i<2;i++){
			System.out.print(arr1[i]);
			System.out.print(" ");
		}
  }
}