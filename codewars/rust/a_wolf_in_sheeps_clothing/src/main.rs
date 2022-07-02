// https://www.codewars.com/kata/5c8bfa44b9d1192e1ebd3d15/train/rust


fn warn_the_sheep(queue: &[&str]) -> String {
	let pos = queue.iter().rev().position(|s| s == &"wolf").unwrap();
	let mut msg = String::new();

	if pos == 0 {
		msg.push_str("Pls go away and stop eating my sheep");
	} else {
		msg.push_str(&format!("Oi! Sheep number {}! You are about to be eaten by a wolf!", pos));
	}

	msg
}

fn main() {
	let queue = ["sheep", "sheep", "sheep", "sheep", "sheep", "wolf", "sheep", "sheep"];

	println!("{}", warn_the_sheep(&queue));
}
