// https://www.codewars.com/kata/5556282156230d0e5e000089/train/rust


use std::io;

fn dna_to_rna(dna: &str) -> String {
    let mut rna = String::new();

    for c in dna.chars() {
        if c == 'T' {
            rna.push_str("U");
        } else {
            rna.push_str(&c.to_string());
        }
    }

    return rna.to_string();
}

fn main() {
    let mut dna = String::new();

    io::stdin()
        .read_line(&mut dna)
        .expect("Failed to read line");

    println!("{}", dna_to_rna(&dna));
}
