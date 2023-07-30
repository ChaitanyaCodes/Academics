class command{
	public static void main(String[] args)
    {
    	int sum = 0;
        if (args.length > 0) {
            
            for (String val : args){
                sum += Integer.parseInt(val);
	    }
	    System.out.println("The sum of the command line arguments is " + sum);
        }
 	else
            System.out.println("No command line ");
        }
}
