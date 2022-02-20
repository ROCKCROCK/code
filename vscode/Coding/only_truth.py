import discord
import random
#from online import online

client = discord.Client()

starter_truth=[
  "What would be in your web history that you’d be embarrassed if someone saw?",
"How would you rate your looks on a scale of 1 to 10?",
"If you were rescuing people from a burning building and you had to leave one person behind from this VC /server, who would it be?",
"Who in this VC/server would be the worst person to date? Why?",
"Have you ever waved at someone thinking they saw you when really they didn't? What did you do when you realized it?",
"What's the longest time you've stayed in the bathroom, and why did you stay for that long?",
"Describe the strangest dream you've ever had. Did you like it?",
"What is the most childish thing that you still do?",
"Has your boyfriend or girlfriend ever embarrassed you?",
"Have you ever been caught checking someone out?",
"Tell us about a time you embarrassed yourself in front of a crush.",
"Do you have any silly nicknames?Name it?",
"If you were home by yourself all day, what would you do?",
"Have you ever got caught doing something you shouldn’t?Explain?",
"What part of your body do you love, and which part do you hate?",
"Have you ever had a crush on a friend’s boyfriend/girlfriend?",
"Who is your first pick for prom?",
"What's one physical feature that you would change on yourself if you could?",
"Would you go a year without your phone if it meant you could marry the person of your dreams?",
"What have you seen that you wish you could unsee?",
"If you could be reincarnated into anyone's body, who would you want to become?In this server.",
"If your car broke down in the middle of the road, who in this vc/server would be the last person you would call? Why?",
"Rate everyone in the room from 1 to 10, with 10 being the hottest?",
"If your friend asked you to lie for her and you knew you would get in trouble, would you do it?",
"If one of your friends were cheating with your other friend's boyfriend/Girlfriend, what would you do?",
"If your friend and your boyfriend were both dying in front of you, who would try to save first?",
"What’s something you love to do with your friends that you’d never do in front of your partner?",
"What’s one thing you’d do if you knew there no consequences?",
"Do you believe in any superstitions? If so, which ones?",
"When’s the last time you apologized? What for?",
"For what purpose did u use a Fake ID last time?",
"What’s your biggest regret in life?",
"If you could date two people at once, would you do it? If so, who?",
"List one positive and one negative thing about everyone in the room.",
"What’s the most sinful thing you’ve done in a house of worship?",
"Who among us would you want to swap lives with for a week?",
"What’s your biggest insecurity?",
"What was the last adult movie you watched?",
"What your least favorite memory from college?",
"Who do you think might be the best kisser here from the opposite gender?",
"What’s something you’re embarrassed that you’re good at?",
"Who would you bring with you on a deserted island?",
"What’s something you know you need to do but aren’t looking forward to at all?",
"Who would you like to kiss in this vc?",
"What is something that people think you would never be into, but you are?",
"What’s the first thing you would do if you were invisible?",
"If you were to become famous for doing something gross, what would it be for/what would u prefer?",
"If you had to stop talking to one person in this room, who would it be and why?",
"What is a secret you kept from your parents?",
"Who is the cutest in the VC?",
"Who is ur that secret crush..u r hiding from everyone but ur friends already know?",
"What is your biggest insecurity?",
"What is the weirdest trend you've ever participated in?",
"What are the top three things you look for in a boyfriend/girlfriend?",
"How naughty would you go on your first date?",
"Who in this vc would u watch an R rated movie with and name the movie?"
]



@client.event
async def on_ready():
  print('We have logged in as {0.user}'.format(client))

@client.event
async def on_message(message):
  if message.author == client.user:
    return

  if message.content.startswith('[truth'):
    await message.channel.send(random.choice(starter_truth))
  
 
#online()
client.run('ODE5MTA3ODUyOTU0MTA3OTE1.YEhzog.HBLWZxPYH-c7QR_w50cjVaPPwUE')
