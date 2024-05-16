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
    let (a,b) = parseln!(i8,i8);
    if a/10 == b/10 || (a/10 == 9 && b/10 == 10) {println!("Same");return;}
    
    else if a<60 && b<60 {println!("Same");return;}
    println!("Different");
}
