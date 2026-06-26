class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        freq = {}
        for a in s:
            freq[a]=freq.get(a,0) + 1

        for a in t:
            freq[a]=freq.get(a,0) - 1

        return all(v==0 for v in freq.values())