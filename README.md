# Subtree_POC
This repository is to test subtrees

## Subtree commands

### Add remote
`git remote add <alias name> <git URL>`

You want to add repositories as remotes so you can use aliases.

### Add subtree
`git subtree add --prefix=<directory> <remote alias> <reference>`

Add the repository contents to a given directory. Reference, refers to the tag, commit (sha), or branch.

### Remote list
`git remote -v`

Gives a list of remotes for the git repository. `-v` is for verbose, without it you only see the remote aliases.

## System Setup
The extensions C/C++ and CMake Tools will need to be added to VS Code.

I have pushed **my** CMakePresets file. This should work if you follow these [instructions](https://code.visualstudio.com/docs/languages/cpp) for getting the compiler. You will also have to download [CMake](https://cmake.org/download/).