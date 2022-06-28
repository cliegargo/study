// https://www.codewars.com/kata/530e15517bc88ac656000716/train/rust


use std::io;

fn rot13(message: &str) -> String {
    let mut rot = String::new();

    for c in message.chars() {
        if c.is_alphabetic() {
            let check = c as u8 + 13;

            if c.is_uppercase() {
                if check > 90 {
                    rot.push((check - 26) as char);
                } else {
                    rot.push(check as char);
                }
            } else {
                if check > 122 {
                    rot.push((check - 26) as char);
                } else {
                    rot.push(check as char);
                }
            }
        } else {
            rot.push(c);
        }
    }

    rot.to_string()
}


fn main() {
    let mut message = String::new();

    io::stdin()
        .read_line(&mut message)
        .expect("Failed to read line");

    println!("{}", rot13(&message));
}
