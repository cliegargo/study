use std::collections::HashMap;

fn high(input: &str) -> &str {
    let _alpha_score = HashMap::from([
        ('a', 1), ('b', 2), ('c', 3), ('d', 4), ('e', 5), ('f', 6), ('g', 7),
        ('h', 8), ('i', 9), ('j', 10), ('k', 11), ('l', 12), ('m', 13),
        ('n', 14), ('o', 15), ('p', 16), ('q', 17), ('r', 18), ('s', 19),
        ('t', 20), ('u', 21), ('v', 22), ('w', 23), ('x', 24), ('y', 25),
        ('z', 26)
    ]);

    let mut words:Vec<&str> = Vec::new();
    let mut score:Vec<i32> = Vec::new();
    let mut letters = "".to_string();
    let mut sum = 0;

    for c in input.chars() {
        if _alpha_score.contains_key(&c) {
            if c != ' ' {
                letters.push(c);
                sum += _alpha_score.get(&c).unwrap();
            } else {
                words.push(&letters);
                score.push(sum);
                letters.clear();
                sum = 0;
            }
        }
    }

    //println!("{:?}", words);
    //println!("{:?}", score);

    return "String";
}


fn main() {
    let input = "Rust won't let me do stupid things.";
    /*
    let mut input = String::new();

    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");
    */

    println!("{}", high(&input));
}
