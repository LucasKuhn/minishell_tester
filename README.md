<img width="1728" alt="image" src="https://user-images.githubusercontent.com/26127185/175815870-be78bbd5-d1be-4164-954a-982768c6b147.png">

# Installation 
Clone the repo **inside** your minishell folder 
```sh
cd minishell
git clone https://github.com/LucasKuhn/minishell_tester.git
cd minishell_tester
```

# How to run 
Run the `tester` file to run all the tests for the mandatory part of the project
```sh
./tester
```
<p align="center">
  <img src="https://user-images.githubusercontent.com/26127185/175816613-324711eb-5511-4dea-84b6-3117d6b79d28.gif" width="720"/>
</p>

# Separate tests
You can also call `./tester` + `test_file` to run only a specific part of the test:
```sh
./tester builtins 
```
```sh
./tester pipes 
```
```sh
./tester redirects 
```
```sh
./tester extras 
```

# Manual tests 
The tester does **not** test everything. We added some suggestions of manual test in the [manual_tests](manual_tests) folder
- [mandatory](manual_tests/mandatory)
- [heredoc](manual_tests/heredoc)
- [signals](manual_tests/signals)
- [not_mandatory](manual_tests/not_mandatory)

# Bonus 
We also have tests for the `wildcards` part of the bonus: 
```
./tester wildcards 
```
* Make sure your executable is called `minishell_bonus`

# Extra tests
We decided to leave out some tests from the mandatory part, things like syntax errors and OS specific code.
<p align="center">
  <img width="800" alt="Screen Shot 2022-06-26 at 10 40 18 AM" src="https://user-images.githubusercontent.com/26127185/175816956-d7358f24-6498-4c53-932f-183c9f0bd1ba.png">
</p>

You can run them like any other separate test:
```sh
./tester syntax
```
```sh
./tester os_specific
```
