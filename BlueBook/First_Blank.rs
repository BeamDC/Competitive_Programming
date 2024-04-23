use std::io;
fn main() {
    let mut num_in = String::new();
    io::stdin()
    .read_line(&mut num_in)
    .expect("Failed to read line");
    let n: i32 = num_in.trim().parse().expect("Input not an integer");
    
    for _a in 0..n{
       let mut input = String::new();
        io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");
        
        for (i,c) in input.char_indices(){
            if c == ' ' {println!("{}\n",i+1);break;}
            if i == input.len() - 1 {println!("0\n");}
        } 
    }
    
}
