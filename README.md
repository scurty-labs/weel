# Weel Package Manager

Weel is a 'Package Manager' for the Monkey2 Programming Language. Allowing you to easily download new modules, build projects/modules, and generate simple project templates and update/setup Monkey2 from source.

## Weel Installation:

*First, make sure you have 'git' installed.*

*Clone this repository and build it in Ted2Go(or using 'weel buildr weel <platform>') as a console application named `weel`, move the contents of 'weel.products/' into your 'monkey2/bin' Installation folder*

*Next, add the full `monkey2/bin` path to your `PATH` environment variable so you can execute `weel` and `mx2cc` using the terminal/console from anywhere.*

# USAGE:

*`weel -h`: To view the help page. Weel can do more than what's listed below.*

### --- Updating Monkey2

*`weel update`* : Updates Monkey2 to the latest version and rebuilds it. (May take a while...)

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

*`weel install [module name]`: Will automatically download target module into your `monkey2/modules` directory.*

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
