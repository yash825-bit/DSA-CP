class Solution {
    public String removeOuterParentheses(String s) {
        StringBuilder sb = new StringBuilder();

        int openCount = 0;
        int closeCount = 0;

        StringBuilder str = new StringBuilder();

        for(int i = 0; i < s.length(); i++)
        {
            if(s.charAt(i) == '(')
            {
                openCount++;
                str.append(s.charAt(i));
            }
            else if (s.charAt(i) == ')')
            {
                closeCount++;
                str.append(s.charAt(i));
            }
            if(openCount == closeCount)
            {
                sb.append(str.substring(1, str.length()-1));
                str.setLength(0);
                openCount = 0;
                closeCount = 0;
            }
        }
        return sb.toString();
    }
}