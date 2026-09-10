fun main(){
    var a: Int?
    print("Enter a number:")
    a = readln().toIntOrNull() ?: 0
    var isEven = a%2==0
    a = a?.inc()
    var test: String?
    when(a){
        null -> {
            print("Enter a new no.")
            var b = readln().toInt()
            print("The new number you entered is ${b}")
        }

        !is Nothing?->{
            print("Hello a is not null!!")
        
        }
        in (6..45)-> {
            print("Ok this is interesting")
        }
    }
    print("Is the number, $a, even? $isEven")
}