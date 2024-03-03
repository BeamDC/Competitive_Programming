use std::io;

fn main() {
    let mut input1 = String::new();
    io::stdin().read_line(&mut input1).expect("failed to read line");
    let a: u32 = input1.trim().parse().expect("Invalid input");
    let mut input2 = String::new();
    io::stdin().read_line(&mut input2).expect("failed to read line");
    let b: u32 = input2.trim().parse().expect("Invalid input");
    
    print!("{}",a*8 + b*3 - 28);
}
