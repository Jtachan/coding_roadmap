"""Module for signal generator."""

import time
from dataclasses import dataclass
from math import pi, sin
from typing import Iterator


@dataclass
class SinusoidalSignal:
    """Class for sinusoidal signal.

    Attributes
    ----------
    amplitude_pp : float
        Peak-to-peak amplitude of the signal, defined in volts.
    frequency : float
        Frequency of the signal, defined in Hz.
    initial_phase : float
        Starting phase of the signal, defined in radians.
    """

    amplitude_pp: float = 1.0
    frequency: float = 1.0
    initial_phase: float = 0.0

    def generate_signal(self, sample_rate: float = 100.0) -> Iterator[float]:
        """
        Infinite generator that produces a sine wave at `sample_rate` samples/second.
        Prints each value to the terminal and yields it until the user presses Ctrl+C.

        Parameters
        ----------
        sample_rate : float
            How many samples per second to generate/print.
        """
        amp = self.amplitude_pp / 2.0
        omega = 2 * pi * self.frequency
        period = 1 / sample_rate

        signal_t = 0

        while True:
            try:
                value = amp * sin(omega * signal_t + self.initial_phase)
                yield value
                signal_t += period

                # Introducing a delay of 0.1 seconds to be able to see the signal values at the terminal.
                time.sleep(0.1)
            except KeyboardInterrupt:
                break


if __name__ == "__main__":
    signal = SinusoidalSignal(amplitude_pp=5)
    for sample in signal.generate_signal(sample_rate=50):
        print(sample)
