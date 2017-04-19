// package name: module
package main

import (
	"C"
	"fmt"
	"math/rand"
	"time"
)

func main() {
}

//export Rand
func Rand() int {
	return rand.Int()
}

//export Run
func Run() {
	c := make(chan int)
	for i := 0; i < 5; i++ {
		worker := &Worker{id: i}
		go worker.Process(c)
	}

	for i := 0; i < 100; i++ {
		c <- Rand()
		time.Sleep(time.Millisecond * 50)
	}
}

type Worker struct {
	id int
}

func (w *Worker) Process(c chan int) {
	for {
		data := <-c
		fmt.Printf("worker %d got %d\n", w.id, data)
	}
}
