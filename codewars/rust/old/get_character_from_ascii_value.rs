fn get_char(c: i32) -> char {
    return std::char::from_digit(c, 10);
}

fn main() {
    let mut line = String::new();

    std::io::stdin()
        .read_line(&mut line)
        .expect("Failed to read line");

    let c: i32 = line
        .trim()
        .parse()
        .expect("Failed to parse");

    println!("{}", get_char(c));
}
