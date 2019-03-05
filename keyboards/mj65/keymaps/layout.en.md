# Layout & Keymaps of MJ65

## SUMMARY

MJ65 supports six layout using different footprints.
The IDEAL layout is, of course, the JIS layout with 65 keys.
However, it requires a 3.5u keycap, which is hard to be found.
Therefore MJ65 supports split spaces JIS layout, both of which just requires a usual 1.75u keycap.

Are you US-layout (ANSI-layout) lovers? Although MJ65 does not support actual US layout, MJ65 even supports the US-like layout with 62 keys. Some keymaps at right side is similar to HHKB.

Do you want one more key such as Menu Key? MJ65 also supports one additional key at the lower right side.

Supported layouts is below:
|Name|Description|
|----|-----------|
|[default](#default)|JIS layout, 65 keys|
|[split_space](#split_space)|JIS layout with split space, 66 keys|
|[us_like](#us_like)|US-like layout, 62 keys|
|[1app](#1app)|JIS layout with one additional Menu Key, 66 keys|
|[1app_split](#1app_split)|JIS layout with one additional Menu Key and split space, 67 keys|
|[1app_us](#1app_us)|US layout with one additional Menu Key, 63 keys|

## Soldering for each layout

- For [split_space](#split_space) and [1app_split](#1app_split)

    Solder two switches on these two footprints:
    ![split_space_footprints](https://urushiyama.github.io/projects/MJ65/img/layouts/split_space_footprints.png)
    instead of soldering one switch on these one footprint:
    ![uni_space_footprints](https://urushiyama.github.io/projects/MJ65/img/layouts/uni_space_footprints.png)

- For [us_like](#us_like)

    Solder three switches on these three footprints:
    ![us_like_footprints](https://urushiyama.github.io/projects/MJ65/img/layouts/us_like_footprints.png)
    instead of soldering four switches on these four footprints:
    ![jis_footprints](https://urushiyama.github.io/projects/MJ65/img/layouts/jis_footprints.png)

- For [1app](#1app), [1app_split](#1app_split), and [1app_us](#1app_us)

    Solder three switches on these three footprints:
    ![1app_footprints](https://urushiyama.github.io/projects/MJ65/img/layouts/1app_footprints.png)
    instead of soldering two switches on these two footprints:
    ![non_1app_footprints](https://urushiyama.github.io/projects/MJ65/img/layouts/non_1app_footprints.png)


## Layouts Description

各レイアウトとも，そのままキーをタイプした場合にはBase Layer，Shiftと同時押し時にはShift Layerのキーマップに基づいた入力が生じます．
Fnキーを押下している間に別のキーをタイプした場合にはFunction Layerのキーマップに基づいた入力が生じます．

On each layout, you can input based on Base Layer if you type a key without pressing shift nor Fn.
If you type a key with pressing shift, you can input based on Shift Layer.
If you type a key with pressing Fn, you can input based on Function (Fn) Layer.

|Label|Input|
|---|---|
|Esc|Escape|
|Del|Backspace/Delete (backward delete)|
|Tab|Tab|
|Enter|Enter|
|Ctr/Ctrl|Control|
|Shift|Shift|
|Caps|Caps Lock|
|Opt|Option/Alt|
|Cmd|Command/WIN/GUI|
|Space|Space|
|EN|Change IME to enter English (JIS)|
|JP|Change IME to enter Japanese (JIS)|
|Fn|Momentary shift into Fn Layer|
|Pow|System Power|
|F1~F13|Function Keys|
|Ejc|Eject|
|Ddw|Display Brightness Down|
|Dup|Display Brightness Up|
|<<|Previous Track|
|>\|\||Play/Pause|
|>>|Next Track|
|Sx|Sound Mute|
|Sdw|Sound Volume Down|
|Sup|Sound Volume Up|
|L_LOCK|Exclusively lock Fn Layer. Press once again to unlock.|
|-^|Up Arrow|
|<-|Left Arrow|
|-v|Down Arrow|
|->|Right Arrow|
|KP_Ent|Keypad Enter|
|App|Application Key|

### default

![default_layout](https://urushiyama.github.io/projects/MJ65/img/layout/default.png)

```
- Base Layer

,---.---.---.---.---.---.---.---.---.---.---.---.---.---.---.
|Esc| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | - | ^ | \ |Del|
|---'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'---|
|Tab  | q | w | e | r | t | y | u | i | o | p | @ | [ |Enter|
|-----'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.    |
|Ctrl  | a | s | d | f | g | h | j | k | l | ; | : | ] |    |
|------'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'----|
|Shift   | z | x | c | v | b | n | m | , | . | / | _ | Shift|
|-----.--'.--'-.-'--.'---'---'---'.--'-.-'--.'--.'---'.-----|
|Caps |Opt| Cmd|  EN|    Space    |JP  |Cmd |Opt| Ctrl|   Fn|
`-----'---'----'----'-------------'----'----'---'-----'-----'

- Shift Layer

,---.---.---.---.---.---.---.---.---.---.---.---.---.---.---.
|Esc| ! | " | # | $ | % | & | ' | ( | ) |   | = | ~ | | |Del|
|---'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'---|
|Tab  | Q | W | E | R | T | Y | U | I | O | P | ` | { |Enter|
|-----'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.    |
|Ctrl  | A | S | D | F | G | H | J | K | L | + | * | } |    |
|------'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'----|
|Shift   | Z | X | C | V | B | N | M | < | > | ? | _ | Shift|
|-----.--'.--'-.-'--.'---'---'---'.--'-.-'--.'--.'---'.-----|
|Caps |Opt| Cmd|  EN|    Space    |JP  |Cmd |Opt| Ctrl|   Fn|
`-----'---'----'----'-------------'----'----'---'-----'-----'

- Function (Fn) Layer

,---.---.---.---.---.---.---.---.---.---.---.---.---.---.---.
|Pow|F1 |F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12|F13|Ejc|
|---'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'---|
|     |Ddw|Dup|   |   |   |   |<< |>||| >>|Sx |Sdw|Sup|     |
|-----'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.    |
|      |   |   |   |   |   |   |   |   |   |-^ |   |   |    |
|------'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'----|
|L_Lock  |   |   |   |   |   |   |   |   |<- |-v |-> |      |
|-----.--'.--'-.-'--.'---'---'---'.--'-.-'--.'--.'---'.-----|
|     |   |    |    |             |    |    |   |     |     |
`-----'---'----'----'-------------'----'----'---'-----'-----'
```

### split_space

![split_space_layout](https://urushiyama.github.io/projects/MJ65/img/layout/split_space.png)

```
- Base Layer

,---.---.---.---.---.---.---.---.---.---.---.---.---.---.---.
|Esc| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | - | ^ | \ |Del|
|---'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'---|
|Tab  | q | w | e | r | t | y | u | i | o | p | @ | [ |Enter|
|-----'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.    |
|Ctrl  | a | s | d | f | g | h | j | k | l | ; | : | ] |    |
|------'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'----|
|Shift   | z | x | c | v | b | n | m | , | . | / | _ | Shift|
|-----.--'.--'-.-'--.'---'-.-'---'.--'-.-'--.'--.'---'.-----|
|Caps |Opt| Cmd|  EN| Space|KP_Ent|JP  |Cmd |Opt| Ctrl|   Fn|
`-----'---'----'----'------'------'----'----'---'-----'-----'

- Shift Layer

,---.---.---.---.---.---.---.---.---.---.---.---.---.---.---.
|Esc| ! | " | # | $ | % | & | ' | ( | ) |   | = | ~ | | |Del|
|---'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'---|
|Tab  | Q | W | E | R | T | Y | U | I | O | P | ` | { |Enter|
|-----'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.    |
|Ctrl  | A | S | D | F | G | H | J | K | L | + | * | } |    |
|------'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'----|
|Shift   | Z | X | C | V | B | N | M | < | > | ? | _ | Shift|
|-----.--'.--'-.-'--.'---'-.-'---'.--'-.-'--.'--.'---'.-----|
|Caps |Opt| Cmd|  EN| Space|KP_Ent|JP  |Cmd |Opt| Ctrl|   Fn|
`-----'---'----'----'------'------'----'----'---'-----'-----'

- Function (Fn) Layer

,---.---.---.---.---.---.---.---.---.---.---.---.---.---.---.
|Pow|F1 |F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12|F13|Ejc|
|---'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'---|
|     |Ddw|Dup|   |   |   |   |<< |>||| >>|Sx |Sdw|Sup|     |
|-----'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.    |
|      |   |   |   |   |   |   |   |   |   |-^ |   |   |    |
|------'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'----|
|L_Lock  |   |   |   |   |   |   |   |   |<- |-v |-> |      |
|-----.--'.--'-.-'--.'---'-.-'---'.--'-.-'--.'--.'---'.-----|
|     |   |    |    |      |      |    |    |   |     |     |
`-----'---'----'----'------'------'----'----'---'-----'-----'
```

### us_like

![us_like_layout](https://urushiyama.github.io/projects/MJ65/img/layout/us_like.png)

```
- Base Layer

,---.---.---.---.---.---.---.---.---.---.---.---.---.---.---.
|Esc| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | - | = | \ | ` |
|---'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'---|
|Tab  | q | w | e | r | t | y | u | i | o | p | [ | ] |  Del|
|-----'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'-----|
|Ctrl  | a | s | d | f | g | h | j | k | l | ; | ' |   Enter|
|------'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'--------|
|Shift   | z | x | c | v | b | n | m | , | . | / |     Shift|
|-----.--'.--'-.-'---'---'---'---'---'--.'--.'--.'----.-----|
|Caps |Opt| Cmd|          Space         |Cmd|Opt| Ctrl|   Fn|
`-----'---'----'------------------------'---'---'-----'-----'

- Shift Layer

,---.---.---.---.---.---.---.---.---.---.---.---.---.---.---.
|Esc| ! | @ | # | $ | % | ^ | & | * | ( | ) | _ | + | | | ~ |
|---'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'---|
|Tab  | Q | W | E | R | T | Y | U | I | O | P | { | } |  Del|
|-----'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'-----|
|Ctrl  | A | S | D | F | G | H | J | K | L | : | " |   Enter|
|------'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'--------|
|Shift   | Z | X | C | V | B | N | M | < | > | ? |     Shift|
|-----.--'.--'-.-'---'---'---'---'---'--.'--.'--.'----.-----|
|Caps |Opt| Cmd|          Space         |Cmd|Opt| Ctrl|   Fn|
`-----'---'----'------------------------'---'---'-----'-----'

- Function (Fn) Layer

,---.---.---.---.---.---.---.---.---.---.---.---.---.---.---.
|Pow|F1 |F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12|F13|Ejc|
|---'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'---|
|     |Ddw|Dup|   |   |   |   |<< |>||| >>|Sx |Sdw|Sup|     |
|-----'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'-----|
|      |   |   |   |   |   |   |   |   |   |-^ |   |        |
|------'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'--------|
|L_Lock  |   |   |   |   |   |   |   |   |<- |-v |->        |
|-----.--'.--'-.-'--.'---'---'---'.--'-.-'--.'--.'----.-----|
|     |   |    |    |             |    |    |   |     |     |
`-----'---'----'----'-------------'----'----'---'-----'-----'
```

### 1app

![1app_layout](https://urushiyama.github.io/projects/MJ65/img/layout/1app.png)

```
- Base Layer

,---.---.---.---.---.---.---.---.---.---.---.---.---.---.---.
|Esc| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | - | ^ | \ |Del|
|---'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'---|
|Tab  | q | w | e | r | t | y | u | i | o | p | @ | [ |Enter|
|-----'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.    |
|Ctrl  | a | s | d | f | g | h | j | k | l | ; | : | ] |    |
|------'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'----|
|Shift   | z | x | c | v | b | n | m | , | . | / | _ | Shift|
|-----.--'.--'-.-'--.'---'---'---'.--'-.-'--.'--.'--.'--.---|
|Caps |Opt| Cmd|  EN|    Space    |JP  |Cmd |Opt|Ctr|App| Fn|
`-----'---'----'----'-------------'----'----'---'---'---'---'

- Shift Layer

,---.---.---.---.---.---.---.---.---.---.---.---.---.---.---.
|Esc| ! | " | # | $ | % | & | ' | ( | ) |   | = | ~ | | |Del|
|---'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'---|
|Tab  | Q | W | E | R | T | Y | U | I | O | P | ` | { |Enter|
|-----'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.    |
|Ctrl  | A | S | D | F | G | H | J | K | L | + | * | } |    |
|------'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'----|
|Shift   | Z | X | C | V | B | N | M | < | > | ? | _ | Shift|
|-----.--'.--'-.-'--.'---'---'---'.--'-.-'--.'--.'--.'--.---|
|Caps |Opt| Cmd|  EN|    Space    |JP  |Cmd |Opt|Ctr|App| Fn|
`-----'---'----'----'-------------'----'----'---'---'---'---'

- Function (Fn) Layer

,---.---.---.---.---.---.---.---.---.---.---.---.---.---.---.
|Pow|F1 |F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12|F13|Ejc|
|---'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'---|
|     |Ddw|Dup|   |   |   |   |<< |>||| >>|Sx |Sdw|Sup|     |
|-----'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.    |
|      |   |   |   |   |   |   |   |   |   |-^ |   |   |    |
|------'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'----|
|L_Lock  |   |   |   |   |   |   |   |   |<- |-v |-> |      |
|-----.--'.--'-.-'--.'---'---'---'.--'-.-'--.'--.'--.'--.---|
|     |   |    |    |             |    |    |   |   |   |   |
`-----'---'----'----'-------------'----'----'---'---'---'---'
```

### 1app_split

![1app_split_layout](https://urushiyama.github.io/projects/MJ65/img/layout/1app_split.png)

```
- Base Layer

,---.---.---.---.---.---.---.---.---.---.---.---.---.---.---.
|Esc| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | - | ^ | \ |Del|
|---'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'---|
|Tab  | q | w | e | r | t | y | u | i | o | p | @ | [ |Enter|
|-----'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.    |
|Ctrl  | a | s | d | f | g | h | j | k | l | ; | : | ] |    |
|------'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'----|
|Shift   | z | x | c | v | b | n | m | , | . | / | _ | Shift|
|-----.--'.--'-.-'--.'---'-.-'---'.--'-.-'--.'--.'--.'--.---|
|Caps |Opt| Cmd|  EN| Space|KP_Ent|JP  |Cmd |Opt|Ctr|App| Fn|
`-----'---'----'----'------'------'----'----'---'---'---'---'

- Shift Layer

,---.---.---.---.---.---.---.---.---.---.---.---.---.---.---.
|Esc| ! | " | # | $ | % | & | ' | ( | ) |   | = | ~ | | |Del|
|---'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'---|
|Tab  | Q | W | E | R | T | Y | U | I | O | P | ` | { |Enter|
|-----'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.    |
|Ctrl  | A | S | D | F | G | H | J | K | L | + | * | } |    |
|------'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'----|
|Shift   | Z | X | C | V | B | N | M | < | > | ? | _ | Shift|
|-----.--'.--'-.-'--.'---'-.-'---'.--'-.-'--.'--.'--.'--.---|
|Caps |Opt| Cmd|  EN| Space|KP_Ent|JP  |Cmd |Opt|Ctr|App| Fn|
`-----'---'----'----'------'------'----'----'---'---'---'---'

- Function (Fn) Layer

,---.---.---.---.---.---.---.---.---.---.---.---.---.---.---.
|Pow|F1 |F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12|F13|Ejc|
|---'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'---|
|     |Ddw|Dup|   |   |   |   |<< |>||| >>|Sx |Sdw|Sup|     |
|-----'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.    |
|      |   |   |   |   |   |   |   |   |   |-^ |   |   |    |
|------'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'----|
|L_Lock  |   |   |   |   |   |   |   |   |<- |-v |-> |      |
|-----.--'.--'-.-'--.'---'-.-'---'.--'-.-'--.'--.'--.'--.---|
|     |   |    |    |      |      |    |    |   |   |   |   |
`-----'---'----'----'------'------'----'----'---'---'---'---'
```

### 1app_us

![1app_us_layout](https://urushiyama.github.io/projects/MJ65/img/layout/1app_us.png)

```
- Base Layer

,---.---.---.---.---.---.---.---.---.---.---.---.---.---.---.
|Esc| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | - | = | \ | ` |
|---'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'---|
|Tab  | q | w | e | r | t | y | u | i | o | p | [ | ] |  Del|
|-----'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'-----|
|Ctrl  | a | s | d | f | g | h | j | k | l | ; | ' |   Enter|
|------'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'--------|
|Shift   | z | x | c | v | b | n | m | , | . | / |     Shift|
|-----.--'.--'-.-'---'---'---'---'---'--.'--.'--.'--.---.---|
|Caps |Opt| Cmd|          Space         |Cmd|Opt|Ctr|App| Fn|
`-----'---'----'------------------------'---'---'---'---'---'

- Shift Layer

,---.---.---.---.---.---.---.---.---.---.---.---.---.---.---.
|Esc| ! | @ | # | $ | % | ^ | & | * | ( | ) | _ | + | | | ~ |
|---'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'---|
|Tab  | Q | W | E | R | T | Y | U | I | O | P | { | } |  Del|
|-----'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'-----|
|Ctrl  | A | S | D | F | G | H | J | K | L | : | " |   Enter|
|------'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'--------|
|Shift   | Z | X | C | V | B | N | M | < | > | ? |     Shift|
|-----.--'.--'-.-'---'---'---'---'---'--.'--.'--.'--.---.---|
|Caps |Opt| Cmd|          Space         |Cmd|Opt|Ctr|App| Fn|
`-----'---'----'------------------------'---'---'---'---'---'

- Function (Fn) Layer

,---.---.---.---.---.---.---.---.---.---.---.---.---.---.---.
|Pow|F1 |F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12|F13|Ejc|
|---'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'---|
|     |Ddw|Dup|   |   |   |   |<< |>||| >>|Sx |Sdw|Sup|     |
|-----'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'.--'-----|
|      |   |   |   |   |   |   |   |   |   |-^ |   |        |
|------'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'--------|
|L_Lock  |   |   |   |   |   |   |   |   |<- |-v |->        |
|-----.--'.--'-.-'--.'---'---'---'.--'-.-'--.'--.'--.---.---|
|     |   |    |    |             |    |    |   |   |   |   |
`-----'---'----'----'-------------'----'----'---'---'---'---'
```

## Extra Keys

MJ65 provide extra 11 footprints to sold key switches (or some momentary switches you prefer) at the upper right of the PCB.

By default, there are no keymaps for them. So you have to configure QMK firmware to utilize them.

```
,---.---.---.---. ,---.---.---. ,---.---.---. ,---.
|Ex0|Ex1|Ex2|Ex3| |Ex4|Ex5|Ex6| |Ex7|Ex8|Ex9| |ExA|
`---'---'---'---' `---'---'---' `---'---'---' `---'
```

There is a macro function to configure extra keys as below：
```c
LAYOUT_WITH_EXTRA( \
  LAYOUT_[LAYOUT NAME](...), \ /* Layout settings except Extra Keys */
  ex0, ex1, ex2, ex3, ex4, ex5, ex6, ex7, ex8, ex9, exA \
)
```
