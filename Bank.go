// package main

// import "fmt"

// func main() {
// 	bank()
// }

// func bank() {
// 	var balance float32 = 100.00
// 	//fmt.Println("Your bank balance is $", balance)
// 	var user_input int32
// 	fmt.Println("At this bank you can \n1.withdraw cash \n2.diposit cash \n3.see balance.")
// 	fmt.Scan(&user_input)

// 	if user_input == 1 {
// 		var withdraw float32
// 		fmt.Println("How much would you like to withdraw? ")
// 		fmt.Scan(&withdraw)
// 		if withdraw <= balance {
// 			var money_exit = balance - withdraw
// 			fmt.Printf("You withdrew $%.2f and are left with $%.2f\n", withdraw, money_exit)
// 		} else {
// 			fmt.Println("You do not have enough money for this withdraw.")
// 		}
// 	} else {
// 		var desposit float32
// 		fmt.Println("How much money would you like to desposit? ")
// 		fmt.Scan(&desposit)
// 		var updated_Balance float32 = balance + desposit
// 		fmt.Printf("You have deposited $%.2f and your new balance is $%2.f", desposit, updated_Balance)

// 	}
// }
