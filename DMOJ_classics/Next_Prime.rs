use std::io;

macro_rules! parse_line { //read a line with multiple int inputs
    ($($t: ty),+) => ({
        let mut a_str = String::new();
        io::stdin().read_line(&mut a_str).expect("read error");
        let mut a_iter = a_str.split_whitespace();
        (
            $(
            a_iter.next().unwrap().parse::<$t>().expect("parse error"),
            )+
        )
    })
}

fn is_prime(p: u32) -> u32{
    if p==1{return 0;}
    for x in 2..((p as f64).sqrt() as u32){
        if p%x == 0{return 0;}
    }
    return 1;
}

fn main() {
    let mut n = parse_line!(u32).0;
    while is_prime(n) != 1{
        n+=1;
    }print!("{}",n)
}
