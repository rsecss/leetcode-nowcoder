/*
 * @lc app=leetcode.cn id=14 lang=c
 *
 * [14] 最长公共前缀
 */

// @lc code=start
char *longestCommonPrefix(char **strs, int strsSize)
{
    if (strsSize == 0)
    {
        return "";
    }
    for (int i = 0; i < strlen(strs[0]); i++)
    {
        for (int j = 1; j < strsSize && j < strlen(strs[i]); j++)
        {
            if (strs[0][j] != strs[i][j])
            {
                strs[0][i] = '\0';
                return strs[0];
            }
        }
    }
    return strs[0];
}
// @lc code=end
