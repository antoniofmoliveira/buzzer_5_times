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
		// tone(frequency, duration_in_seconds)
		err := buzzerOut.Tone(buzzer.Gb6, .5)
		if err != nil {
			panic(err)
		}
		time.Sleep(500 * time.Millisecond)
	}

}
