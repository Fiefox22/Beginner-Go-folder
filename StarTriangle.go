package main

import "fmt"

func main() {
	var triangle_size int
	fmt.Println("How big do you want your triangle to be")
	fmt.Scan(&triangle_size)

	for i := 0; i < triangle_size; i++ {
		fmt.Println("*")
	}
}
