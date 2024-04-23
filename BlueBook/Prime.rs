use std::io;

fn is_prime(p: u32){
    if p==1{println!("0");return;}
    for x in 2..p/2 + 1{ //had to add one to make sure 4 worked.
        if p%x == 0{println!("0");return;}
    }
    println!("1");return;
}
fn main() {
    let mut n_in = String::new();
    io::stdin()
    .read_line(&mut n_in)
    .expect("Failed to read line");
    let t: u32 = n_in.trim().parse().expect("Input not an integer");

    for _x in 0..t{
        n_in.clear();
        io::stdin()
        .read_line(&mut n_in)
        .expect("Failed to read line");
        let n: u32 = n_in.trim().parse().expect("Input not an integer");
        is_prime(n);
    }
    
}
