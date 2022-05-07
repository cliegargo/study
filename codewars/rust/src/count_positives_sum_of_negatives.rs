// https://www.codewars.com/kata/576bb71bbbcf0951d5000044/train/rust

fn count_positives_sum_negatives(input: Vec<i32>) -> Vec<i32> {
	let pstv: usize = input.iter()
		.map(|&x| x as i32)
		.filter(|&x| x > 0)
		.collect::<Vec<i32>>()
		.len();

	let ngtv: i32 = input.iter()
		.map(|&x| x as i32).
		filter(|&x| x < 0)
		.collect::<Vec<i32>>()
		.iter().sum();

	if pstv > 0 || ngtv > 0 {
		[pstv as i32, ngtv].to_vec()
	} else {
		[].to_vec()
	}
}

fn main() {
	let v = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15].to_vec();

	println!("{:?}", count_positives_sum_negatives(v));
}