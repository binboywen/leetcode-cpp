单个匹配，如果两个字符相同，或者模式串当前是万能字符.，则匹配成功，然后继续递归比较 s[i + 1:] 和p[i + 1:]
如果模式串后面跟了"*"，这又分为两种情况：
(1)如果s[i]和p[i]不等(比如aa和b*这种情况)，则将b*忽略掉，也就是继续递归比较s和p[i + 2:]
(2)如果p[i]和s[i]相等(比如aa和a*这种情况)，我们可以选择忽略a*，也就是执行(1)，也可以将字符串中的a忽略掉，继续递归比较s[i + 1:]和p

作者：wang_ni_ma
链接：https://leetcode.cn/problems/regular-expression-matching/solution/liang-chong-shi-xian-xiang-xi-tu-jie-10-48bgj/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。