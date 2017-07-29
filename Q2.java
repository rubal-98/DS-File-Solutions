import java.util.Scanner;

class Q1{
	public static void main(String [] args){
		int flag=0;
		Scanner obj=new Scanner(System.in);
		System.out.println("Enter the  number of Elements");
		int n=obj.nextInt();
		int[] arr=new int[n];
		System.out.println("Enter the elements of array: ");
		for(int i=0;i<n;i++){
			arr[i]=obj.nextInt();
		}
		System.out.println("Enter the element you want to search ");
		int j=obj.nextInt();
		for(int i=0;i<n;i++){
			if(arr[i]==j){
				flag=1;
				System.out.println("Element found at index :"+i);
			}
		}
		if(flag==0){
			System.out.println("Element is not present in the array");
		}
	}
	

}
