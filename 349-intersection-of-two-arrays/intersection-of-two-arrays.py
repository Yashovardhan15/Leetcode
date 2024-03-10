# class Solution:
#     def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
#         res = []
#         nums1 = set(nums1)
#         for num in nums2:
#             if num in nums1:
#                 res.append(num)
#                 nums1.remove(num)
#         return res        

class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        nums1, nums2 = set(nums1), set(nums2)
        return list(nums1.intersection(nums2))