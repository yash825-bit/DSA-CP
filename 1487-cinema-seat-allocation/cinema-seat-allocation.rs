impl Solution {
    fn max_number_of_families(n: i32, mut rs: Vec<Vec<i32>>) -> i32 {
        rs.sort();
        rs.chunk_by(|x, y| x[0] == y[0]).fold(n * 2, |r, rs| {
            r - (rs.iter().fold(0, |m, x| m | 3 << x[1] / 2 >> 2 & 7) + 5) / 6
        })
    }
}