public class poweroftwo{
    public boolean ispoweroftwo(int n){
        return n>0&&(n&(n-1))==0;
        }
        public static void main(String args[]){
        poweroftwo powercheck=new poweroftwo();
        int[]testnumbers={1,2,4,100};
        for(int num:testnumbers){
            System.out.println(num+"is power of 2"+powercheck.ispoweroftwo(num));
        }
}
}
