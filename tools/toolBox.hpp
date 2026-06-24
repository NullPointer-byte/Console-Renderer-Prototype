//Copyright (c) 2026 NullPointer-byte. All Rights Reserved.

                                                                                            /*
          @@@@@@@@    @@@     @@@    @     @@@    @@@   @   @
             @@      @   @   @   @   @     @  @  @   @   @ @
             @@      @   @   @   @   @     @ @   @   @    @
             @@      @   @   @   @   @     @  @  @   @   @ @
             @@       @@@     @@@    @@@@  @@@    @@@   @   @
                                                                                            */

namespace Charset {
    constexpr char ramp[] = " .:;!*%$#@";
}

namespace Toolbox {
    struct materials {
        int brightness = 1;
        char GetChar() const {
            return Charset::ramp[brightness];
        }
    };
}
