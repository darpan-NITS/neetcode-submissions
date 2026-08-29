class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        # Step 1: Get unique elements in sorted order
        unique = sorted(set(nums))

        # Step 2: Overwrite nums with these unique elements
        for i in range(len(unique)):
            nums[i] = unique[i]

        # Step 3: Return the count of unique elements
        return len(unique)
