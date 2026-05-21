 # INTRODUCTION TO ALGORITHMS AND DATA STRUCTURES IN C++
This repository contains a collection of C++ implementations of various algorithms and data structures. The code is organized into different folders based on the type of algorithm or data structure being implemented.

## Resources
- [C++ Standard Library Documentation](https://en.cppreference.com/w/)
- [GeeksforGeeks - Data Structures & Algorithms](https://www.geeksforgeeks.org/data-structures/)
- [Algorithms for Competitive Programming](https://cp-algorithms.com/)
- Books:
  - "Introduction to Algorithms 4th editions" by Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest, and Clifford Stein
  - "Data Structures and Algorithm Analysis in C++" by Mark Allen Weiss
## Contributing
Contributions to this repository are welcome! If you have an implementation of an algorithm or data structure
that is not already included, please feel free to submit a pull request. Make sure to include a clear description of the algorithm or data structure being implemented, as well as any relevant resources or references.

## License
This repository is licensed under the Apache License. See the [LICENSE](LICENSE) file for more
details.
## Contact
If you have any questions or suggestions regarding the code in this repository, please feel free to contact me at [email](mailto:eng.ayman.meo@gmail.com)    and my [GitHub](https://github.com/Ayman-Meo).

## Project Structure
```text
├── app/
│   ├── include/
│   │   ├── cli/
│   │   └── utilities/
│   ├── main.cpp
│   └── src/
│       ├── cli/
│       └── utilities/
├── docs/
|   └── GUIDE.MD
├── lib/
│   ├── include/
│   │   ├── algorithms/
│   │   │   ├── docs/
│   │   │   ├── graph/
│   │   │   ├── hashing/
│   │   │   ├── search/
│   │   │   ├── sort/
│   │   │   └── string_matching/
│   │   └── data_structure/
│   │       ├── docs/
│   │       ├── linear/
│   │       └── non_linear/
│   │           ├── graph/
│   │           ├── hashtables/
│   │           └── tree/
│   ├── src/
│   │   ├── algorithms/
│   │   │   ├── graph/
│   │   │   ├── hashing/
│   │   │   ├── search/
│   │   │   ├── sort/
│   │   │   └── string_matching/
│   │   └── data_structure/
│   │       ├── linear/
│   │       └── non_linear/
│   │           ├── graph/
│   │           ├── hashtables/
│   │           └── tree/
│   ├── test/
│   │   ├── algorithms/
│   │   │   ├── graph/
│   │   │   ├── hashing/
│   │   │   ├── search/
│   │   │   ├── sort/
│   │   │   └── string_matching/
│   │   └── data_structure/
│   │       ├── linear/
│   │       └── non_linear/
│   │           ├── graph/
│   │           ├── hashtables/
│   │           └── tree/
│   └── usage_example/
│       ├── algorithms/
│       │   ├── graph/
│       │   ├── hashing/
│       │   ├── search/
│       │   ├── sort/
│       │   └── string_matching/
│       └── data_structure/
│           ├── linear/
│           └── non_linear/
│               ├── graph/
│               ├── hashtables/
│               └── tree/
├── CMakeLists.txt
├── LICENSE
└── README.MD

```

# Directories && Files
* [CMakeLists.txt](./CMakeLists.txt): Structure file for cmake building tool.

* [docs/](./docs/): This folder will contain **.MD** files for explaining and notices.

* [app/](./app/)

  * [utilities/](./app/include/utilities): Headers of essential functions and classes for make coding and logging easy.

  * [cli/](./app/include/cli): Headers of CLI interface for app.

  * [src/](./app/src/): Implement the CLI app code.

  * [main.cpp](./app/main.cpp): Program's entry point.

* [lib/](./lib/)
  * [include/algorithms](./lib/include/algorithms/): Headers of algorithms functions and classes, write notices 
  about the implementation in [algorithms/docs](./lib/include/algorithms/docs).

  * [include/data_structure](./lib/include/data_structure/): Headers of data structures functions and classes, write notices about the implementation in [data_structure/docs](./lib/include/data_structure/docs).

  * [src/](./lib/src/): For implement  the algorithms and data structures.

  * [test/](./lib/test): For test the algorithms and data structures.

  * [usage_example](./lib/usage_example/): Present usage examples for DSA classes, functions, etc.

* [LICENSE](./LICENSE): The license of the program.

* [GUIDE.MD](./docs/GUIDE.MD): Your guid to study the project.

# [Roadmap & Guidelines](./GUIDE.MD)

 Browsing the project and study data structure and algorithms.

# TO RUN THE PROGRAM

* In Unix/Mac  
  ```bash
  # Create build directory
    cmake -B build

  # Run the executable
    ./build/program
  ```

* In Windows
  ```powershell
  # Create build directory
    cmake -B build
  # Run the executable
    .\build\Debug\program.exe
  ```