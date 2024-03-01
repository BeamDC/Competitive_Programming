use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("failed to read line");
    let mut n: i32 = input.trim().parse().expect("Invalid input");
    
    loop {
        let mut input1 = String::new();
        io::stdin().read_line(&mut input1).expect("failed to read line");
        let m: i32 = input1.trim().parse().expect("invalid input");
        if n<=m{
            break;
        }
        n = n+m;
    }
    print!("{}",n);
}
