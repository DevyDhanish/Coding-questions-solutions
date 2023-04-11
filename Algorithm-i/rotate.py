class Solution:
    def rotate(self, nums: list[int], k: int) -> None:
        last = len(nums)
        i = 0

        while i < k:
            for j in reversed(range(1, last)):
                temp = nums[j]
                nums[j] = nums[j - 1]
                nums[j - 1] = temp
            i += 1
        
        print(nums)

sol = Solution()

sol.rotate([7,9,6,5,3,0,8,7], 3)
