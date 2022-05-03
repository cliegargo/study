use std::io;
use std::cmp::Ordering;
use rand::Rng;

fn main() {
	println!("Rust Guessing Game");
	
	let secret_number: u32 = rand::thread_rng().gen_range(1..101);

	loop {
		println!("Please input your guess.");
		let mut guess = String::new();

		io::stdin()
			.read_line(&mut guess)
			.expect("Failed to read line");

		let guess: u32 = guess.trim()
			.parse()
			.expect("Please type a number");

		println!("Guessed: {}", guess);

		match guess.cmp(&secret_number) {
			Ordering::Less => println!("Too small!\n\n"),
			Ordering::Greater => println!("Too big!\n\n"),
			Ordering::Equal => {
				println!("You win!\n\n");
				break;
			}
		};
	}
}
