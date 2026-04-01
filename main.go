package main

import (
	"machine"
	"time"

	"tinygo.org/x/drivers/buzzer"
)

func main() {
	buzzerPin := machine.D8
	buzzerPin.Configure(machine.PinConfig{Mode: machine.PinOutput})

	buzzerOut := buzzer.New(buzzerPin)

	for _ = range 5 {
		err := buzzerOut.On()
		if err != nil {
			panic(err)
		}
		time.Sleep(500 * time.Millisecond)

		err = buzzerOut.Off()
		if err != nil {
			panic(err)
		}
		time.Sleep(500 * time.Millisecond)
	}

}
