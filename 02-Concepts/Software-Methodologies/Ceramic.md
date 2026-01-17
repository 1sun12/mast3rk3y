# Solo Developer Project Methodology

> A step-by-step framework for managing projects from idea to completion

## Description

Below is a *solo-dev-software-development-methodology* (phew, long name) that I created that combines the flexibility of `Agile` and the structure of a `Kanban Board`; If `Agile` and `Kanban` had a baby and I also did surgery on said baby adding cybernetic augmentations.

In a nut shell, this type of work-flow works well for me by myself lol.

I couldn't really think of a name so I just went with something on the fly. I call it `Ceramic`, because of a small trinket I keep on my desk.

## Phase 1: Discovery
---
### Step 1: Brain Dump

- Open a blank document
- Write every feature, idea, question, concern you can possibly think of
- No filtering, no organizing, just dump stuff

### Step 2 : Project Definition

Answer three important questions:

- **WHAT** is this? (one sentence)
- **WHY** am I building this? (fame? riches? revenge?)
- **HOW** do I define success? (concrete outcome)

### Step 3: Scope Boundaries

Remember, unfortunately, that you're a human being with limits, that means your project has them too!

Categorize your brain dump into:

- MUST HAVE            - Non-negotiable core functionality
- NICE TO HAVE       - Improvements and extra credit, but not essential
- OUT OF SCOPE     - Explicitly not doing (most important! write it down!)

## Phase 2: Planning
---

### Step 4: Define Being Done

What does it mean to be completely finished with this project idea?

- Write a checklist of the exit criteria
- When all of these boxes are checked, the project is "complete"
- Doing this prevents feature creep and endless polishing
- Be specific and measurable

### Step 5: Task Breakdown

Breaking down an elephant into bite-sized-chunks, because you can only eat an elephant "one bite at a time".

This is where a `Kanban Board` comes in.

- Each task should take you one "session"
- A session is a consistent period of time you can see yourself sitting down and not getting up until said thing is complete; Anywhere from 1 - 4 hours
- Having a clear completion criteria for each task
- Minimal dependencies
- If the task is gonna take you > 4 hours, it's to big and needs to be broken down further

### Step 6: Dependency Map

Some tasks require that other tasks be completed first before continuing. This is when you would take the time to make those connections.

This is when a `Backlog` comes in.

- Identify which tasks block other tasks
- Order your backlog with respect to those dependencies
- This also becomes the order of "priority" for each task

### Step 7: Create a Kanban Board

My favorite part, yahoo! Fun visualizations!

I like to create a `Kanban Board` with these (5) columns:

(Applaud my Ascii art, cheat sheet can be found [[Box-Ascii-Characters-Cheat-Sheet|here!]])

```
┌──────────────────────────────────────────────────────┐
│ Backlog | This-Sprint | In-Progress | Review  | Done │
│         |             |             |         |      │
└──────────────────────────────────────────────────────┘
```

- Populate `Backlog` with tasks in that dependency order we talked about
- Other columns start empty and will fill with cards over time originating from the `Backlog`

## Phase 3: Execution (Weekly Sprints)
---

Now that we've done all that planning, let's finally get to work!

### Step 8: Sprint Planning (Your "Monday")

Map out what you will work on during a single sprint. A sprint is usually a (1) - (3) week period of time, but I guess that is up to personal interpretation.

- Estimate available hours a week you have for coding
- Pull tasks from your `Backlog` and move them to `This-Sprint` in your `Kanban Board`
- Write a goal for your sprint
- Remember to be realistic, not optimistic (absolutely no optimism allowed!!!)

### Step 9: The Daily Grind

Now its time to actually do something; your daily agenda. It will look something like this:

- Visit your `Kanban Board`
- Move something from `This-Sprint` --> `In-Progress`
- **Work on that thing - the actual working part**
- Once finished, go from `This-Sprint` --> `Review`
- Verify that it works
- Move from `Review` to `Done` 

**Always respect your WIP (Work In Progress) limit! Take it one thing at a time.**

### Step 10: Sprint Review (Your "Friday")

On the day of your sprint review you will take these things into account:

- Move anything from `Review` that's fully completed to `Done`
- Incomplete work --> stays or returns to the `Backlog`
- Write retrospective notes:
	- What worked?
	- What blocked me?
	- What will I do differently?

**Anything in Done must remain DONE. The goal is completion, not perfectionism.**

The beauty of incomplete work during this step is anything you feel needs more progress simply gets refactored and returned to the backlog, still respecting the dependency-priority order you established in [[#Step 6 Dependency Map|Step 6]].

## Final Step: Repeat!

That's everything! 

You will basically loop from [[#Step 8 Sprint Planning (Your "Monday")|Step 8]] to [[#Step 10 Sprint Review (Your "Friday")|Step 10]] until your project is complete. Then onto the next one.

---

## Quick Reference

| Phase | Steps | Time Investment |
|-------|-------|-----------------|
| Discovery | 1-3 | ~30 min (once per project) |
| Planning | 4-7 | ~1 hour (once per project) |
| Execution | 8-11 | ~30 min/week + coding time |

---

## Why This Order

| Step                  | What It Prevents                       |
| --------------------- | -------------------------------------- |
| 1. Brain dump         | Forgetting important things later      |
| 2. Project definition | Building the wrong thing               |
| 3. Scope boundaries   | Scope creep                            |
| 4. Definition of done | Endless polishing                      |
| 5. Task breakdown     | Vague, unmeasurable work               |
| 6. Dependency mapping | Getting stuck waiting on yourself      |
| 7. Kanban board       | Disorganized execution                 |
| 8. Sprint planning    | Working on "interesting" vs. important |
| 9. Daily execution    | Context switching, multitasking        |
| 10. Sprint review     | Repeating mistakes                     |
| Final. Repeat         | Losing momentum                        |
