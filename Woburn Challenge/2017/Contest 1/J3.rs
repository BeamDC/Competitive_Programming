use std::io;
macro_rules! parseln {
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
    let (mut a, mut b);
    let mut wa:u32=0;
    let mut wb:u32=0;
    for _x in 0..7{
        (a,b) = parseln!(u32,u32);
        if a>b{wa+=1;}
        else {wb+=1;}
        if wa==4||wb==4{break;}
    }
    println!("{} {}",wa,wb);
}
