/*
 * @lc app=leetcode.cn id=189 lang=c
 *
 * [189] 轮转数组
 */

// @lc code=start

void Reverse(int* nums,int left,int right)
{
    while(left <= right)
    {
        int tmp = nums[left];
        nums[left]=nums[right];
        nums[right]=tmp;
        left++;
        right--;
    }
}
void rotate(int* nums, int numsSize, int k) {
    /*跑不过 
    while(k--)
    {
        int tmp = nums[numsSize-1];
        for(int end = numsSize-2; end >=0; end--)
        {
            nums[end+1]=nums[end];
        }
        nums[0]=tmp;
    } */

    //后k个逆置，前n-k个逆置，最后在整体逆置
    if(k >= numsSize)
    {
        k %= numsSize;
    }

    Reverse(nums,numsSize-k,numsSize-1);
    Reverse(nums,0,numsSize-k-1);
    Reverse(nums,0,numsSize-1);


}
// @lc code=end

