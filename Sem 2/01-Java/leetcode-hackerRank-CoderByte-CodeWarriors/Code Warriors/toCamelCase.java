class toCamelCase{

  static String toCamelCase(String s){
        char charArr[]=s.toCharArray();
        for(int i=0; i<charArr.length; i++)
            if(charArr[i]=='-' || charArr[i]=='_')
                charArr[i+1]=Character.toUpperCase(charArr[i+1]);
        String line=new String(charArr);
        String arr[]=line.split("[-_]");
       String converted=String.join("", arr);
        return converted;
  }
	public static void main(String[] args)
	{
	 System.out.println("Inside the main method");
	}
}