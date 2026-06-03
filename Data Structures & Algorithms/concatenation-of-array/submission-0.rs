impl Solution {
    pub fn get_concatenation(nums: Vec<i32>) -> Vec<i32> {
        let mut ans = Vec::with_capacity(2 * nums.len());

        for _ in 0..2 {
            for &num in &nums {
                ans.push(num)
            }
        }
        ans
    }
}
