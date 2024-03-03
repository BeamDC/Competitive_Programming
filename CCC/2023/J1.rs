use std::io;

fn main() {
    let mut input_n = String::new();
    io::stdin().read_line(&mut input_n).expect("failed to read line");
    let p: i32 = input_n.trim().parse().expect("Invalid input");
    
    let mut input_n = String::new();
    io::stdin().read_line(&mut input_n).expect("failed to read line");
    let c: i32 = input_n.trim().parse().expect("Invalid input");
    if p>c {print!("{}",p*50-c*10+500);}
    else {print!("{}",p*50-c*10);}
}
