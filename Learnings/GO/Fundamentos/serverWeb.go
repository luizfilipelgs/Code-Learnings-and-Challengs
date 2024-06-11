package main

import "net/http"

func main() {
	http.HandleFunc("/", HelloWord)
	http.ListenAndServe(":8888", nil)
}

func HelloWord(w http.ResponseWriter, r *http.Request) {
	w.Write([]byte("Hello, World !!!"))
}