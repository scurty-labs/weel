# Weel Package Manager

Weel is a WIP 'Package Manager' for the Monkey2 Programming Language. Allowing you to easily download new modules, build projects/modules, and generate simple project templates.

## Beta Installation:
*First, make sure you have `git` installed.*

*Clone this repository and build it in Ted2Go as a console application named `weel`, move the contents of main.products into your `monkey2/bin` Installation folder*

*Finally, be sure to add the full `monkey2/bin` path to your `PATH` environment variable so you can execute `weel` and `mx2cc` from the terminal/console.*

## Usage:
*`weel -h`: To view the help page.*

*`weel new [type] [project name]`: Gerates a new project template with a premade `project.json` or `module.json` file included.*

#### Types Include:

⋅⋅* `empty`

⋅⋅* `console`

⋅⋅* `gui`

⋅⋅* `2d`

⋅⋅* `3d`

⋅⋅* `module`

#### Installing Modules

*`weel -i [package name]`: Will automatically download and install target module into `monkey2/modules` directory and build it.*

#### Adding Modules to Local Repo

*`weel add [package name] [package git/zip URL]`: Adds an entry to your local repo list, for later access.
