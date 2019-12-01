/*
 * Code for week 9 exercises of C++ for Finance.
 *
 * Copyright 2019 Laurence Alexander Hurst
 *
 * This file is part of C++ for Finance.
 *
 *     C++ for Finance is free software: you can redistribute it and/or modify
 *     it under the terms of the GNU General Public License as published by
 *     the Free Software Foundation, either version 3 of the License, or
 *     (at your option) any later version.
 *
 *     C++ for Finance is distributed in the hope that it will be useful,
 *     but WITHOUT ANY WARRANTY; without even the implied warranty of
 *     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *     GNU General Public License for more details.
 *
 *     You should have received a copy of the GNU General Public License
 *     along with Foobar.  If not, see <https://www.gnu.org/licenses/>.
 *
 * See the file LICENCE in the original source code repository for the
 * full licence.
 */


#ifndef CPP_FINANCE_WEEK9_CODE_COMPUTER_HPP
#define CPP_FINANCE_WEEK9_CODE_COMPUTER_HPP

// Class representing a computer object
class Computer {
private:
    int memory_; // Computer's memory in MB
    int processor_speed_; // Processor speed in MHz
    // True if the computer is turned on
    bool turned_on_;

public:
    // Constructor
    Computer(int memory, int processor_speed);
    // Returns true if the computer is turned on
    bool IsOn() const;
    void TurnOn(); // Turn the computer on
    void TurnOff(); // Turn the computer off
    // Turn the computer on if off and off if on.
    void TogglePower();
};

#endif //CPP_FINANCE_WEEK9_CODE_COMPUTER_HPP
