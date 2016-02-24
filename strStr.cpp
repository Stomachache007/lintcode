# lintcode
class Solution {
public:
    /**
     * Returns a index to the first occurrence of target in source,
     * or -1  if target is not part of source.
     * @param source string to be scanned.
     * @param target string containing the sequence of characters to match.
     */
    int strStr(const char *source, const char *target) {
     const char *sourceBeg = source, *targetBeg = target;
     
     if (source == nullptr || target == nullptr) {
                    return -1
                }
     if (!*target) {
                    return (source-sourceBeg);
     }      
        for ( ; *source; source++) {
            const char *sourceThis = source;
            for (target = targetBeg ; *target ; target++) {
                if (*sourceThis != *target) {
                    break;
                }
                sourceThis++;
            }
            if (!*target) {
                    return (source-sourceBeg);
                }
        }
        return -1;
    }
};
