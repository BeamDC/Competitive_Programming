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
fn main() {

    let mut n_in = String::new();
    io::stdin()
    .read_line(&mut n_in)
    .expect("Failed to read line");
    let n: i32 = n_in.trim().parse().expect("Input not an integer");
    
    
    for _a in 0..n{
        
        let (mut y,m,d) = parse_line!(u32,u32,u32);
        let mut t: u32 = 0;
        
        y %= 4;
        
        for b in 1..m{
            if (b%2 == 1 && b < 8) || (b%2 == 0 && b >= 8){t+=31;}
            else if b == 2 && y == 0{t+=29;}
            else if b == 2{t+=28;}
            else {t+=30};
            //println!("{} -> {}\n",b,t);
        }println!("{}\n",t+d);
    }
}
