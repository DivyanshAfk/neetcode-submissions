class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashmap = {}
        for i, n in enumerate(nums):
            blow = target - n
            if blow in hashmap:
                return [hashmap[blow],i]
        
            else: hashmap[n] = i

        return []