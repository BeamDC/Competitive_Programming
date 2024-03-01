use std::io;

fn main() {
    let mut hats: Vec<u32> = Vec::new();
    let mut input_n = String::new();
    let mut t: u32 = 0;
    io::stdin().read_line(&mut input_n).expect("failed to read line");
    let n: u32 = input_n.trim().parse().expect("Invalid input");

    for _x in 0..n{
        let mut h = String::new();
        io::stdin().read_line(&mut h).expect("failed to read line");
        let num: u32 = h.trim().parse().expect("Invalid input");
        
        hats.push(num);
    }
    
    for x in 0..n/2{
        if hats[x as usize] == hats[(x + n/2) as usize]{t=t+1}
    }
    print!("{}",t+t);
}
