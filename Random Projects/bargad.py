import pygame
import sys
import time
import random

pygame.init()

WIDTH, HEIGHT = 900, 500
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("ankur.kcn")

FONT = pygame.font.SysFont("Helvetica", 40, italic=True)
colors = [
    (82, 8, 23),
    (120, 30, 60),
    (176, 60, 92),
    (250, 195, 210),
    (60, 25, 70)
]

# UPDATED LYRICS
lyrics = [
    "ki raani teri ek jhalak se main pagal",
    "hoon main pagal",
    "sametu teri khushboo ko choom ke chaadar",
    "choom ke chaadar",
    "hawa ko roke dhool sajaata teri",
    "pehne na tu payal",
    "bin bataaye aati yaadon mein bhi",
    "som ka jharoka maano aankhon mein teri",
    "inn mein doob sa gaya hoon karke pooja jo teri",
]

def typewriter_text(text, color, bg_color, char_delay=0.1, duration=1.2):
    current_text = ""
    for char in text:
        current_text += char
        text_surface = FONT.render(current_text, True, color)
        text_surface = text_surface.convert_alpha()
        rect = text_surface.get_rect(center=(WIDTH // 2, HEIGHT // 2))

        screen.fill(bg_color)
        screen.blit(text_surface, rect)
        pygame.display.flip()
        time.sleep(char_delay)

        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                pygame.quit()
                sys.exit()

    time.sleep(duration)

    for alpha in range(200, -1, -12):
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                pygame.quit()
                sys.exit()

        screen.fill(bg_color)
        text_surface.set_alpha(alpha)
        screen.blit(text_surface, rect)
        pygame.display.flip()
        time.sleep(0.02)


durations = [0.8] * len(lyrics)

for i, line in enumerate(lyrics):
    bg = random.choice(colors)
    typewriter_text(line, (200, 200, 200), bg, char_delay=0.05, duration=durations[i])

pygame.quit()
 