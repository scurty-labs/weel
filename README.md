# Weel Package Manager

Weel is a WIP 'Package Manager' for the Monkey2 Programming Language. Allowing you to easily download new modules, build projects/modules, and generate simple project templates.

## Beta Installation:

*First, make sure you have `git` installed.*

*Clone this repository and build it in Ted2Go as a console application named `weel`, move the contents of main.products into your `monkey2/bin` Installation folder*

*Finally, be sure to add the full `monkey2/bin` path to your `PATH` environment variable so you can execute `weel` and `mx2cc` from the terminal/console.*

# USAGE:

*`weel -h`: To view the help page.*

### --- Creating new Project

*`weel new [type] [project name]`: Gerates a new project template with a premade `project.json` or `module.json` file included.*

#### - Types Include:

* `empty`

* `console`

* `gui`

* `2d`

* `3d`

* `module`

### --- Installing Modules

*`weel -i [module name]`: Will automatically download and install target module into `monkey2/modules` directory.*

### --- Building Modules

*`weel buildmod [module name] [platform]`: Builds target module in both release and debug mode on specified platform*

### --- Building Projects

*`weel build [project name] [platform]`: Project is built in `debug` mode for target platform.*

*`weel buildr [project name] [platform]`: Same as above but in release mode.*

##### - Platforms Include:

* `windows`

* `linux`

* `macos`

* `android`

* `ios`

* `wasm`

* `emscripten`

### --- Adding Modules to Repository

*`weel add [package name] [package git/zip URL]`: Adds an entry to the main repo list for later access.
