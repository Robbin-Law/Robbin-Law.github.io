# Odd Things about the CodeWarrior IDE

## Creating New Projects using Wizard

Use the project wizard provided with the IDE to quickly create new projects. The wizard creates everything needed for a minimal, ready-to-run project. Use the created project as a foundation upon which to add features for each new project.

```C
Choose File > New Project.
```

- The New Project Wizard opens.

- Enter a project name in the Project Name field and set the Location for the new project.

## Opening Projects Created on Other Hosts

CodeWarrior projects whose names end in .mcp are cross-platform. However, the object code stored inside each project folder is not cross-platform. Use these procedures to properly open the project on a different host computer.

- Copy the project folder from the original host to the new host.
- **Delete the Data folder inside the newly copied project folder**.
- Open the newly copied project on the new host IDE.
- Recompile the project to generate new object code.

## Saving Projects

The IDE automatically saves projects and updates project information after performing these actions:

- Closing the project.
- Applying or saving a preference or target-setting option
- Adding, deleting, or compiling a file.
- Editing group information.
- Removing or compacting object code.
- Quitting the IDE.

**Remember This** - The only way to tell where the project is to be stored is when creating the project. You cannot `save as` the project as a whole via the IDE anywhere else after it has been created.

