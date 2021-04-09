
package main

import (
        "bufio"
        "fmt"
        "log"
        "os"
)

func main() {
        buf := bufio.NewReader(os.Stdin)
        input, err := buf.ReadString('\n')
        if err != nil {
                log.Fatal(err)
        }
        fmt.Println(input)

}

