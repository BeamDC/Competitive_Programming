use std::io;
fn main() {

    let mut num_in = String::new();
    io::stdin()
    .read_line(&mut num_in)
    .expect("Failed to read line");
    let n: i32 = num_in.trim().parse().expect("Input not an integer");
    let mut input = String::new();
    let mut c;
    
    for _a in 0..n{
        input.clear();
        io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");
        let g: i32 = input.trim().parse().expect("Input not an integer");
        
        if g >=0 && g < 50{c='F';}
        else if g >= 50 && g < 60{c='D';}
        else if g >= 60 && g < 70{c='C';}
        else if g >= 70 && g < 80{c='B';}
        else if g >= 80 && g <= 100{c='A';}
        else {c='X'}   
        println!("{}\n",c);
    }   
}
