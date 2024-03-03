use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("failed to read line");
    let r: i32 = input.trim().parse().expect("Invalid input");
    
    let mut input2 = String::new();
    io::stdin().read_line(&mut input2).expect("failed to read line");
    let g: i32 = input2.trim().parse().expect("Invalid input");
    
    let mut input3 = String::new();
    io::stdin().read_line(&mut input3).expect("failed to read line");
    let b: i32 = input3.trim().parse().expect("Invalid input");
    
    let n: i32 = r*3 + g*4 + b*5;
    
    print!("{}",n);
}
