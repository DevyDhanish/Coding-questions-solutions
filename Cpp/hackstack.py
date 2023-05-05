class Solution():
    def find(self, haystack, needle) -> int:
        if haystack == needle: return 0

        pat = "" 
        i = 0
        l = len(needle)

        if l <= 1:
            for i in range(i, len(haystack)):
                if haystack[i] == needle:
                    return i
            return -1

        while i < len(haystack):
            for j in range(i, l + i):
                if j < len(haystack):
                    pat += haystack[j]
                else:
                    return -1

            if pat == needle:
                return i

            i += 1
            pat = ""

sol = Solution()

print(f"found {'dhanish'} at index {sol.find('         dhanish','dhanish')}")
