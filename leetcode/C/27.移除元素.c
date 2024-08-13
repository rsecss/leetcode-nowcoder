/*
 * @lc app=leetcode.cn id=27 lang=c
 *
 * [27] 移除元素
 */

// @lc code=start
int removeElement(int *nums, int numsSize, int val)
{
    int source = 0;
    int destination = 0;
    while (source < numsSize)
    {
        if (nums[source] != val)
        {
            nums[destination] = nums[source];
            destination++;
            source++;
        }
        else
        {
            source++;
        }
    }

    return destination;
}
// @lc code=end
