use std::io;
fn main() {

    let mut num_in = String::new();
    io::stdin()
    .read_line(&mut num_in)
    .expect("Failed to read line");
    let n: i32 = num_in.trim().parse().expect("Input not an integer");
    
    let mut t = 2;
    let mut i = 1;
    
    if n == 1{println!("0");return;}
    
    while t < n{
        t *= 2;
        i += 1;
    }println!("{}",i);
    
}
