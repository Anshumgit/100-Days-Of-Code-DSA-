package Wrapper_class;


public class Integer_wrapper {
   static int myNumber(String s){
      int ans = 0;
      for(int i = 0 ; i < s.length() ; i++){
          int n = s.codePointAt(i);
          ans = ans * 10 + n;
      }
      return ans;
   }
   public static void main(String[] args){
       //1.valueOf
//        String s1= "123",s2="5";
////        int ans = myNumber(s1)+myNumber(s2);
////        System.out.println(ans;);
//
//        Integer a = Integer.valueOf(s1);
//        Integer b = Integer.valueOf(s2);
//
//        System.out.println(a+b);


       //2.toString
//        Integer a = 10;
//        String s = a.toString();
//        System.out.println("It is String = "+ s);
       //OR
//        String s= a + " ";
//        System.out.println(s);


       //3.ParseXxx
       String s1 = "123";
       int ans = Integer.parseInt(s1);
       System.out.println(ans);


       //4.hashCode
       String a = "HII";
       String b = new String("HII");
       System.out.println(a.hashCode());
       System.out.println(b.hashCode());
   }
}
