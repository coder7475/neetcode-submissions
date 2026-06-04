impl Solution {
    pub fn is_subsequence(s: String, t: String) -> bool {
        let s = s.as_bytes();
        let t = t.as_bytes();

        fn rec(s: &[u8], t: &[u8], i: usize, j: usize) -> bool {
            if i == s.len() { return true; }
            if j == t.len() { return false; }
            if s[i] == t[j] {
                return rec(s, t, i+1, j+1);
            }

            rec(s, t, i, j+1)
        }

        rec(s, t, 0, 0)
    }
}
