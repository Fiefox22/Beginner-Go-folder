// package main

// import (
// 	"fmt"
// 	"math/rand"
// )

// func number_game() {
// 	var user_number int
// 	lives := 3

// 	for lives > 0 {
// 		fmt.Println("Enter a random number: ")
// 		fmt.Scan(&user_number)

// 		num := rand.Intn(10)
// 		//fmt.Println(num)

// 		if user_number == num {
// 			fmt.Println("You guessed the number correctly", num)
// 			return
// 		} else if user_number > num {
// 			fmt.Println("Your guess was too high the number was", num)

// 		} else {
// 			fmt.Println("Your guess was too low the number was", num)
// 		}
// 		lives--

// 		fmt.Println("Lives left:", lives)
// 	}
// 	fmt.Println("Game over")
// }

// func main() {
// 	number_game()

// }
