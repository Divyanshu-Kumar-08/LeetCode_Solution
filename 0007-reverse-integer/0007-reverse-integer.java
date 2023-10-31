class Solution {
    public int reverse(int x) {
        if(x == 0) return x;
        boolean neg = x > 0 ? false : true;
        x = x > 0 ? x : -1 * x;
        String numStr = Integer.toString(x);
        StringBuilder numStrBldr = new StringBuilder(numStr);
        numStr = numStrBldr.reverse().toString();
        try {
            x = Integer.parseInt(numStr);
            return neg ? x * -1 : x;
        } catch (Exception e) {
            return 0;
        }
    }
}