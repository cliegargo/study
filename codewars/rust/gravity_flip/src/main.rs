// https://www.codewars.com/kata/5f70c883e10f9e0001c89673/train/rust


fn flip(dir: char, cubes: &[u32]) -> Vec<u32> {
    let mut flipped: Vec<u32> = cubes.iter().map(|&i|i).collect::<Vec<u32>>();

    if dir == 'R' {
        flipped.sort();
    } else {
        flipped.sort();
        flipped.reverse();
    }

    flipped
}

fn main() {
    let dir = 'R';
    let cubes = vec![3, 2, 1, 2];

    let dir = 'L';
    let cubes = vec![1, 4, 5, 3, 5 ];

    println!("{:?}", flip(dir, &cubes));
}
