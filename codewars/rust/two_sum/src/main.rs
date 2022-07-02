// https://www.codewars.com/kata/52c31f8e6605bcc646000082/train/rust


fn two_sum(numbers: &[i32], target: i32) -> (usize, usize) {
	let mut x = 0;
	let mut y = 0;

	for i in 0..numbers.len() {
		for j in 0..i {
			if numbers[i] + numbers[j] == target {
				x = i;
				y = j;
			}
		}
	}

	(x, y)
}

fn main() {
	////////////////let numbers = [1, 2, 3];
	let numbers = [1234, 5678, 9012];
	let target = 14690;

	println!("{:?}", two_sum(&numbers, target));
}
