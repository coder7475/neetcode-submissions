impl Solution {
    pub fn replace_elements(arr: Vec<i32>) -> Vec<i32> {
        let n = arr.len();
        let mut ans = vec![0; n];

        for i in 0..n {
            let mut right_max = -1;

            for j in (i + 1)..n {
                right_max = right_max.max(arr[j]);
            }

            ans[i] = right_max;
        }

        ans
    }
}
