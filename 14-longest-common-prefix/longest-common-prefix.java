class Solution {
    public String longestCommonPrefix(String[] strs) {
        StringBuilder sb = new StringBuilder();

        if(strs == null || strs.length == 0)return "";
        for(int col = 0; col < strs[0].length(); col++)
        {
            char ch = strs[0].charAt(col);

            for(int row = 0; row < strs.length; row++)
            {
                if(col >= strs[row].length() || strs[row].charAt(col) != ch)
                {
                    return sb.toString();
                }
            }
            sb.append(ch);
        }
        return sb.toString();
    }
}