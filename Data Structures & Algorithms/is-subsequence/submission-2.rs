impl Solution {
    pub fn is_subsequence(s: String, t: String) -> bool {
        let s = s.as_bytes();
        let t = t.as_bytes();
        let (n, m) = (s.len(), t.len());
        let mut memo = vec![vec![-1i8; m]; n.max(1)];

        fn rec(s: &[u8], t: &[u8], i: usize, j: usize, memo: &mut Vec<Vec<i8>>) -> bool {
            if i == s.len() { return true; }
            if j == t.len() { return false; }

            if memo[i][j] != -1 { return memo[i][j] == 1; }

            let result = if s[i] == t[j] {
                rec(s, t, i + 1, j + 1, memo)
            } else {
                rec(s, t, i, j + 1, memo)
            };

            memo[i][j] = if result { 1 } else { 0 };
            
            result
        }

        rec(s, t, 0, 0, &mut memo)
    }
}