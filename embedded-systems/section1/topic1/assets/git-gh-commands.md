---
title: "Git on the Command Line"
---

## Resources

- [git docs](https://git-scm.com/book/en/v2/)

## Basic Git Commands

We can use the git version control application directly from the command line. Here are some useful commands to get started.

- `git init` - This command will create a git repository in the current folder on your machine.

The best way to create a repo is to do it on github via a browser. Once this is done you can clone the repo to your machine. Make your working folder where you want the repo stored and run the following command.
- `git clone UrlOfRepoOnGithub`.

You will have had to copy the **url** of the github repo to the clipboard. Then use the following command to clone. This url is just an example. You would copy the clipboard to the command line.
- `git clone https://github.com/RobbinLawComputerEngineering/Semiconductors-Public.git`.

Once your github repo is cloned down to your machine you can start adding folders and files to the repo, and changing what is already in the repo.

When you make an addition or change to a file, always **SAVE** it, then use the following command to see that git knows there has been a change.
- `git status` - This will give you the current status of your local git repository.

At this point the changed files names will be **red**.

The next thing is that you have to **stage** your changes.
- `git add .` - Use this command to "stage" all of your current changes so that they are ready to be committed.
- `git status` will show that the changed files are staged by turning the file names **green** from red.

Now you are ready to commit the recent changes.
- `git commit -m "Your Message"` - This command will take all of the staged changes and create a snapshot of the current state of your repository. Using commits is how we generate a *commit history* for our repository. The message is **NOT optional**.

Finally you will want to update your github repo with the changes made on you machines local repo. You can have many commits to one push.
- `git push` - This command will take whatever commits you have on your computer and push them to the remote repository on GitHub.com.

If you are working with others and someone changes the github repo, you will have to **pull** to get those changes on your machine.
- `git pull` - Use this command to grab any changes from your remote repository (e.g.: GitHub.com) and pull them down onto your local repository (the one on your computer).
The pull command is a combination of
`git fetch` and `git merge` commands.

Another great command to see what is going on.
- `git log` - This will give you the history of your git repository

There are a lot of things to learn when it comes to working with git, but these commands are the day-to-day ones that you will do as you work with version control.

## Remote Repositories

You can use the GitHub CLI to create a remote repository on GitHub.com.

```shell
gh repo create my-first-repository
```

The command above is interactive, so just follow the prompts.

You can **push** your code to GitHub.com by typing the following:

```shell
git push -u origin main
```

Note that the -u means set upstream.
After that, you will only need to type `git push` to push any local changes to the remote repository.

You can **pull** your code from GitHub.com by typing the following:

```shell
git pull upstream main
```

After that, you will only need to type `git pull` to pull any remote changes to the local repository.

Here's some other helpful commands with regard to the remote repository connections for your local repository.

- `git remote -v` - View all the remote repositories
- `git remote remove [remoteName]` - Remove a remote entry
- `git remote add [remoteName] [URL-to-Repository]` - Add a remote repository
