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
    let c1 = parseln!(String).0;
    if c1 == "RED"{
        let c2 = parseln!(String).0;
        if c2 == "BLUE"{println!("WHITE");return;}
        else {println!("BLUE");return;}
    }
    else if c1 == "BLUE"{
        let c2 = parseln!(String).0;
        if c2 == "RED"{println!("WHITE");return;}
        else {println!("RED");return;}
    }
    else{
        let c2 = parseln!(String).0;
        if c2 == "BLUE"{println!("RED");return;}
        else {println!("BLUE");return;}
    }
}
