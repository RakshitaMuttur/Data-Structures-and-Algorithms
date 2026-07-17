class Solution {
    public String categorizeBox(int length, int width, int height, int mass) 
    {
        long vol=(long)length*width*height;
        int k= 10000;
        long v=1000000000;

        boolean bulky=(length>=k || width>=k || height>=k || vol>=v);
        boolean heavy=mass>=100;

        if(bulky && heavy) return("Both");
        if(bulky && !heavy) return("Bulky");
        if(heavy && !bulky) return("Heavy");
        return("Neither");   
    }
}