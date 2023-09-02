# Toroidal Kōnane

A toroidal version of [Kōnane](https://en.wikipedia.org/wiki/K%C5%8Dnane)

## Building

```bash
make compile
```

## Using

The executable will be inside of build

```
Usage: konane -h | --help
konane [FILE | SIZE]
-h, --help Show this help and exit.
If FILE is given, open the given FILE (if FILE is "-", read standard input),
after loading it, initiate an interactive session.
If SIZE is given instead, initiate an interactive session with a new game of
the given SIZE. SIZE must be even and greater than 0.
```
